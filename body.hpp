/*
body_v1_00.hpp
	�}�`�𐧌䂷��N���X
*/
#ifndef VER_HMLIB_BODY
#	define VER_HMLIB_BODY 100
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_BODY
#	if USE_HMLIB>=30000
#		define USE_HMLIB_BODY 100
#	else
#		define USE_HMLIB_BODY 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_BODY
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_BODY 100
#	else
#		define CHG_HMLIB_BODY 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_BODY
#	define INC_USE_HMLIB_BODY
#
#	if USE_HMLIB_BODY>100
#		error hmLib # error : [body.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B
#	elif USE_HMLIB_BODY==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [body.hpp] v1_00")
#		endif
#		include "hmLib_v2/body/body_v1_00.hpp"
#	else
#		error hmLib # error : [body.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B
#	endif
#
#//	if 1<=OUT_USE_HMLIB && 100<=USE_HMLIB_BODY && USE_HMLIB_BODY<101
#//		pragma message("hmLib # error : [body.hpp] ...�Bv1_01(v3_01_00)�ȏ�ւ̑Ή��𐄏����܂��B")
#//	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_BODY
#	define INC_CHG_HMLIB_BODY
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMLIB_BODY
#		if 1<=OUT_CHG_HMLIB && 100<CHG_HMLIB_BODY
#			pragma message("chg_hmLib # error : [body.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B")
#		endif
#//		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_BODY<200 && 200<=USE_HMLIB_BODY
#//			pragma message("chg_hmLib # error : [body.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv1_00(v3_00_00)���O�́A...")
#//		elif 1<=OUT_CHG_HMLIB && USE_HMLIB_BODY<200 && 200<=CHG_HMLIB_BODY
#//			pragma message("chg_hmLib # error : [body.hpp] ����݊����͕ۏ؂���Ă��܂���Bv1_00(v3_00_00)�ȍ~�́A...")
#//		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_BODY<100
#			pragma message("chg_hmLib # error : [body.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#	/* rectangle�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_BODY
#		ifndef CHG_HMLIB_RECTANGLE
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib # info  : [body.hpp] rectangle.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��rectangle.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/rectangle.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/rectangle.hpp"
#			endif
#		endif
#		if 1<=OUT_CHG_HMLIB && 100<=CHG_HMLIB_BODY && CHG_HMLIB_RECTANGLE<102
#			pragma message("chg_hmLib # error : [body.hpp] rectangle.hpp v1_02(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#//		elif 1<=OUT_CHG_HMLIB && CHG_HMLIB_BODY<100 && 100<=CHG_HMLIB_RECTANGLE
#//			pragma message("chg_hmLib # error : [body.hpp] rectangle.hpp v1_02(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_RECTANGLE<100
#			pragma message("chg_hmLib # error : [body.hpp] �g�p�\��rectangle.hpp�����݂��܂���B")
#		endif
#	endif
#
#	endif
#endif
