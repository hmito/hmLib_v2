/*
xxx_v1_00.hpp
*/
#ifndef VER_HMLIB_XXX
#	define VER_HMLIB_XXX 100
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_XXX
#	if USE_HMLIB>=30000
#		define USE_HMLIB_XXX 100
#	else
#		define USE_HMLIB_XXX 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_XXX
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_XXX 100
#	else
#		define CHG_HMLIB_XXX 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_XXX
#	define INC_USE_HMLIB_XXX
#
#	if USE_HMLIB_XXX>100
#		error hmLib : # error : [xxx.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B
#	elif USE_HMLIB_XXX==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [xxx.hpp] v1_00")
#		endif
#		include "hmLib_v2/xxx/xxx_v1_00.hpp"
#	else
#		error hmLib : # error : [xxx.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B
#	endif
#
#//	if 1<=OUT_USE_HMLIB && 100<=USE_HMLIB_XXX && USE_HMLIB_XXX<101
#//		pragma message("hmLib : # error : [xxx.hpp] ...�Bv1_01(v3_01_00)�ȏ�ւ̑Ή��𐄏����܂��B")
#//	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_XXX
#	define INC_CHG_HMLIB_XXX
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMLIB_XXX
#		if 1<=OUT_CHG_HMLIB && 100<CHG_HMLIB_XXX
#			pragma message("chg_hmLib : # error : [xxx.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B")
#		endif
#//		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_XXX<100 && 100<=USE_HMLIB_XXX
#//			pragma message("chg_hmLib : # error : [xxx.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv1_00(v3_00_00)���O�́A...")
#//		elif 1<=OUT_CHG_HMLIB && USE_HMLIB_XXX<100 && 100<=CHG_HMLIB_XXX
#//			pragma message("chg_hmLib : # error : [xxx.hpp] ����݊����͕ۏ؂���Ă��܂���Bv1_00(v3_00_00)�ȍ~�́A...")
#//		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_XXX<100
#			pragma message("chg_hmLib : # error : [xxx.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#	/* yyy�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_XXX
#		ifndef INC_CHG_HMLIB_YYY
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [xxx.hpp] yyy.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��yyy.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/yyy.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/yyy.hpp"
#			endif
#		endif
#//		if 1<=OUT_CHG_HMLIB && 100<=CHG_HMLIB_XXX && CHG_HMLIB_YYY<100
#//			pragma message("chg_hmLib : # error : [xxx.hpp] yyy.hpp v1_00(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#//		elif 1<=OUT_CHG_HMLIB && CHG_HMLIB_XXX<100 && 100<=CHG_HMLIB_YYY
#//			pragma message("chg_hmLib : # error : [xxx.hpp] yyy.hpp v1_00(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#//		endif
#		if 1<=OUT_CHG_HMLIB && ( CHG_HMLIB_YYY<100 || CHG_HMLIB_YYY==999)
#			pragma message("chg_hmLib : # error : [xxx.hpp] �g�p�\��yyy.hpp�����݂��܂���B")
#		endif
#	endif
#
#	endif
#endif
