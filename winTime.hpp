/*
winTime�p�~
winTime_v1_00.hpp
*/
#ifndef VER_HMLIB_WINTIME
#	define VER_HMLIB_WINTIME 999
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_WINTIME
#	if USE_HMLIB>=20702
#		define USE_HMLIB_WINTIME 999
#	elif USE_HMLIB>=20000
#		define USE_HMLIB_WINTIME 100
#	else
#		define USE_HMLIB_WINTIME 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_WINTIME
#	if CHG_HMLIB>=20702
#		define CHG_HMLIB_WINTIME 999
#	elif CHG_HMLIB>=20000
#		define CHG_HMLIB_WINTIME 100
#	else
#		define CHG_HMLIB_WINTIME 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_WINTIME
#	define INC_USE_HMLIB_WINTIME
#
#	if USE_HMLIB_WINTIME>100
#		error hmLib : # error : [winTime.hpp] ��Ή��o�[�W�����ł��Bv1_00����(v2_07_02�ȍ~)�́A�g�p�ł��܂���B
#	elif USE_HMLIB_WINTIME==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [winTime.hpp] v1_00")
#		endif
#		include "hmLib_v2/winTime/winTime_v1_00.hpp"
#	else
#		error hmLib : # error : [winTime.hpp] ��Ή��o�[�W�����ł��Bv1_00(v2_00_00)���O�́A�g�p�ł��܂���B
#	endif
#
#//	if 1<=OUT_USE_HMLIB && 100<=USE_HMLIB_WINTIME && USE_HMLIB_WINTIME<101
#//		pragma message("hmLib : # error : [winTime.hpp] ...�Bv1_01(v3_01_00)�ȏ�ւ̑Ή��𐄏����܂��B")
#//	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_WINTIME
#	define INC_CHG_HMLIB_WINTIME
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMLIB_WINTIME
#		if 1<=OUT_CHG_HMLIB && 100<CHG_HMLIB_WINTIME
#			pragma message("chg_hmLib : # error : [winTime.hpp] ��Ή��o�[�W�����ł��Bv1_00����(v2_07_02�ȍ~)�́A�g�p�ł��܂���B")
#		endif
#//		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_WINTIME<100 && 100<=USE_HMLIB_WINTIME
#//			pragma message("chg_hmLib : # error : [winTime.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv1_00(v3_00_00)���O�́A...")
#//		elif 1<=OUT_CHG_HMLIB && USE_HMLIB_WINTIME<100 && 100<=CHG_HMLIB_WINTIME
#//			pragma message("chg_hmLib : # error : [winTime.hpp] ����݊����͕ۏ؂���Ă��܂���Bv1_00(v3_00_00)�ȍ~�́A...")
#//		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_WINTIME<100
#			pragma message("chg_hmLib : # error : [winTime.hpp] ��Ή��o�[�W�����ł��Bv1_00(v2_00_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#	/* hmBasic�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_WINTIME
#		ifndef CHG_HMLIB_HMBASIC
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [winTime.hpp] hmBasic.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��hmBasic.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/hmBasic.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/hmBasic.hpp"
#			endif
#		endif
#//		if 1<=OUT_CHG_HMLIB && 100<=CHG_HMLIB_WINTIME && CHG_HMLIB_HMBASIC<100
#//			pragma message("chg_hmLib : # error : [winTime.hpp] hmBasic.hpp v1_00(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#//		elif 1<=OUT_CHG_HMLIB && CHG_HMLIB_WINTIME<100 && 100<=CHG_HMLIB_HMBASIC
#//			pragma message("chg_hmLib : # error : [winTime.hpp] hmBasic.hpp v1_00(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#//		endif
#		if 1<=OUT_CHG_HMLIB && ( CHG_HMLIB_HMBASIC<100 || CHG_HMLIB_HMBASIC==999)
#			pragma message("chg_hmLib : # error : [winTime.hpp] �g�p�\��hmBasic.hpp�����݂��܂���B")
#		endif
#	endif
#
#	endif
#endif
