/*
dxColor_v2_00
	dxRGB,dxHSV,dxHLS�ɍĕ�
*/
#ifndef VER_HMLIB_DXCOLOR
#	define VER_HMLIB_DXCOLOR 200
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_DXCOLOR
#	if USE_HMLIB>=30000
#		define USE_HMLIB_DXCOLOR 999
#	elif USE_HMLIB>=20000
#		define USE_HMLIB_DXCOLOR 200
#	else
#		define USE_HMLIB_DXCOLOR 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_DXCOLOR
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_DXCOLOR 999
#	elif CHG_HMLIB>=20000
#		define CHG_HMLIB_DXCOLOR 200
#	else
#		define CHG_HMLIB_DXCOLOR 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_DXCOLOR
#	define INC_USE_HMLIB_DXCOLOR
#
#	if USE_HMLIB_DXCOLOR>200
#		error hmLib : # error : [dxColor.hpp] ��Ή��o�[�W�����ł��Bv2_00����(v3_00_00�ȍ~)�́A�g�p�ł��܂���B
#	elif USE_HMLIB_DXCOLOR==200
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [dxColor.hpp] v2_00")
#		endif
#		include "hmLib_v2/dxColor/dxColor_v2_00.hpp"
#	else
#		error hmLib : # error : [dxColor.hpp] ��Ή��o�[�W�����ł��Bv2_00(v2_00_00)���O�́A�g�p�ł��܂���B
#	endif
#
#//	if 1<=OUT_USE_HMLIB && 100<=USE_HMLIB_DXCOLOR && USE_HMLIB_DXCOLOR<101
#//		pragma message("hmLib : # error : [dxColor.hpp] ...�Bv1_01(v3_01_00)�ȏ�ւ̑Ή��𐄏����܂��B")
#//	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_DXCOLOR
#	define INC_CHG_HMLIB_DXCOLOR
#
#	/*���g�Ƃ̌݊���*/
#	if 200<=USE_HMLIB_DXCOLOR
#		if 1<=OUT_CHG_HMLIB && 200<CHG_HMLIB_DXCOLOR
#			pragma message("chg_hmLib : # error : [dxColor.hpp] ��Ή��o�[�W�����ł��Bv2_00����(v3_00_00�ȍ~)�́A�g�p�ł��܂���B")
#		endif
#//		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXCOLOR<100 && 100<=USE_HMLIB_DXCOLOR
#//			pragma message("chg_hmLib : # error : [dxColor.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv1_00(v3_00_00)���O�́A...")
#//		elif 1<=OUT_CHG_HMLIB && USE_HMLIB_DXCOLOR<100 && 100<=CHG_HMLIB_DXCOLOR
#//			pragma message("chg_hmLib : # error : [dxColor.hpp] ����݊����͕ۏ؂���Ă��܂���Bv1_00(v3_00_00)�ȍ~�́A...")
#//		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXCOLOR<200
#			pragma message("chg_hmLib : # error : [dxColor.hpp] ��Ή��o�[�W�����ł��Bv2_00(v2_00_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#	/* hmColor�Ƃ̌݊����ɂ���*/
#	if 200<=CHG_HMLIB_DXCOLOR
#		ifndef CHG_HMLIB_HMCOLOR
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [dxColor.hpp] hmColor.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��hmColor.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/hmColor.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/hmColor.hpp"
#			endif
#		endif
#//		if 1<=OUT_CHG_HMLIB && 100<=CHG_HMLIB_DXCOLOR && CHG_HMLIB_HMCOLOR<100
#//			pragma message("chg_hmLib : # error : [dxColor.hpp] hmColor.hpp v1_00(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXCOLOR<200 && 101<=CHG_HMLIB_HMCOLOR
#			pragma message("chg_hmLib : # error : [dxColor.hpp] hmColor.hpp v1_01(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#		endif
#		if 1<=OUT_CHG_HMLIB && ( CHG_HMLIB_HMCOLOR<100 || CHG_HMLIB_HMCOLOR==999)
#			pragma message("chg_hmLib : # error : [dxColor.hpp] �g�p�\��hmColor.hpp�����݂��܂���B")
#		endif
#	endif
#
#	endif
#endif
