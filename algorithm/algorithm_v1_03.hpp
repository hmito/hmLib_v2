#ifndef INC_HMLIB_ALGORITHM
#define INC_HMLIB_ALGORITHM 103
#
//#ifndef INC_HMLIB_RANDOM
//#	include "hmLib_v2/random.hpp"
//#endif
#include<algorithm>
namespace hmLib{
	namespace algorithm{
		//2�v�f��sort
		template<class T>
		inline void sort_swap(T& val1,T& val2){if(val1>val2)swap(val1,val2);}
		//3�v�f��sort
		template<class T>
		inline void sort_swap(T& val1,T& val2,T& val3){
			if(val1>val2)swap(val1,val2);
			if(val2>val3){
				swap(val2,val3);
				if(val1>val2)swap(val1,val2);
			}
		}
		//3�v�f��median
		template<class T>
		inline T med(T val1,T val2,T val3){
			if(val1>val2){
				if(val2>val3)return val2;
				else if(val1>val3)return val3;
				else return val1;
			}else{
				if(val1>val3)return val1;
				else if(val2>val3)return val3;
				else return val2;
			}
		}
		//3�v�f��min
		template<class T>
		inline T min(T val1,T val2,T val3){return std::min(val1,std::min(val2,val3));}
		//3�v�f��max
		template<class T>
		inline T max(T val1,T val2,T val3){return std::max(val1,std::max(val2,val3));}
		//���ɂȂ�Ȃ��]��
		template<class T>
		inline T positive_mod(T num,T divisor){
			if(num>=0)return num%divisor;
			else return divisor-1-((-1-num)%divisor);
		}
		//cnd�̏����łǂ����Ԃ����ς��ȈՊ֐�
		template <class T>
		inline const T& sel(bool cnd,const T& trueAns,const T& falseAns){
			if(cnd)return trueAns;
			else return falseAns;
		}
/*		//���[���b�g�I��
		template<class InputIterator,class Accesser,class RandomEngine>
		InputIterator roulette(InputIterator itr,InputIterator enditr,Accesser weight_acs,RandomEngine Rand){
			InputIterator ditr=itr;
			double tmp=0;
			for(;ditr!=enditr;++ditr)tmp+=weight_acs(itr);
			tmp=std::uniform_real_distribution(0.,tmp)(Rand);
			for(;itr!=enditr;++itr){
				tmp-=weight_acs(itr);
				if(tmp<0)return itr;
			}
			return enditr;
		}
		template<class InputIterator,class Accesser>
		InputIterator roulette(InputIterator itr,InputIterator enditr,Accesser weight_acs,random_engine Rand=random::Engine){
			return roulette(itr,enditr,weight_acs,Rand);
		}
*/
	}
}
#
#endif
