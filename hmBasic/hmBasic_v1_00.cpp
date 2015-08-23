#ifndef INC_HMLIB_HMBASIC_CPP
#define INC_HMLIB_HMBASIC_CPP 100
#include "hmLib_v2/hmBasic_v1_00.h"
#include <iostream>
#include <cstdarg>
#include <ctime>
namespace{
	uint time_for_stopwatch=0;
	char FormatStrAdress[D_FormatStrAdressSize];
}
namespace hmstd{
	const char* fCharp(const char *String, ...){
		va_list valist;
		va_start(valist, String);
		vsprintf(FormatStrAdress,String,valist);
		va_end(valist);
		return FormatStrAdress;
	}
	std::string fStr(const char *String, ...){
		va_list valist;
		va_start(valist, String);
		vsprintf(FormatStrAdress,String,valist);
		va_end(valist);
		std::string str(FormatStrAdress);
		return str;
	}
	uint uPrcTime(){
		double tmp=(double)clock();
		tmp*=1000./CLOCKS_PER_SEC;
		return (uint)tmp;
	}
	int PrcTime(){
		double tmp=(double)clock();
		tmp*=1000./CLOCKS_PER_SEC;
		return (int)tmp;
	}
	uint uStopwatch(){
		if(time_for_stopwatch==0){
			time_for_stopwatch=uPrcTime();
			return 0;
		}
		uint tmp=time_for_stopwatch;
		time_for_stopwatch=uPrcTime();
		return time_for_stopwatch-tmp;
	}
	int Stopwatch(){
		return (int)uStopwatch();
	}
	char* getTmpStrAdress(){return FormatStrAdress;}
}
#endif
