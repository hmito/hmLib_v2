/*
dxPad hmLib_v3���Ή�
dxPad_v1_00.hpp
*/
#ifndef VER_HMLIB_DXPAD
#	define VER_HMLIB_DXPAD 100
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_DXPAD
#	if USE_HMLIB>=30000
#		define USE_HMLIB_DXPAD 999
#	elif USE_HMLIB>=20805
#		define USE_HMLIB_DXPAD 100
#	else
#		define USE_HMLIB_DXPAD 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_DXPAD
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_DXPAD 999
#	elif CHG_HMLIB>=20805
#		define CHG_HMLIB_DXPAD 100
#	else
#		define CHG_HMLIB_DXPAD 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_DXPAD
#	define INC_USE_HMLIB_DXPAD
#
#	if USE_HMLIB_DXPAD>100
#		error hmLib : # error : [dxPad.hpp] ��Ή��o�[�W�����ł��Bv1_00����(v3_00_00�ȍ~)�́A�g�p�ł��܂���B
#	elif USE_HMLIB_DXPAD==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [dxPad.hpp] v1_00")
#		endif
#		include "hmLib_v2/dxPad/dxPad_v1_00.hpp"
#	else
#		error hmLib : # error : [dxPad.hpp] ��Ή��o�[�W�����ł��Bv1_00(v2_08_05)���O�́A�g�p�ł��܂���B
#	endif
#
#//	if 1<=OUT_USE_HMLIB && 100<=USE_HMLIB_DXPAD && USE_HMLIB_DXPAD<101
#//		pragma message("hmLib : # error : [dxPad.hpp] ...�Bv1_01(v3_01_00)�ȏ�ւ̑Ή��𐄏����܂��B")
#//	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_DXPAD
#	define INC_CHG_HMLIB_DXPAD
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMLIB_DXPAD
#		if 1<=OUT_CHG_HMLIB && 100<CHG_HMLIB_DXPAD
#			pragma message("chg_hmLib : # error : [dxPad.hpp] ��Ή��o�[�W�����ł��Bv1_00����(v3_00_00�ȍ~)�́A�g�p�ł��܂���B")
#		endif
#//		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXPAD<200 && 200<=USE_HMLIB_DXPAD
#//			pragma message("chg_hmLib : # error : [dxPad.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv1_00(v3_00_00)���O�́A...")
#//		elif 1<=OUT_CHG_HMLIB && USE_HMLIB_DXPAD<200 && 200<=CHG_HMLIB_DXPAD
#//			pragma message("chg_hmLib : # error : [dxPad.hpp] ����݊����͕ۏ؂���Ă��܂���Bv1_00(v3_00_00)�ȍ~�́A...")
#//		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXPAD<100
#			pragma message("chg_hmLib : # error : [dxPad.hpp] ��Ή��o�[�W�����ł��Bv1_00(v2_08_05)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#	/* dxBasic�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_DXPAD
#		ifndef CHG_HMLIB_DXBASIC
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [dxPad.hpp] dxBasic.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��dxBasic.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/dxBasic.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/dxBasic.hpp"
#			endif
#		endif
#//		if 1<=OUT_CHG_HMLIB && 100<=CHG_HMLIB_DXPAD && CHG_HMLIB_DXBASIC<100
#//			pragma message("chg_hmLib : # error : [dxPad.hpp] dxBasic.hpp v1_00(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#//		elif 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXPAD<100 && 100<=CHG_HMLIB_DXBASIC
#//			pragma message("chg_hmLib : # error : [dxPad.hpp] dxBasic.hpp v1_00(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#//		endif
#		if 1<=OUT_CHG_HMLIB && ( CHG_HMLIB_DXBASIC<100 || CHG_HMLIB_DXBASIC==999)
#			pragma message("chg_hmLib : # error : [dxPad.hpp] �g�p�\��dxBasic.hpp�����݂��܂���B")
#		endif
#	endif
#
#	endif
#endif
