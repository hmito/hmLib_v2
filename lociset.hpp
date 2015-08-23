/*
lociset_v1_00.hpp
*/
#ifndef VER_HMLIB_LOCISET
#	define VER_HMLIB_LOCISET 100
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_LOCISET
#	if USE_HMLIB>=30000
#		define USE_HMLIB_LOCISET 100
#	else
#		define USE_HMLIB_LOCISET 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_LOCISET
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_LOCISET 100
#	else
#		define CHG_HMLIB_LOCISET 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_LOCISET
#	define INC_USE_HMLIB_LOCISET
#
#	if USE_HMLIB_LOCISET>100
#		error hmLib : # error : [lociset.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B
#	elif USE_HMLIB_LOCISET==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [lociset.hpp] v1_00")
#		endif
#		include "hmLib_v2/lociset/lociset_v1_00.hpp"
#	else
#		error hmLib : # error : [lociset.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B
#	endif
#
#//	if 1<=OUT_USE_HMLIB && 100<=USE_HMLIB_LOCISET && USE_HMLIB_LOCISET<101
#//		pragma message("hmLib : # error : [lociset.hpp] ...�Bv1_01(v3_01_00)�ȏ�ւ̑Ή��𐄏����܂��B")
#//	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_LOCISET
#	define INC_CHG_HMLIB_LOCISET
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMLIB_LOCISET
#		if 1<=OUT_CHG_HMLIB && 100<CHG_HMLIB_LOCISET
#			pragma message("chg_hmLib : # error : [lociset.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B")
#		endif
#//		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_LOCISET<100 && 100<=USE_HMLIB_LOCISET
#//			pragma message("chg_hmLib : # error : [lociset.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv1_00(v3_00_00)���O�́A...")
#//		elif 1<=OUT_CHG_HMLIB && USE_HMLIB_LOCISET<100 && 100<=CHG_HMLIB_LOCISET
#//			pragma message("chg_hmLib : # error : [lociset.hpp] ����݊����͕ۏ؂���Ă��܂���Bv1_00(v3_00_00)�ȍ~�́A...")
#//		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_LOCISET<100
#			pragma message("chg_hmLib : # error : [lociset.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#	/* random�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_LOCISET
#		ifndef INC_CHG_HMLIB_RANDOM
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [lociset.hpp] random.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��random.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/random.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/random.hpp"
#			endif
#		endif
#//		if 1<=OUT_CHG_HMLIB && 100<=CHG_HMLIB_LOCISET && CHG_HMLIB_RANDOM<100
#//			pragma message("chg_hmLib : # error : [lociset.hpp] random.hpp v1_00(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#//		elif 1<=OUT_CHG_HMLIB && CHG_HMLIB_LOCISET<100 && 100<=CHG_HMLIB_RANDOM
#//			pragma message("chg_hmLib : # error : [lociset.hpp] random.hpp v1_00(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#//		endif
#		if 1<=OUT_CHG_HMLIB && ( CHG_HMLIB_RANDOM<100 || CHG_HMLIB_RANDOM==999)
#			pragma message("chg_hmLib : # error : [lociset.hpp] �g�p�\��random.hpp�����݂��܂���B")
#		endif
#	endif
#
#	endif
#endif
