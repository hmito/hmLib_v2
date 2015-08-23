#ifndef INC_HMTHRCOM
#define INC_HMTHRCOM 100
#
#ifndef INC_HMGATE
#	include "hmGate.hpp"
#endif
#ifndef INC_CIRCULAR
#	include "circular.hpp"
#endif
#include <deque>
#include <boost/thread.hpp>
namespace hmLib{
	//�X���b�h�pCom
	class itfCom{
	public:
		virtual bool setGate(itfGate* pGate_)=0;
		virtual bool clearGate(itfGate* pGate_)=0;
	};
	class InfBufComGate:public itfGate{
	private:
		class ComGate:public itfGate{
		private:
			InfBufComGate* pGate;
		public:
		//input functions
			virtual char getc(){
				boost::mutex::scoped_lock Lock(pGate->oBufMutex);				
				char c=pGate->oBuf.front();
				pGate->oBuf.pop_front();
				return c;
			}
			virtual void unget(char c){
				boost::mutex::scoped_lock Lock(pGate->oBufMutex);				
				pGate->oBuf.push_front(c);
			}
			virtual bool pfail(){return false;}
			virtual bool empty(){
				boost::mutex::scoped_lock Lock(pGate->oBufMutex);
				return pGate->oBuf.empty();
			}
		//output functions
			virtual void putc(char c){
				boost::mutex::scoped_lock Lock(pGate->iBufMutex);
				pGate->iBuf.push_back(c);
			}
			virtual bool gfail(){return false;}
			virtual bool full(){return false;}
		};
	private:
		itfCom* pCom;
		boost::mutex oBufMutex;
		std::deque<char> oBuf;
		boost::mutex iBufMutex;
		std::deque<char> iBuf;
	public:
		InfBufComGate():pCom(0){return;}
		~InfBufComGate(){close();}
		bool open(itfCom& rCom_){
			//���łɊJ����Ă�����A�G���[��Ԃ�
			if(is_open())return true;

			//Com�ł̊����ĂɎ��s�����ꍇ�͏I��
			if(rCom_.setGate(this))return true;

			//Com�A�h���X��ۑ�
			pCom=&rCom_;

			return false;
		}
		bool close(){
			//���łɕ����Ă�����A�G���[��Ԃ�
			if(!is_open())return true;

			//Com��PortClear�Ɏ��s�����ꍇ�́A�G���[��Ԃ�
			if(pCom->clearGate(this))return true;

			pCom=0;
			return false;
		}
		bool is_open()const{return pCom!=0;}
		unsigned int psize(){
			boost::mutex::scoped_lock Lock(oBufMutex);
			return oBuf.size();
		}
		unsigned int gsize(){
			boost::mutex::scoped_lock Lock(iBufMutex);
			return iBuf.size();
		}
		void pclear(){
			boost::mutex::scoped_lock Lock(oBufMutex);
			oBuf.clear();
		}
		void gclear(){
			boost::mutex::scoped_lock Lock(iBufMutex);
			iBuf.clear();
		}
	public:
	//input functions
		virtual char getc(){
			while(true){
				boost::mutex::scoped_lock Lock(iBufMutex);
				if(!iBuf.empty())break;
			}
			boost::mutex::scoped_lock Lock(iBufMutex);				
			char c=iBuf.front();
			iBuf.pop_front();
			return c;
		}
		virtual void unget(char c){
			boost::mutex::scoped_lock Lock(iBufMutex);				
			iBuf.push_front(c);
		}
		virtual bool pfail(){return false;}
		virtual bool empty(){
			boost::mutex::scoped_lock Lock(iBufMutex);
			return iBuf.empty();
		}
	//output functions
		virtual void putc(char c){
			boost::mutex::scoped_lock Lock(oBufMutex);
			oBuf.push_back(c);
		}
		virtual bool gfail(){return false;}
		virtual bool full(){return false;}
	};
	class BufComGate:public itfGate{
	private:
		class ComGate:public itfGate{
		private:
			BufComGate* pGate;
		public:
			ComGate(BufComGate& rGate_):pGate(&rGate_){return;}
		//input functions
			virtual char getc(){
				boost::mutex::scoped_lock Lock(pGate->oBufMutex);				
				char c=pGate->oBuf.front();
				pGate->oBuf.pop_front();
				return c;
			}
			virtual void unget(char c){pGate->oBuf.push_front(c);}
			virtual bool pfail(){return false;}
			virtual bool empty(){
				boost::mutex::scoped_lock Lock(pGate->oBufMutex);
				return pGate->oBuf.empty();
			}
		//output functions
			virtual void putc(char c){
				boost::mutex::scoped_lock Lock(pGate->iBufMutex);
				pGate->iBuf.push_back(c);
			}
			virtual bool gfail(){return false;}
			virtual bool full(){
				boost::mutex::scoped_lock Lock(pGate->iBufMutex);
				return pGate->iBuf.full();
			}
		};
	private:
		itfCom* pCom;
		ComGate* pComGate;
		boost::mutex oBufMutex;
		hmLib::bicircular<char> oBuf;
		boost::mutex iBufMutex;
		hmLib::bicircular<char> iBuf;
	public:
		BufComGate():pCom(0){return;}
		~BufComGate(){close();}
		bool open(itfCom& rCom_,unsigned int oBufSize_,unsigned int iBufSize_){
			//���łɊJ����Ă�����A�G���[��Ԃ�
			if(is_open())return true;

			//�o�b�t�@�쐬
			if(oBuf.size()!=oBufSize_)oBuf.create(oBufSize_);
			if(iBuf.size()!=iBufSize_)iBuf.create(iBufSize_);

			//Com�ł̊����ĂɎ��s�����ꍇ�͏I��
			pComGate=new ComGate(*this);
			if(rCom_.setGate(pComGate)){
				delete pComGate;
				return true;
			}

			oBufMutex.lock();
			oBuf.create(oBufSize_);
			oBufMutex.unlock();

			iBufMutex.lock();
			iBuf.create(iBufSize_);
			iBufMutex.unlock();

			//Com�A�h���X��ۑ�
			pCom=&rCom_;

			return false;
		}
		bool close(){
			//���łɕ����Ă�����A�G���[��Ԃ�
			if(!is_open())return true;

			//Com��PortClear�Ɏ��s�����ꍇ�́A�G���[��Ԃ�
			if(pCom->clearGate(this))return true;

			oBuf.release();
			iBuf.release();

			delete pComGate;
			pComGate=0;
			pCom=0;

			return false;
		}
		bool is_open()const{return pCom!=0;}
		unsigned int psize(){
			boost::mutex::scoped_lock Lock(oBufMutex);
			return oBuf.size();
		}
		unsigned int gsize(){
			boost::mutex::scoped_lock Lock(iBufMutex);
			return iBuf.size();
		}
		void pclear(){
			boost::mutex::scoped_lock Lock(oBufMutex);
			oBuf.clear();
		}
		void gclear(){
			boost::mutex::scoped_lock Lock(iBufMutex);
			iBuf.clear();
		}
	public:
	//input functions
		virtual char getc(){
			while(true){
				boost::mutex::scoped_lock Lock(iBufMutex);
				if(!iBuf.empty())break;
			}
			boost::mutex::scoped_lock Lock(iBufMutex);				
			char c=iBuf.front();
			iBuf.pop_front();
			return c;
		}
		virtual void unget(char c){return;}
		virtual bool pfail(){return false;}
		virtual bool empty(){
			boost::mutex::scoped_lock Lock(iBufMutex);
			return iBuf.empty();
		}
	//output functions
		virtual void putc(char c){
			boost::mutex::scoped_lock Lock(oBufMutex);
			oBuf.push_back(c);
		}
		virtual bool gfail(){return false;}
		virtual bool full(){return false;}
	};
}
#
#endif
