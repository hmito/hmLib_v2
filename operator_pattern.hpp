/*
operator_pattern_v1_00.hpp
	operator������y�ɍ쐬�ł���ЂȌ`�N���X
*/
#ifndef VER_HMLIB_OPERATORPATTERN
#	define VER_HMLIB_OPERATORPATTERN 100
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_OPERATORPATTERN
#	if USE_HMLIB>=30000
#		define USE_HMLIB_OPERATORPATTERN 100
#	else
#		define USE_HMLIB_OPERATORPATTERN 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_OPERATORPATTERN
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_OPERATORPATTERN 100
#	else
#		define CHG_HMLIB_OPERATORPATTERN 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_OPERATORPATTERN
#	define INC_USE_HMLIB_OPERATORPATTERN
#
#	if USE_HMLIB_OPERATORPATTERN>100
#		error hmLib : # error : [operator_pattern.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B
#	elif USE_HMLIB_OPERATORPATTERN==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [operator_pattern.hpp] v1_00")
#		endif
#		include "hmLib_v2/operator_pattern/operator_pattern_v1_00.hpp"
#	else
#		error hmLib : # error : [operator_pattern.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B
#	endif
#
#//	if 1<=OUT_USE_HMLIB && 100<=USE_HMLIB_OPERATORPATTERN && USE_HMLIB_OPERATORPATTERN<101
#//		pragma message("hmLib : # error : [operator_pattern.hpp] ...�Bv1_01(v3_01_00)�ȏ�ւ̑Ή��𐄏����܂��B")
#//	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_OPERATORPATTERN
#	define INC_CHG_HMLIB_OPERATORPATTERN
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMLIB_OPERATORPATTERN
#		if 1<=OUT_CHG_HMLIB && 100<CHG_HMLIB_OPERATORPATTERN
#			pragma message("chg_hmLib : # error : [operator_pattern.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B")
#		endif
#//		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_OPERATORPATTERN<100 && 100<=USE_HMLIB_OPERATORPATTERN
#//			pragma message("chg_hmLib : # error : [operator_pattern.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv1_00(v3_00_00)���O�́A...")
#//		elif 1<=OUT_CHG_HMLIB && USE_HMLIB_OPERATORPATTERN<100 && 100<=CHG_HMLIB_OPERATORPATTERN
#//			pragma message("chg_hmLib : # error : [operator_pattern.hpp] ����݊����͕ۏ؂���Ă��܂���Bv1_00(v3_00_00)�ȍ~�́A...")
#//		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_OPERATORPATTERN<100
#			pragma message("chg_hmLib : # error : [operator_pattern.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#
#	endif
#endif
