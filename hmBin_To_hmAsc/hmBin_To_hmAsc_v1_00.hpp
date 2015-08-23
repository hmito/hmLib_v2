#ifndef INC_HMLIB_HMBINTOHMASC
#define INC_HMLIB_HMBINTOHMASC
#
#ifndef INC_HMLIB_HMBASIC
#	include "hmLib_v2/hmBasic.hpp"
#endif
#include <iostream>
//|�R�}���h�w�b�_
//�ȉ��A���T�C���^
//b: 2�i
//o: 8�i
//d:10�i
//x:16�i
//�ȉ��T�C���^
//B: 2�i
//O: 8�i
//D:10�i
//X:16�i
//�ȉ�������^(,�L�������험�p)
//s:������
//_:�R�}���h
//|:|���g

//"|s_<<<i|x40,38,aa,23,50,29|s_>>>|_cr,lf"
//"[s]this is a pen[x]56,a4,50,[_]cr,lf[xhokepkogea||||||x

namespace hm{
	inline std::string BinTohmAsc(std::string binStr){
		std::string ascStr;
		for(uint i=0;i<binStr.size();i++){
			if(binStr[i]>=32 && binStr[i]<=127){
				ascStr+=binStr[i];
				if(binStr[i]=='|')ascStr+=binStr[i];
			}else ascStr+="|x"+hmstd::fStr("%02x",(uchar)binStr[i]);
		}
		return ascStr;
	}
	inline std::string hmAscToBin(std::string ascStr){
		std::string binStr;
		char mode='s';
		bool cmdFlag=false;
		int ans=0;
		int cnt=0;
		bool minaFlag=false;

		for(uint i=0;i<ascStr.size();i++){
			if(cmdFlag){
				if(ascStr[i]=='s' || ascStr[i]=='S'){
					mode='s';
				}else if(ascStr[i]=='b' || ascStr[i]=='B'){
					mode='b';
				}else if(ascStr[i]=='o' || ascStr[i]=='O'){
					mode='o';
				}else if(ascStr[i]=='d' || ascStr[i]=='D'){
					mode='d';
				}else if(ascStr[i]=='x' || ascStr[i]=='X'){
					mode='x';
				}else if(ascStr[i]=='_'){
					mode='_';
				}else if(ascStr[i]=='|'){
					binStr+=ascStr[i];
					mode='s';
				}else{
					binStr+='|';
					binStr+=ascStr[i];
					mode='s';
				}
				cmdFlag=false;
				minaFlag=false;
				ans=0;
				cnt=0;
			}else if(ascStr[i]=='|'){
				if(cnt){
					if(minaFlag)ans*=-1;
					if(mode=='_'){
						if(ans==(int)256*'c'+'r' || ans==(int)256*'C'+'R')ans=0x0d;
						else if(ans==(int)256*'l'+'f' || ans==(int)256*'L'+'F')ans=0x0a;
						else if(ans==(int)256*256*'n'+'u'*256+'l' || ans==(int)256*256*'N'+'U'*256+'L')ans=0x00;
					}
					binStr+=(char)ans;
					minaFlag=false;
					ans=0;
					cnt=0;
				}
				cmdFlag=true;
			}else if(mode=='s'){
				binStr+=ascStr[i];
			}else if(ascStr[i]==','){
				if(cnt){
					if(minaFlag)ans*=-1;
					if(mode=='_'){
						if(ans==(int)256*'c'+'r' || ans==(int)256*'C'+'R')ans=0x0d;
						else if(ans==(int)256*'l'+'f' || ans==(int)256*'L'+'F')ans=0x0a;
						else if(ans==(int)256*256*'n'+'u'*256+'l' || ans==(int)256*256*'N'+'U'*256+'L')ans=0x00;
					}
					binStr+=(char)ans;
					minaFlag=false;
					ans=0;
					cnt=0;
				}else{
					mode='s';
					minaFlag=false;
					binStr+=',';
				}
			}else if(mode=='b' && '0'<=ascStr[i] && ascStr[i]<='1'){
				ans=ans*2+ascStr[i]-'0';
				cnt++;
			}else if(mode=='o' && '0'<=ascStr[i] && ascStr[i]<='7'){
				ans=ans*8+ascStr[i]-'0';
				cnt++;
			}else if(mode=='d' && '0'<=ascStr[i] && ascStr[i]<='9'){
				ans=ans*10+ascStr[i]-'0';
				cnt++;
			}else if(mode=='x' && '0'<=ascStr[i] && ascStr[i]<='9'){
				ans=ans*16+ascStr[i]-'0';
				cnt++;
			}else if(mode=='x' && 'a'<=ascStr[i] && ascStr[i]<='f'){
				ans=ans*16+ascStr[i]-'a'+10;
				cnt++;
			}else if(mode=='x' && 'A'<=ascStr[i] && ascStr[i]<='F'){
				ans=ans*16+ascStr[i]-'A'+10;
				cnt++;
			}else if(mode=='_'){
				ans=ans*256+ascStr[i];
				cnt++;
			}else{
				if(cnt){
					if(minaFlag)ans*=-1;
					if(mode=='_'){
						if(ans==(int)256*'c'+'r' || ans==(int)256*'C'+'R')ans=0x0d;
						else if(ans==(int)256*'l'+'f' || ans==(int)256*'L'+'F')ans=0x0a;
						else if(ans==(int)256*256*'n'+'u'*256+'l' || ans==(int)256*256*'N'+'U'*256+'L')ans=0x00;
					}
					binStr+=(char)ans;
					minaFlag=false;
					ans=0;
					cnt=0;
				}
				mode='s';
				binStr+=ascStr[i];
			}
		}

		if(cnt){
			if(minaFlag)ans*=-1;
			if(mode=='_'){
				if(ans==(int)256*'c'+'r' || ans==(int)256*'C'+'R')ans=0x0d;
				else if(ans==(int)256*'l'+'f' || ans==(int)256*'L'+'F')ans=0x0a;
				else if(ans==(int)256*256*'n'+'u'*256+'l' || ans==(int)256*256*'N'+'U'*256+'L')ans=0x00;
			}
			binStr+=(char)ans;
			minaFlag=false;
			ans=0;
			cnt=0;
		}
		return binStr;
	}
}
#
#endif
