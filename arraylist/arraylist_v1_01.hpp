/*
	�L��list��z��
	�g�������list�Ɠ���
	�z�񒷂�ύX����ۂɂ́A��x�����f�[�^�̈ړ����K�v
*/
#ifndef INC_HMLIB_ARRAYLIST
#define INC_HMLIB_ARRAYLIST 101
#ifndef INC_HMLIB_ARRAY
#	include "hmLib_v2/array.hpp"
#endif
#include <deque>
#include <sstream>
namespace hmstd{
	template<class T>
	class arraylist{
	protected:
		typedef unsigned int size_type;
		class Datum{
		public:
			Datum* front;
			Datum* back;
			T t;
		public:
			Datum(){
				front=0;
				back=0;
			}
			Datum(const T& _t,Datum* _front,Datum* _back){
				t=_t;
				front=_front;
				back=_back;
			}
			Datum(const Datum& _dat){
				t=_dat.t;
				front=_dat.front;
				back=_dat.back;
			}
		};
	public:
		class iterator{
		private:
			Datum* dat;
		public:
			iterator(){dat=0;}
			iterator(Datum* _dat){dat=_dat;}
			iterator(iterator& _itr){dat=_itr.dat;}
			const iterator& operator=(const iterator& _itr){
				if(this!=&_itr)dat=_itr.dat;
				return *this;
			}
			bool operator==(const iterator& _itr)const{return dat==_itr.dat;}
			bool operator!=(const iterator& _itr)const{return dat!=_itr.dat;}
			iterator& operator++(){
				dat=dat->front;
				return *this;
			}
			iterator& operator--(){
				dat=dat->back;
				return *this;
			}
			iterator operator++(int){
				iterator itr(*this);
				++(*this);
				return itr;
			}
			iterator operator--(int){
				iterator itr(*this);
				--(*this);
				return itr;
			}
			T& operator*(){return dat->t;}
			T* operator->(){return &(dat->t);}
			std::string str(){
				std::stringstream sout;
				sout<<"("<<dat->back<<"-"<<dat<<"-"<<dat->front<<")";
				return sout.str();
			}
			friend arraylist;
		};
		class reverse_iterator{
		private:
			Datum* dat;
		public:
			reverse_iterator(){dat=0;}
			reverse_iterator(Datum* _dat){dat=_dat;}
			reverse_iterator(reverse_iterator& _itr){dat=_itr.dat;}
			const reverse_iterator& operator=(const reverse_iterator& _itr){
				if(this!=&_itr)dat=_itr.dat;
				return *this;
			}
			bool operator==(const reverse_iterator& _itr)const{return dat==_itr.dat;}
			bool operator!=(const reverse_iterator& _itr)const{return dat!=_itr.dat;}
			reverse_iterator& operator++(){dat=dat->back;}
			reverse_iterator& operator--(){dat=dat->front;}
			reverse_iterator operator++(int){
				reverse_iterator itr(*this);
				++(*this);
				return itr;
			}
			reverse_iterator operator--(int){
				reverse_iterator itr(*this);
				--(*this);
				return itr;
			}
			T& operator*(){return dat->t;}
			T* operator->(){return &(dat->t);}
		};
		class const_iterator{
		private:
			Datum* dat;
		public:
			const_iterator(){dat=0;}
			const_iterator(Datum* _dat){dat=_dat;}
			const_iterator(iterator& _itr){dat=_itr.dat;}
			const_iterator(const_iterator& _itr){dat=_itr.dat;}
			const const_iterator& operator=(const const_iterator& _itr){
				if(this!=&_itr)dat=_itr.dat;
				return *this;
			}
			bool operator==(const const_iterator& _itr)const{return dat==_itr.dat;}
			bool operator!=(const const_iterator& _itr)const{return dat!=_itr.dat;}
			const_iterator& operator++(){dat=dat->front;}
			const_iterator& operator--(){dat=dat->back;}
			const_iterator operator++(int){
				const_iterator itr(*this);
				++(*this);
				return itr;
			}
			const_iterator operator--(int){
				const_iterator itr(*this);
				--(*this);
				return itr;
			}
			const T& operator*(){return dat->t;}
			const T* operator->(){return &(dat->t);}
		};
		class const_reverse_iterator{
		private:
			Datum* dat;
		public:
			const_reverse_iterator(){dat=0;}
			const_reverse_iterator(Datum* _dat){dat=_dat;}
			const_reverse_iterator(reverse_iterator& _itr){dat=_itr.dat;}
			const_reverse_iterator(const_reverse_iterator& _itr){dat=_itr.dat;}
			const const_reverse_iterator& operator=(const const_reverse_iterator& _itr){
				if(this!=&_itr)dat=_itr.dat;
				return *this;
			}
			bool operator==(const const_reverse_iterator& _itr)const{return dat==_itr.dat;}
			bool operator!=(const const_reverse_iterator& _itr)const{return dat!=_itr.dat;}
			const_reverse_iterator& operator++(){dat=dat->back;}
			const_reverse_iterator& operator--(){dat=dat->front;}
			const_reverse_iterator operator++(int){
				const_reverse_iterator itr(*this);
				++(*this);
				return itr;
			}
			const_reverse_iterator operator--(int){
				const_reverse_iterator itr(*this);
				--(*this);
				return itr;
			}
			const T& operator*(){return dat->t;}
			const T* operator->(){return &(dat->t);}
		};
	protected:
		array<Datum> Data;
		std::deque<Datum*> Ptrs;
	protected:
		virtual void workInsert(iterator& itr){if(full())throw "arraylist::insert(iterator itr,const T& _val): out of range";}
		virtual void workErase(iterator& itr){return;}
		iterator insert_simple(iterator itr,const T& _val){
			Datum* pos=Ptrs.front();
			Ptrs.pop_front();
			pos->t=_val;
			pos->front=itr.dat;
			pos->back=itr.dat->back;
			pos->back->front=pos;
			pos->front->back=pos;
			return iterator(pos);
		}
		iterator erase_simple(iterator itr){
			Ptrs.push_back(itr.dat);
			itr.dat->front->back=itr.dat->back;
			itr.dat->back->front=itr.dat->front;
			++itr;
			return itr;
		}
		void copy(const arraylist& _ar){assignArr(_ar.sizeArr(),_ar.begin(),_ar.end());}
	public:
		arraylist(){clearArr();}
		arraylist(size_type _arrsize){assignArr(_arrsize);}
		arraylist(size_type _arrsize,size_type _num,const T& _val=T()){assignArr(_arrsize,_num,_val);}
		arraylist(const arraylist& _ar){copy(_ar);}
		template<class input_iterator>
		arraylist(input_iterator _start,input_iterator _end){assignArr(_start,_end);}
		template<class input_iterator>
		arraylist(size_type _arrsize,input_iterator _start,input_iterator _end){assignArr(_arrsize,_start,_end);}
		virtual ~arraylist(){clearArr();}
		void assignArr(size_type _bufsize){
			Data.assign(_bufsize+1);
			clear();
		}
		void assignArr(size_type _bufsize,size_type _num,const T& _val=T()){
			assignArr(_bufsize);
			assign(_num,_val);
		}
		template<class input_iterator>
		void assignArr(input_iterator _start,input_iterator _end){
			size_type cnt=0;
			input_iterator itr=_start;
			while(itr!=_end){
				++itr;
				++cnt;
			}
			assignArr(cnt);
			assign(_start,_end);
		}
		template<class input_iterator>
		void assignArr(size_type _bufsize,input_iterator _start,input_iterator _end){
			assignArr(_bufsize);
			assign(_start,_end);
		}
		void clearArr(){
			Data.assign(1);
			clear();
		}
		bool emptyArr()const{return sizeArr()==0;}
		size_type sizeArr()const{return Data.size();}
		iterator begin(){return iterator(Data[0].front);}
		iterator end(){return iterator(&Data[0]);}
		reverse_iterator rbegin(){return reverse_iterator(Data[0].back);}
		reverse_iterator rend(){return reverse_iterator(&Data[0]);}
		const_iterator begin()const{return const_iterator(Data[0].front);}
		const_iterator end()const{return const_iterator(&Data[0]);}
		const_reverse_iterator rbegin()const{return const_reverse_iterator(Data[0].back);}
		const_reverse_iterator rend()const{return const_reverse_iterator(&Data[0]);}
		bool empty()const{return size()==0;}
		bool full()const{return vacancy()==0;}
		size_type vacancy()const{return Ptrs.size();}
		size_type size()const{return (Data.size()-Ptrs.size()-1);}
		T& front(){return Data[0].front->t;}
		T& back(){return Data[0].back->t;}
		const T& front()const{return Data[0].front->t;}
		const T& back()const{return Data[0].back->t;}
		void push_back(const T& _val){insert(end(),_val);}
		void push_front(const T& _val){insert(begin(),_val);}
		void pop_back(){erase(iterator(Data[0].back));}
		void pop_front(){erase(iterator(Data[0].front));}
		iterator insert(iterator itr,const T& _val){
			workInsert(itr);
			return insert_simple(itr,_val);
		}
		void insert(iterator itr,size_type _num,const T& _val){
			for(size_type i=0;i<_num;++i){
				insert(itr,_val);
			}
		}
		template<class input_iterator>
		void insert(iterator itr,input_iterator _start,input_iterator _end){
			while(_start!=_end){
				insert(itr,(*_start));
				++_start;
			}
		}
		iterator erase(iterator itr){
			workErase(itr);
			return erase_simple(itr);
		}
		iterator erase(iterator _start,iterator _end){
			while(_start!=_end){
				erase(_start);
				++_start;
			}
			return _end;
		}
		void clear(){
			Data[0].front=&Data[0];
			Data[0].back=&Data[0];
			if(Data.size()==1){
				Ptrs.clear();
				return;
			}else{
				Ptrs.assign(Data.size()-1,0);
				std::deque<Datum*>::iterator itr=Ptrs.begin(),enditr=Ptrs.end();
				array<Datum>::iterator ditr=Data.begin();
				++ditr;	//Null�f�[�^�����悯��
				while(itr!=enditr){
					(*itr)=&(*ditr);
					++ditr;
					++itr;
				}
			}
		}
		void assign(size_type _num,const T& _val=T()){
			clear();
			insert(begin(),_num,_val);
		}
		template<class input_iterator>
		void assign(input_iterator _start,input_iterator _last){
			clear();
			insert(begin(),_start,_last);
		}
		void swap(arraylist<T>& _ar){
			Data.swap(_ar.Data);
			Ptrs.swap(_ar.Ptrs);
		}
	};
}
#endif
