/*
rectangle_v1_00.hpp
*/
#ifndef VER_HMLIB_RECTANGLE
#	define VER_HMLIB_RECTANGLE 100
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_RECTANGLE
#	if USE_HMLIB>=30000
#		define USE_HMLIB_RECTANGLE 100
#	else
#		define USE_HMLIB_RECTANGLE 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_RECTANGLE
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_RECTANGLE 100
#	else
#		define CHG_HMLIB_RECTANGLE 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_RECTANGLE
#	define INC_USE_HMLIB_RECTANGLE
#
#	if USE_HMLIB_RECTANGLE>100
#		error hmLib : # error : [rectangle.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B
#	elif USE_HMLIB_RECTANGLE==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [rectangle.hpp] v1_00")
#		endif
#		include "hmLib_v2/rectangle/rectangle_v1_00.hpp"
#	else
#		error hmLib : # error : [rectangle.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B
#	endif
#
#//	if 1<=OUT_USE_HMLIB && 100<=USE_HMLIB_RECTANGLE && USE_HMLIB_RECTANGLE<101
#//		pragma message("hmLib : # error : [rectangle.hpp] ...�Bv1_01(v3_01_00)�ȏ�ւ̑Ή��𐄏����܂��B")
#//	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_RECTANGLE
#	define INC_CHG_HMLIB_RECTANGLE
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMLIB_RECTANGLE
#		if 1<=OUT_CHG_HMLIB && 100<CHG_HMLIB_RECTANGLE
#			pragma message("chg_hmLib : # error : [rectangle.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B")
#		endif
#//		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_RECTANGLE<100 && 100<=USE_HMLIB_RECTANGLE
#//			pragma message("chg_hmLib : # error : [rectangle.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv1_00(v3_00_00)���O�́A...")
#//		elif 1<=OUT_CHG_HMLIB && USE_HMLIB_RECTANGLE<100 && 100<=CHG_HMLIB_RECTANGLE
#//			pragma message("chg_hmLib : # error : [rectangle.hpp] ����݊����͕ۏ؂���Ă��܂���Bv1_00(v3_00_00)�ȍ~�́A...")
#//		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_RECTANGLE<100
#			pragma message("chg_hmLib : # error : [rectangle.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#	/* position�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_RECTANGLE
#		ifndef INC_CHG_HMLIB_POSITION
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [rectangle.hpp] position.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��position.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/position.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/position.hpp"
#			endif
#		endif
#//		if 1<=OUT_CHG_HMLIB && 100<=CHG_HMLIB_RECTANGLE && CHG_HMLIB_POSITION<100
#//			pragma message("chg_hmLib : # error : [rectangle.hpp] position.hpp v1_00(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#//		elif 1<=OUT_CHG_HMLIB && CHG_HMLIB_RECTANGLE<100 && 100<=CHG_HMLIB_POSITION
#//			pragma message("chg_hmLib : # error : [rectangle.hpp] position.hpp v1_00(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#//		endif
#		if 1<=OUT_CHG_HMLIB && ( CHG_HMLIB_POSITION<100 || CHG_HMLIB_POSITION==999)
#			pragma message("chg_hmLib : # error : [rectangle.hpp] �g�p�\��position.hpp�����݂��܂���B")
#		endif
#	endif
#
#	endif
#endif
