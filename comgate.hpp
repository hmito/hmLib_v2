/*
comgate_v1_00.hpp
	RS232c�^�V���A���ʐM�pgate�N���X
*/
#ifndef VER_HMLIB_COMGATE
#	define VER_HMLIB_COMGATE 100
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_COMGATE
#	if USE_HMLIB>=30000
#		define USE_HMLIB_COMGATE 100
#	else
#		define USE_HMLIB_COMGATE 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_COMGATE
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_COMGATE 100
#	else
#		define CHG_HMLIB_COMGATE 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_COMGATE
#	define INC_USE_HMLIB_COMGATE
#
#	if USE_HMLIB_COMGATE>100
#		error hmLib : # error : [comgate.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B
#	elif USE_HMLIB_COMGATE==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [comgate.hpp] v1_00")
#		endif
#		include "hmLib_v2/comgate/comgate_v1_00.h"
#	else
#		error hmLib : # error : [comgate.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B
#	endif
#
#//	if 1<=OUT_USE_HMLIB && 100<=USE_HMLIB_COMGATE && USE_HMLIB_COMGATE<101
#//		pragma message("hmLib : # error : [comgate.hpp] ...�Bv1_01(v3_01_00)�ȏ�ւ̑Ή��𐄏����܂��B")
#//	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_COMGATE
#	define INC_CHG_HMLIB_COMGATE
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMLIB_COMGATE
#		if 1<=OUT_CHG_HMLIB && 100<CHG_HMLIB_COMGATE
#			pragma message("chg_hmLib : # error : [comgate.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B")
#		endif
#//		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_COMGATE<200 && 200<=USE_HMLIB_COMGATE
#//			pragma message("chg_hmLib : # error : [comgate.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv1_00(v3_00_00)���O�́A...")
#//		elif 1<=OUT_CHG_HMLIB && USE_HMLIB_COMGATE<200 && 200<=CHG_HMLIB_COMGATE
#//			pragma message("chg_hmLib : # error : [comgate.hpp] ����݊����͕ۏ؂���Ă��܂���Bv1_00(v3_00_00)�ȍ~�́A...")
#//		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_COMGATE<100
#			pragma message("chg_hmLib : # error : [comgate.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#	/* gate�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_COMGATE
#		ifndef INC_CHG_HMLIB_GATE
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [comgate.hpp] gate.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��gate.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/gate.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/gate.hpp"
#			endif
#		endif
#//		if 1<=OUT_CHG_HMLIB && 100<=CHG_HMLIB_COMGATE && CHG_HMLIB_GATE<100
#//			pragma message("chg_hmLib : # error : [comgate.hpp] gate.hpp v1_00(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#//		elif 1<=OUT_CHG_HMLIB && CHG_HMLIB_COMGATE<100 && 100<=CHG_HMLIB_GATE
#//			pragma message("chg_hmLib : # error : [comgate.hpp] gate.hpp v1_00(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#//		endif
#//		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_GATE<100
#//			pragma message("chg_hmLib : # error : [comgate.hpp] �g�p�\��gate.hpp�����݂��܂���B")
#//		endif
#	endif
#
#	endif
#endif
