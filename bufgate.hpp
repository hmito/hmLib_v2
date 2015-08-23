/*
bufgate_v1_00.hpp
*/
#ifndef VER_HMLIB_BUFGATE
#	define VER_HMLIB_BUFGATE 100
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_BUFGATE
#	if USE_HMLIB>=30000
#		define USE_HMLIB_BUFGATE 100
#	else
#		define USE_HMLIB_BUFGATE 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_BUFGATE
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_BUFGATE 100
#	else
#		define CHG_HMLIB_BUFGATE 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_BUFGATE
#	define INC_USE_HMLIB_BUFGATE
#
#	if USE_HMLIB_BUFGATE>100
#		error hmLib : # error : [bufgate.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B
#	elif USE_HMLIB_BUFGATE==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [bufgate.hpp] v1_00")
#		endif
#		include "hmLib_v2/bufgate/bufgate_v1_00.hpp"
#	else
#		error hmLib : # error : [bufgate.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B
#	endif
#
#//	if 1<=OUT_USE_HMLIB && 100<=USE_HMLIB_BUFGATE && USE_HMLIB_BUFGATE<101
#//		pragma message("hmLib : # error : [bufgate.hpp] ...�Bv1_01(v3_01_00)�ȏ�ւ̑Ή��𐄏����܂��B")
#//	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_BUFGATE
#	define INC_CHG_HMLIB_BUFGATE
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMLIB_BUFGATE
#		if 1<=OUT_CHG_HMLIB && 100<CHG_HMLIB_BUFGATE
#			pragma message("chg_hmLib : # error : [bufgate.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B")
#		endif
#//		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_BUFGATE<100 && 100<=USE_HMLIB_BUFGATE
#//			pragma message("chg_hmLib : # error : [bufgate.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv1_00(v3_00_00)���O�́A...")
#//		elif 1<=OUT_CHG_HMLIB && USE_HMLIB_BUFGATE<100 && 100<=CHG_HMLIB_BUFGATE
#//			pragma message("chg_hmLib : # error : [bufgate.hpp] ����݊����͕ۏ؂���Ă��܂���Bv1_00(v3_00_00)�ȍ~�́A...")
#//		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_BUFGATE<100
#			pragma message("chg_hmLib : # error : [bufgate.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#	/* gate�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_BUFGATE
#		ifndef INC_CHG_HMLIB_GATE
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [bufgate.hpp] gate.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��gate.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/gate.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/gate.hpp"
#			endif
#		endif
#//		if 1<=OUT_CHG_HMLIB && 100<=CHG_HMLIB_BUFGATE && CHG_HMLIB_GATE<100
#//			pragma message("chg_hmLib : # error : [bufgate.hpp] gate.hpp v1_00(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#//		elif 1<=OUT_CHG_HMLIB && CHG_HMLIB_BUFGATE<100 && 100<=CHG_HMLIB_GATE
#//			pragma message("chg_hmLib : # error : [bufgate.hpp] gate.hpp v1_00(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#//		endif
#		if 1<=OUT_CHG_HMLIB && ( CHG_HMLIB_GATE<100 || CHG_HMLIB_GATE==999)
#			pragma message("chg_hmLib : # error : [bufgate.hpp] �g�p�\��gate.hpp�����݂��܂���B")
#		endif
#	endif
#
#	/* circular�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_BUFGATE
#		ifndef INC_CHG_HMLIB_CIRCULAR
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [bufgate.hpp] circular.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��circular.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/circular.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/circular.hpp"
#			endif
#		endif
#//		if 1<=OUT_CHG_HMLIB && 100<=CHG_HMLIB_BUFGATE && CHG_HMLIB_CIRCULAR<100
#//			pragma message("chg_hmLib : # error : [bufgate.hpp] circular.hpp v1_00(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#//		elif 1<=OUT_CHG_HMLIB && CHG_HMLIB_BUFGATE<100 && 100<=CHG_HMLIB_CIRCULAR
#//			pragma message("chg_hmLib : # error : [bufgate.hpp] circular.hpp v1_00(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#//		endif
#		if 1<=OUT_CHG_HMLIB && ( CHG_HMLIB_CIRCULAR<100 || CHG_HMLIB_CIRCULAR==999)
#			pragma message("chg_hmLib : # error : [bufgate.hpp] �g�p�\��circular.hpp�����݂��܂���B")
#		endif
#	endif
#
#	endif
#endif
