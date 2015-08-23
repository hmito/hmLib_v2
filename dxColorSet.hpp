/*
dxColorSet�p�~
	��p�́AhmColorSet.hpp
dxColorSet_v1_01
	�F���ĕ�
*/
#ifndef VER_HMLIB_DXCOLORSET
#	define VER_HMLIB_DXCOLORSET 101
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_DXCOLORSET
#	if USE_HMLIB>=30000
#		define USE_HMLIB_DXCOLORSET 999
#	elif USE_HMLIB>=20000
#		define USE_HMLIB_DXCOLORSET 101
#	else
#		define USE_HMLIB_DXCOLORSET 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_DXCOLORSET
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_DXCOLORSET 999
#	elif CHG_HMLIB>=20000
#		define CHG_HMLIB_DXCOLORSET 101
#	else
#		define CHG_HMLIB_DXCOLORSET 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_DXCOLORSET
#	define INC_USE_HMLIB_DXCOLORSET
#
#	if USE_HMLIB_DXCOLORSET>101
#		error hmLib : # error : [dxColorSet.hpp] ��Ή��o�[�W�����ł��Bv1_01����(v3_00_00�ȍ~)�́A�g�p�ł��܂���B
#	elif USE_HMLIB_DXCOLORSET==101
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [dxColorSet.hpp] v1_01")
#		endif
#		include "hmLib_v2/dxColorSet/dxColorSet_v1_01.h"
#	else
#		error hmLib : # error : [dxColorSet.hpp] ��Ή��o�[�W�����ł��Bv1_01(v2_00_00)���O�́A�g�p�ł��܂���B
#	endif
#
#//	if 1<=OUT_USE_HMLIB && 100<=USE_HMLIB_DXCOLORSET && USE_HMLIB_DXCOLORSET<101
#//		pragma message("hmLib : # error : [dxColorSet.hpp] ...�Bv1_01(v3_01_00)�ȏ�ւ̑Ή��𐄏����܂��B")
#//	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_DXCOLORSET
#	define INC_CHG_HMLIB_DXCOLORSET
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMLIB_DXCOLORSET
#		if 1<=OUT_CHG_HMLIB && 101<CHG_HMLIB_DXCOLORSET
#			pragma message("chg_hmLib : # error : [dxColorSet.hpp] ��Ή��o�[�W�����ł��Bv1_01����(v3_00_00�ȍ~)�́A�g�p�ł��܂���B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXCOLORSET<100
#			pragma message("chg_hmLib : # error : [dxColorSet.hpp] ��Ή��o�[�W�����ł��Bv1_01(v2_00_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#	/* dxColor�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_DXCOLORSET
#		ifndef CHG_HMLIB_DXCOLOR
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [dxColorSet.hpp] dxColor.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��dxColor.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/dxColor.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/dxColor.hpp"
#			endif
#		endif
#//		if 1<=OUT_CHG_HMLIB && 100<=CHG_HMLIB_DXCOLORSET && CHG_HMLIB_DXCOLOR<100
#//			pragma message("chg_hmLib : # error : [dxColorSet.hpp] dxColor.hpp v1_00(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#//		elif 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXCOLORSET<100 && 100<=CHG_HMLIB_DXCOLOR
#//			pragma message("chg_hmLib : # error : [dxColorSet.hpp] dxColor.hpp v1_00(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#//		endif
#		if 1<=OUT_CHG_HMLIB && ( CHG_HMLIB_DXCOLOR<100 || CHG_HMLIB_DXCOLOR==999)
#			pragma message("chg_hmLib : # error : [dxColorSet.hpp] �g�p�\��dxColor.hpp�����݂��܂���B")
#		endif
#	endif
#
#	endif
#endif
