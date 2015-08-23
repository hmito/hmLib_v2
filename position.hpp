/*
position_v1_00.hpp
*/
#if 4<=OUT_USE_HMLIB
#	pragma message("hmLib::position.hpp begin")
#endif
#ifndef VER_HMLIB_POSITION
#	define VER_HMLIB_POSITION 100
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_POSITION
#	if USE_HMLIB>=30000
#		define USE_HMLIB_POSITION 100
#	else
#		define USE_HMLIB_POSITION 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_POSITION
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_POSITION 100
#	else
#		define CHG_HMLIB_POSITION 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_POSITION
#	define INC_USE_HMLIB_POSITION
#
#	if USE_HMLIB_POSITION>100
#		error hmLib : # error : [position.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B
#	elif USE_HMLIB_POSITION==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [position.hpp] v1_00")
#		endif
#		include "hmLib_v2/position/position_v1_00.hpp"
#	else
#		error hmLib : # error : [position.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B
#	endif
#
#//	if 1<=OUT_USE_HMLIB && 100<=USE_HMLIB_POSITION && USE_HMLIB_POSITION<101
#//		pragma message("hmLib : # error : [position.hpp] ...�Bv1_01(v3_01_00)�ȏ�ւ̑Ή��𐄏����܂��B")
#//	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_POSITION
#	define INC_CHG_HMLIB_POSITION
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMLIB_POSITION
#		if 1<=OUT_CHG_HMLIB && 100<CHG_HMLIB_POSITION
#			pragma message("chg_hmLib : # error : [position.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B")
#		endif
#//		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_POSITION<100 && 100<=USE_HMLIB_POSITION
#//			pragma message("chg_hmLib : # error : [position.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv1_00(v3_00_00)���O�́A...")
#//		elif 1<=OUT_CHG_HMLIB && USE_HMLIB_POSITION<100 && 100<=CHG_HMLIB_POSITION
#//			pragma message("chg_hmLib : # error : [position.hpp] ����݊����͕ۏ؂���Ă��܂���Bv1_00(v3_00_00)�ȍ~�́A...")
#//		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_POSITION<100
#			pragma message("chg_hmLib : # error : [position.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#
#	endif
#endif
#if 4<=OUT_USE_HMLIB
#	pragma message("hmLib::position.hpp end")
#endif
