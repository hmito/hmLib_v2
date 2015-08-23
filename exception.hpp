/*
exception_v1_00.hpp
*/
#ifndef VER_HMLIB_EXCEPTION
#	define VER_HMLIB_EXCEPTION 100
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_EXCEPTION
#	if USE_HMLIB>=30000
#		define USE_HMLIB_EXCEPTION 100
#	else
#		define USE_HMLIB_EXCEPTION 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_EXCEPTION
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_EXCEPTION 100
#	else
#		define CHG_HMLIB_EXCEPTION 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_EXCEPTION
#	define INC_USE_HMLIB_EXCEPTION
#
#	if USE_HMLIB_EXCEPTION>100
#		error hmLib : # error : [exception.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B
#	elif USE_HMLIB_EXCEPTION==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [exception.hpp] v1_00")
#		endif
#		include "hmLib_v2/exception/exception_v1_00.hpp"
#	else
#		error hmLib : # error : [exception.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B
#	endif
#
#//	if 1<=OUT_USE_HMLIB && 100<=USE_HMLIB_EXCEPTION && USE_HMLIB_EXCEPTION<101
#//		pragma message("hmLib : # error : [exception.hpp] ...�Bv1_01(v3_01_00)�ȏ�ւ̑Ή��𐄏����܂��B")
#//	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_EXCEPTION
#	define INC_CHG_HMLIB_EXCEPTION
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMLIB_EXCEPTION
#		if 1<=OUT_CHG_HMLIB && 100<CHG_HMLIB_EXCEPTION
#			pragma message("chg_hmLib : # error : [exception.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B")
#		endif
#//		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_EXCEPTION<100 && 100<=USE_HMLIB_EXCEPTION
#//			pragma message("chg_hmLib : # error : [exception.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv1_00(v3_00_00)���O�́A...")
#//		elif 1<=OUT_CHG_HMLIB && USE_HMLIB_EXCEPTION<100 && 100<=CHG_HMLIB_EXCEPTION
#//			pragma message("chg_hmLib : # error : [exception.hpp] ����݊����͕ۏ؂���Ă��܂���Bv1_00(v3_00_00)�ȍ~�́A...")
#//		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_EXCEPTION<100
#			pragma message("chg_hmLib : # error : [exception.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#
#	endif
#endif
