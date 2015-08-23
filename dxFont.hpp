/*
dxFont_v1_00.hpp
*/
#ifndef VER_HMLIB_DXFONT
#	define VER_HMLIB_DXFONT 100
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_DXFONT
#	if USE_HMLIB>=30000
#		define USE_HMLIB_DXFONT 100
#	else
#		define USE_HMLIB_DXFONT 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_DXFONT
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_DXFONT 100
#	else
#		define CHG_HMLIB_DXFONT 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_DXFONT
#	define INC_USE_HMLIB_DXFONT
#
#	if USE_HMLIB_DXFONT>100
#		error hmLib : # error : [dxFont.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B
#	elif USE_HMLIB_DXFONT==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [dxFont.hpp] v1_00")
#		endif
#		include "hmLib_v2/dxFont/dxFont_v1_00.h"
#	else
#		error hmLib : # error : [dxFont.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B
#	endif
#
#	if 3<=OUT_USE_HMLIB && 100<=USE_HMLIB_DXFONT
#		pragma message("hmLib : # info  : [dxFont.hpp] DxLib�ˑ��t�@�C���ł��B")
#	endif
#//	if 1<=OUT_USE_HMLIB && 100<=USE_HMLIB_DXFONT && USE_HMLIB_DXFONT<101
#//		pragma message("hmLib : # error : [dxFont.hpp] ...�Bv1_01(v3_01_00)�ȏ�ւ̑Ή��𐄏����܂��B")
#//	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_DXFONT
#	define INC_CHG_HMLIB_DXFONT
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMLIB_DXFONT
#		if 1<=OUT_CHG_HMLIB && 100<CHG_HMLIB_DXFONT
#			pragma message("chg_hmLib : # error : [dxFont.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXFONT<100
#			pragma message("chg_hmLib : # error : [dxFont.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#	/* hmPos�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_DXFONT
#		ifndef CHG_HMLIB_HMPOS
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [dxFont.hpp] hmPos.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��hmPos.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/hmPos.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/hmPos.hpp"
#			endif
#		endif
#	endif
#	/* hmColor�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_DXFONT
#		ifndef CHG_HMLIB_HMCOLOR
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [dxFont.hpp] hmColor.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��hmColor.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/hmColor.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/hmColor.hpp"
#			endif
#		endif
#		if 1<=OUT_CHG_HMLIB && 100<=CHG_HMLIB_DXFONT && CHG_HMLIB_HMCOLOR<101
#			pragma message("chg_hmLib : # error : [dxFont.hpp] hmColor.hpp v1_01(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_HMCOLOR<100
#			pragma message("chg_hmLib : # error : [dxFont.hpp] �g�p�\��hmColor.hpp�����݂��܂���B")
#		endif
#	endif
#
#	endif
#endif
