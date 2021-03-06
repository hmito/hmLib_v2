#ifndef INC_HMLIB_PROCESSTIME
#define INC_HMLIB_PROCESSTIME 100
#
#include <ctime>
#ifndef INC_HMLIB_BYTEBASETYPE
#	include "hmLib_v2/bytebase_type.hpp"
#endif
namespace hmLib{
	//プロセスタイムを取得
	inline type::uint32 prctime_ms(){
		return (type::uint32)(clock()*1000/CLOCKS_PER_SEC);
	}
	//ストップウォッチを動かす Bufを変えることで、異なるストップウォッチとなる。
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
	//delay関数
	inline void delay_ms(type::uint32 ms){
		ms+=prctime_ms();
		while(prctime_ms()<ms);
	}
}
#
#endif
