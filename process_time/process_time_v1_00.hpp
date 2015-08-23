#ifndef INC_HMLIB_PROCESSTIME
#define INC_HMLIB_PROCESSTIME 100
#
#include <ctime>
#ifndef INC_HMLIB_BYTEBASETYPE
#	include "hmLib_v2/bytebase_type.hpp"
#endif
namespace hmLib{
	//�v���Z�X�^�C�����擾
	inline type::uint32 prctime_ms(){
		return (type::uint32)(clock()*1000/CLOCKS_PER_SEC);
	}
	//�X�g�b�v�E�H�b�`�𓮂��� Buf��ς��邱�ƂŁA�قȂ�X�g�b�v�E�H�b�`�ƂȂ�B
	inline type::uint32 stopwatch_ms(type::uint32 &msBuf){
		if(msBuf==0){
			msBuf=prctime_ms();
			return 0;
		}else{
			type::uint32 tmp=msBuf;
			msBuf=prctime_ms();
			return msBuf-tmp;
		}
	}
	//delay�֐�
	inline void delay_ms(type::uint32 ms){
		ms+=prctime_ms();
		while(prctime_ms()<ms);
	}
}
#
#endif
