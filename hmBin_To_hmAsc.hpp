/*
hmBin_To_hmAsc hmLib_v3���Ή�
hmBin_To_hmAsc_v1_00.hpp
*/
#ifndef VER_HMLIB_HMBINTOHMASC
#	define VER_HMLIB_HMBINTOHMASC 999
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_HMBINTOHMASC
#	if USE_HMLIB>=30000
#		define USE_HMLIB_HMBINTOHMASC 999
#	elif USE_HMLIB>=20803
#		define USE_HMLIB_HMBINTOHMASC 100
#	else
#		define USE_HMLIB_HMBINTOHMASC 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_HMBINTOHMASC
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_HMBINTOHMASC 999
#	elif CHG_HMLIB>=20803
#		define CHG_HMLIB_HMBINTOHMASC 100
#	else
#		define CHG_HMLIB_HMBINTOHMASC 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_HMBINTOHMASC
#	define INC_USE_HMLIB_HMBINTOHMASC
#
#	if USE_HMLIB_HMBINTOHMASC>100
#		error hmLib : # error : [hmBin_To_hmAsc.hpp] ��Ή��o�[�W�����ł��Bv1_00����(v3_00_00�ȍ~)�́A�g�p�ł��܂���B
#	elif USE_HMLIB_HMBINTOHMASC==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [hmBin_To_hmAsc.hpp] v1_00")
#		endif
#		include "hmLib_v2/hmBin_To_hmAsc/hmBin_To_hmAsc_v1_00.hpp"
#	else
#		error hmLib : # error : [hmBin_To_hmAsc.hpp] ��Ή��o�[�W�����ł��Bv1_00(v2_08_03)���O�́A�g�p�ł��܂���B
#	endif
#
#//	if 1<=OUT_USE_HMLIB && 100<=USE_HMLIB_HMBINTOHMASC && USE_HMLIB_HMBINTOHMASC<101
#//		pragma message("hmLib : # error : [hmBin_To_hmAsc.hpp] ...�Bv1_01(v3_01_00)�ȏ�ւ̑Ή��𐄏����܂��B")
#//	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_HMBINTOHMASC
#	define INC_CHG_HMLIB_HMBINTOHMASC
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMLIB_HMBINTOHMASC
#		if 1<=OUT_CHG_HMLIB && 100<CHG_HMLIB_HMBINTOHMASC
#			pragma message("chg_hmLib : # error : [hmBin_To_hmAsc.hpp] ��Ή��o�[�W�����ł��Bv1_00����(v3_00_00�ȍ~)�́A�g�p�ł��܂���B")
#		endif
#//		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_HMBINTOHMASC<200 && 200<=USE_HMLIB_HMBINTOHMASC
#//			pragma message("chg_hmLib : # error : [hmBin_To_hmAsc.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv1_00(v3_00_00)���O�́A...")
#//		elif 1<=OUT_CHG_HMLIB && USE_HMLIB_HMBINTOHMASC<200 && 200<=CHG_HMLIB_HMBINTOHMASC
#//			pragma message("chg_hmLib : # error : [hmBin_To_hmAsc.hpp] ����݊����͕ۏ؂���Ă��܂���Bv1_00(v3_00_00)�ȍ~�́A...")
#//		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_HMBINTOHMASC<100
#			pragma message("chg_hmLib : # error : [hmBin_To_hmAsc.hpp] ��Ή��o�[�W�����ł��Bv1_00(v2_08_03)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#	/* hmBasic�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_HMBINTOHMASC
#		ifndef CHG_HMLIB_HMBASIC
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [hmBin_To_hmAsc.hpp] hmBasic.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��hmBasic.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/hmBasic.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/hmBasic.hpp"
#			endif
#		endif
#//		if 1<=OUT_CHG_HMLIB && 100<=CHG_HMLIB_HMBINTOHMASC && CHG_HMLIB_HMBASIC<100
#//			pragma message("chg_hmLib : # error : [hmBin_To_hmAsc.hpp] hmBasic.hpp v1_00(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#//		elif 1<=OUT_CHG_HMLIB && CHG_HMLIB_HMBINTOHMASC<100 && 100<=CHG_HMLIB_HMBASIC
#//			pragma message("chg_hmLib : # error : [hmBin_To_hmAsc.hpp] hmBasic.hpp v1_00(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#//		endif
#		if 1<=OUT_CHG_HMLIB && ( CHG_HMLIB_HMBASIC<100 || CHG_HMLIB_HMBASIC==999)
#			pragma message("chg_hmLib : # error : [hmBin_To_hmAsc.hpp] �g�p�\��hmBasic.hpp�����݂��܂���B")
#		endif
#	endif
#
#	endif
#endif
