//hmBasic Ver1.0
#ifndef INC_HMLIB_HMBASIC
#define INC_HMLIB_HMBASIC 100
#include <iostream>
#include <iomanip>
#include <string>
#pragma warning(disable : 4996)
#define D_FormatStrAdressSize 1024
//unsignd�n��
typedef unsigned int uint;
typedef unsigned char uchar;
typedef long long dlong;
typedef unsigned long long udlong;
//math�n��
inline double pi(){return 3.141592653589793;}
//�ϊ��n��
inline uchar itouc(int x){
		if(x<0)return 0;
		else if(x>255)return 255;
		else return (uchar)x;
}
namespace hmstd{
	//FStr
	const char* fCharp(const char *String, ...);
	std::string fStr(const char *String, ...);
}
//Sel
namespace hm{
	template <class T>
	inline const T& sel(bool cnd,const T& trueAns,const T& falseAns){
		if(cnd)return trueAns;
		else return falseAns;
	}
};
//mTime�֘A
namespace hmstd{
	uint uPrcTime();
	int PrcTime();
	uint uStopwatch();
	int Stopwatch();
	char* getTmpStrAdress();
};
//bit�֘A
namespace hmstd{
	template<class T>
	inline bool bittest(T c,char num){
		if(num>=sizeof(T) || num<0)return false;
		return (c&(1<<num))==0;
	}
	template<class T>
	inline void bitput(T c,char num,bool value){
		if(num>=sizeof(T) || num<0)return;
		if(value)c|=(1<<num);
		else c&=(!(1<<num));
	}
	template<class T>
	inline void biton(T c,char num){
		if(num>=sizeof(T) || num<0)return;
		c|=(1<<num);
	}
	template<class T>
	inline void bitoff(T c,char num){
		if(num>=sizeof(T) || num<0)return;
		c&=(!(1<<num));
	}
}
#endif
