#ifndef INC_HMLIB_TASK
#define INC_HMLIB_TASK 100
#
#include <list>
#include <algorithm>
#ifndef INC_HMLIB_ITERATORPATTERN
#	include "hmLib_v2/iterator_pattern.hpp"
#endif
namespace hmLib{
	class task{
	public:
		task():ParentPtr(0),NextPtr(0),PrevPtr(0),FirstChild(0),LastChild(0),IsRun(false),Priority(0),Status(0){return;}
		explicit task(unsigned int Priority_):ParentPtr(0),NextPtr(0),PrevPtr(0),FirstChild(0),LastChild(0),IsRun(false),Priority(Priority_),Status(0){return;}
		//�^�X�N�N��
		bool run(){
			//�q�^�X�N�Ȃ�A�v�]����
			if(isChild())return true;

			//���łɎ��s�ς݂Ȃ�A�v�]����
			if(is_run())return true;

			//���s����
			return do_run();
		}
		//�^�X�N���s
		bool work(){
			//�q�^�X�N�Ȃ�A�v�]����
			if(isChild())return true;

			//���������Ă��Ȃ���΁A�v�]����
			if(!is_run())return true;

			//���s����
			return do_work();
		}
		//�^�X�N�I��
		bool exit(){
			//�q�^�X�N�Ȃ�A�v�]��e�^�X�N�ɓ`����
			if(isChild()){
				Status=-1;
				return false;
			}

			//�����Ă��Ȃ���΁A�v�]����
			if(!is_run())return true;

			//�^�X�N�̏I������
			do_exit();

			return false;
		}
		//�D�揇�ʂɂ���ă\�[�g���邽�߂̃I�y���[�^
		bool operator<(const task& rTask_)const{return Priority<rTask_.Priority;}
		//�w��񐔂��������~
		void sleep(unsigned int Length){if(Status==0)Status=Length;}
		//�N��������&�I�������O
		bool is_run()const{return IsRun;}
		//�q�^�X�N�Ƃ��ď]��
		bool isChild()const{return ParentPtr!=0;}
		//���g�̎q�^�X�N���ǂ�������
		bool isMyChild(task& rTask_)const{return rTask_.ParentPtr==this;}
		//�q�������Ă��邩����
		bool hasChild()const{return FirstChild!=0;}
		//�D�揇�ʂ�ݒ�
		bool setPriority(unsigned int Priority_){
			if(is_run())return true;
			Priority=Priority_;
			return false;
		}
		//�D�揇�ʂ��擾
		unsigned int getPriority()const{return Priority;}
	protected://task
		//�^�X�N��������
		virtual bool task_construct(){return false;}
		//�^�X�N�ʏ폈��
		virtual bool task_work(){return false;}
		//�^�X�N�I������
		virtual bool task_destruct(){return false;}
	protected:
		bool changePriority(unsigned int Priority_){
			if(isChild()){
				if(Priority > Priority_){
					//����ʂ֕ύX����-2 �D��x��ʕύX�v��
					Status=-2;
				}else if(Priority < Priority_){
					//��艺�ʂ֕ύX����-3 �D��x���ʕύX�v��
					Status=-3;
				}
			}
			Priority=Priority_;
			return false;
		}
		//�e�^�X�N�ɐV�q�^�X�N�i���g�̎o���^�X�N�j��ǉ�
		void createSister(task& rTask_,unsigned int Priority_){
			//�q�^�X�N�łȂ���΁A�v�]����
			if(!isChild())return;
			//�ǉ�����
			ParentPtr->createChild(rTask_,Priority_);
		}
		//�q�^�X�N���쐬
		bool createChild(task& rTask_){
			//���łɑ}������Ă���΁A�v�]���� ���s�����v�]����
			if(rTask_.is_run()&&rTask_.isChild())return true;

			//�D��x�Ɋ�Â��āA�}��
			insert(rTask_,std::upper_bound(begin(),end(),rTask_));

			//���s����
			if(is_run())rTask_.do_run();

			return false;
		}
		//�q�^�X�N���쐬 �D��x�w��t��
		bool createChild(task& rTask_,unsigned int Priority_){
			//���łɑ}������Ă���΁A�v�]���� ���s�����v�]����
			if(rTask_.isChild() || rTask_.is_run())return true;

			//������
			rTask_.Priority=Priority_;

			//�D��x�Ɋ�Â��āA�}��
			insert(rTask_,std::upper_bound(begin(),end(),rTask_));

			//���s����
			if(is_run())rTask_.do_run();

			return false;
		}
		//�q�^�X�N�����
		bool releaseChild(task& rTask_){
			//���g�̎q�^�X�N�łȂ���΁A�I��
			if(!isMyChild(rTask_))return true;

			//�^�X�N�̊m�F
			iterator itr=begin(),enditr=end();

			//�^�X�N��T���č폜����
			for(;itr!=enditr;++itr){
				if(&(*itr)==&rTask_)break;
			}
			erase(itr);

			//�I������
			if(rTask_.is_run())rTask_.do_exit();

			return false;
		}
		//�q�^�X�N����� Lower�ȏ�̃^�X�N�I��
		bool releaseChild(unsigned int LowerPriority){			
			//�^�X�N��T���č폜����
			for(iterator itr=begin();itr!=end();++itr){
				if(itr->Priority <LowerPriority)continue;

				//�I������
				if(itr->is_run())itr->do_exit();
				erase(itr);
			}

			return false;
		}
		//�q�^�X�N����� Upper�����ALower�ȏ�̃^�X�N�I��
		bool releaseChild(unsigned int LowerPriority,unsigned int UpperPriority){			
			//�^�X�N��T���č폜����
			for(iterator itr=begin();itr!=end();++itr){
				if(itr->Priority < LowerPriority){
					continue;
				}else if(itr->Priority >= UpperPriority){
					break;
				}

				//�I������
				if(itr->is_run()){
					itr->do_exit();
				}
				erase(itr);
			}
			return false;
		}
	private:
		//run�����������ς���exit������������
		bool IsRun;
		//�e�^�X�N
		task* ParentPtr;
		//�O�̃^�X�N
		task* PrevPtr;
		//���̃^�X�N
		task* NextPtr;
		//���̎q�^�X�N
		task* FirstChild;
		//�O�̎q�^�X�N
		task* LastChild;
		//�D��x
		unsigned int Priority;
		//-1:�I���v��,-2:���(��)�֗D��x�ύX�v��,-3:����(��)�֗D��x�ύX�v���@���Ȃ�w��񐔎��s�ҋ@�@0�Ȃ�ʏ���s
		int Status;
	private://��{�q�^�X�N�����֐��Q
		class iterator:public pattern::bidirectional_iterator_pattern<iterator,task>{
		private:
			task* Ptr;
		protected:
			virtual void increment()/*C++0x_override/**/{Ptr=Ptr->NextPtr;}
			virtual void decrement()/*C++0x_override/**/{Ptr=Ptr->PrevPtr;}
			virtual const task& refer()const /*C++0x_override/**/{return *Ptr;}
			virtual const task* access()const /*C++0x_override/**/{return Ptr;}
			virtual bool forward_equal(const iterator& itr_)const /*C++0x_override/**/{return Ptr==itr_.Ptr;}
		public:
			iterator():Ptr(0){return;}
			iterator(task* Ptr_):Ptr(Ptr_){return;}
			iterator(const iterator& itr_):Ptr(itr_.Ptr){return;}
			const iterator& operator=(const iterator& itr_){
				if(this!=&itr_)Ptr=itr_.Ptr;
				return *this;
			}
		};
		iterator begin(){return iterator(FirstChild);}
		iterator end(){return iterator(NULL);}
		//itr�̑O�Ɏq�^�X�N��ǉ�
		iterator insert(task& rTask_,iterator itr_){
			//�I�[�ȊO�ɒǉ�
			if(itr_!=end()){
				//�擪�ȊO�ɒǉ�
				if(itr_->PrevPtr!=0){
					itr_->PrevPtr->NextPtr=&rTask_;
					rTask_.PrevPtr=itr_->PrevPtr;
				}//�擪�ɒǉ�
				else{
					FirstChild=&rTask_;
					rTask_.PrevPtr=0;
				}

				//���̃^�X�N�̏���
				itr_->PrevPtr=&rTask_;
				rTask_.NextPtr=&(*itr_);
			}//�I�[�ɒǉ�
			else{
				//�擪�ȊO�ɒǉ�
				if(LastChild!=0){
					LastChild->NextPtr=&rTask_;
					rTask_.PrevPtr=LastChild;
				}//�擪�ɒǉ�
				else{
					FirstChild=&rTask_;
					rTask_.PrevPtr=0;
				}

				//���̃^�X�N�̏���
				LastChild=&rTask_;
				rTask_.NextPtr=0;
			}

			rTask_.ParentPtr=this;

			return iterator(&rTask_);
		}
		//itr�̎q�^�X�N���폜
		iterator erase(iterator itr_){
			//�I�[�Ȃ珜�O
			if(itr_==end())return end();

			//�߂�l���m��
			iterator ans(itr_->NextPtr);

			//�擪�̏��O�łȂ��Ƃ�
			if(itr_->PrevPtr!=0)itr_->PrevPtr->NextPtr=itr_->NextPtr;
			//�擪�̏��O�̎�
			else FirstChild=itr_->NextPtr;

			//�I�[�̏��O�łȂ��Ƃ�
			if(itr_->NextPtr!=0)itr_->NextPtr->PrevPtr=itr_->PrevPtr;
			//�I�[�̏��O�̎�
			else LastChild=itr_->PrevPtr;

			//�q�^�X�N�w�菜�O
			itr_->ParentPtr=0;
			itr_->NextPtr=0;
			itr_->PrevPtr=0;

			//�߂�
			return ans;
		}
	private://���ۏ����֐��Q
		//���ۂ̋N������
		bool do_run(){
			//�N�����̏�����
			Status=0;

			//�^�X�N�̋N�������@�ُ킪����΁A�G���[�ԓ�
			if(task_construct())return true;

			//�N�������𖳎��s�������Ƃ��L�^
			IsRun=true;

			//�I������Ă���΁A�����ŏ������I����
			if(!is_run())return false;

			//�q�^�X�N���N��
			for(iterator itr=begin(),enditr=end();itr!=enditr;++itr){
				//�N�����s��
				if(itr->do_run()){
					//���ݒn�_�܂ł��I��
					enditr=itr;
					itr=begin();
					for(;itr!=enditr;++itr)itr->do_exit();

					//���g�̏I������
					task_destruct();
					return true;
				}
			}
			return false;
		}
		//���ۂ̃^�X�N����
		bool do_work(){
			//sleep����
			if(Status!=0){
				if(Status>0)--Status;
				return false;
			}

			//�^�X�N�̋N�������@�ُ킪����΁A�G���[�ԓ�
			if(task_work())return true;

			//�I������Ă���΁A�����ŏ������I����
			if(!is_run())return false;

			//�q�^�X�N�����s
			iterator itr=begin();
			while(itr!=end()){
				//���s���s���A�G���[�ԓ�
				if(itr->do_work())return true;

				//�I�����������s����Ă����ꍇ
				if(itr->Status==-1){
					//�I������
					itr->do_exit();
					//�폜����
					itr=erase(itr);
					continue;
				}//Priority�ύX�v��
				else if(itr->Status<=-2){
					//�^�X�N�|�C���^���擾
					task* ptr=&(*itr);
					//��x�폜
					itr=erase(itr);
					//������Priority�ʒu�֍ēx�}��
					insert(*ptr,std::upper_bound(begin(),end(),*ptr));
					//���ʂւ̗D��x�ύX
					if(itr->Status==-3){
						//�������^�X�N���щz���Ă���΃X���[�v
						if(itr->PrevPtr!=ptr)Status=1;
						//��щz���Ă��Ȃ���ΐ����
						else Status=0;
					}else{
						Status=0;
					}
					continue;
				}
				//����itr��
				++itr;
			}

			return false;
		}
		//���ۂ̏I������
		bool do_exit(){
			//�q�^�X�N���I��
			for(iterator itr=begin(),enditr=end();itr!=enditr;++itr){
				itr->do_exit();
			}

			//�^�X�N�̏I������
			task_destruct();
			//�I�������𖳎��s�������Ƃ��L�^
			IsRun=false;

			return false;
		}
	};
	class public_task:public task{
	private:
		bool CanTouchChild;
	public:
		public_task():task(),CanTouchChild(true){return;}
		explicit public_task(unsigned int Priority_):task(Priority_),CanTouchChild(true){return;}
		//�}���\��
		bool canTouchChild()const{return CanTouchChild;}
		//�q�^�X�N���b�N
		void enableTouchChild(){CanTouchChild=true;}
		//�q�^�X�N�A�����b�N
		void disableTouchChild(){CanTouchChild=false;}
		//�q�^�X�N���쐬
		bool insertChild(task& rTask_){
			if(!canTouchChild())return true;
			return createChild(rTask_);
		}
		//�q�^�X�N���쐬 �D��x�w��t��
		bool insertChild(task& rTask_,unsigned int Priority_){
			if(!canTouchChild())return true;
			return createChild(rTask_,Priority_);
		}
		//�q�^�X�N�����
		bool eraseChild(task& rTask_){
			if(!canTouchChild())return true;
			return releaseChild(rTask_);
		}
		//�q�^�X�N����� Lower�ȏ�̃^�X�N�I��
		bool eraseChild(unsigned int LowerPriority){
			if(!canTouchChild())return true;
			return releaseChild(LowerPriority);
		}
		//�q�^�X�N����� Upper�����ALower�ȏ�̃^�X�N�I��
		bool eraseChild(unsigned int LowerPriority,unsigned int UpperPriority){
			if(!canTouchChild())return true;
			return releaseChild(LowerPriority,UpperPriority);
		}
	};
}
#
#endif
