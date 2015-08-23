/*
hmDir �p�~
	boost::filesystem�ő�։\�Ɣ��f��������
hmDir_v1_01.h/cpp
	str()��operator()�𓝍�
*/
#ifndef VER_HMLIB_HMDIR
#	define VER_HMLIB_HMDIR 999
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_HMDIR
#	if USE_HMLIB>=30000
#		define USE_HMLIB_HMDIR 999
#	elif USE_HMLIB>=20902
#		define USE_HMLIB_HMDIR 101
#	elif USE_HMLIB>=20600
#		define USE_HMLIB_HMDIR 100
#	else
#		define USE_HMLIB_HMDIR 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_HMDIR
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_HMDIR 999
#	elif CHG_HMLIB>=20902
#		define CHG_HMLIB_HMDIR 101
#	elif CHG_HMLIB>=20600
#		define CHG_HMLIB_HMDIR 100
#	else
#		define CHG_HMLIB_HMDIR 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_HMDIR
#	define INC_USE_HMLIB_HMDIR
#
#	if USE_HMLIB_HMDIR>101
#		error hmLib : # error : [hmDir.hpp] �p�~�o�[�W�����ł��Bv1_01����́A�g�p�ł��܂���Bboost::filesystem�ւ̈ڍs�𐄏����Ă��܂��B
#	elif USE_HMLIB_HMDIR==101
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [hmDir.hpp] v1_01")
#		endif
#		include "hmLib_v2/hmDir/hmDir_v1_01.h"
#	elif USE_HMLIB_HMDIR==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [hmDir.hpp] v1_00")
#		endif
#		include "hmLib_v2/hmDir/hmDir_v1_00.h"
#	else
#		error hmLib : # error : [hmDir.hpp] ��Ή��o�[�W�����ł��Bv1_00(v2_06_00)���O�́A�g�p�ł��܂���B
#	endif
#
#	if 2<=OUT_USE_HMLIB && 100<=USE_HMLIB_HMDIR
#		pragma message("hmLib : # info  : [hmDir.hpp] windows.h�ˑ��t�@�C���ł��B")
#	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_HMDIR
#	define INC_CHG_HMLIB_HMDIR
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMLIB_HMDIR
#		if 1<=OUT_CHG_HMLIB && 102<CHG_HMLIB_HMDIR
#			pragma message("chg_hmLib : # error : [hmDir.hpp] �p�~�o�[�W�����ł��Bv1_01����́A�g�p�ł��܂���Bboost::filesystem�ւ̈ڍs�𐄏����Ă��܂��B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_HMDIR<101 && 101<=USE_HMLIB_HMDIR
#			pragma message("chg_hmLib : #warning: [hmDir.hpp] v1_01(v2_09_03)���O�́AhmDir::str(std::string name),hmDir::operator()���g���܂���B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_HMDIR<100
#			pragma message("chg_hmLib : # error : [hmDir.hpp] ��Ή��o�[�W�����ł��Bv1_00(v2_06_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#	/* hmBasic�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_HMDIR && CHG_HMLIB_HMDIR<=101
#		ifndef CHG_HMLIB_HMBASIC
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [hmDir.hpp] hmBasic.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��hmBasic.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/hmBasic.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/hmBasic.hpp"
#			endif
#		endif
#	endif
#
#	endif
#endif
