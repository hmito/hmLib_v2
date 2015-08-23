/*
	�v�f���̂�list��ɁA
	���̊m�ۂ�vector�ŁA
	�g�p�󋵂�deque�ŁA
	���ꂼ��Ǘ�����A�C�ӂ̈ʒu�ō����}���폜�\�Ȕz��
*/
#ifndef INC_HMLIB_VECTORLIST
#define INC_HMLIB_VECTORLIST 101
#
#ifndef INC_HMLIB_ARRAYLIST
#	include "hmLib_v2/arraylist.hpp"
#endif
namespace hmLib{
	template<class T>
	class vectorlist:public arraylist<T>{
	protected:
		virtual void workInsert(iterator& _itr){
			if(full()){
				vectorlist<T> tmp;
				swap(tmp);
				create(tmp.size_create()*2-1);
				vectorlist<T>::iterator itr=tmp.begin(),enditr=tmp.end(),pitr;
				for(;itr!=enditr;++itr){
					pitr=insert_simple(end(),(*itr));
					if(itr==_itr)_itr=pitr;
				}
				if(enditr==_itr)_itr=end();
			}
		}
		virtual void workErase(iterator& _itr){return;}
	public:
		vectorlist():arraylist(){return;}
		vectorlist(size_type _num,const T& _val=T()):arraylist(_num,_num,_val){return;}
		vectorlist(const vectorlist& _ar):arraylist(_ar){return;}
		template<class input_iterator>
		vectorlist(input_iterator _start,input_iterator _end):arraylist(_start,_end){return;}
	};
}
#endif
