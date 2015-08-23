/*
dxDrawFunc_v1_00.hpp
*/
#ifndef VER_HMLIB_DXDRAWFUNC
#	define VER_HMLIB_DXDRAWFUNC 100
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_DXDRAWFUNC
#	if USE_HMLIB>=30000
#		define USE_HMLIB_DXDRAWFUNC 100
#	else
#		define USE_HMLIB_DXDRAWFUNC 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_DXDRAWFUNC
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_DXDRAWFUNC 100
#	else
#		define CHG_HMLIB_DXDRAWFUNC 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_DXDRAWFUNC
#	define INC_USE_HMLIB_DXDRAWFUNC
#
#	if USE_HMLIB_DXDRAWFUNC>100
#		error hmLib : # error : [dxDrawFunc.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B
#	elif USE_HMLIB_DXDRAWFUNC==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [dxDrawFunc.hpp] v1_00")
#		endif
#		include "hmLib_v2/dxDrawFunc/dxDrawFunc_v1_00.hpp"
#	else
#		error hmLib : # error : [dxDrawFunc.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B
#	endif
#
#	if 3<=OUT_USE_HMLIB && 100<=USE_HMLIB_DXDRAWFUNC
#		pragma message("hmLib : # info  : [dxDrawFunc.hpp] DxLib�ˑ��t�@�C���ł��B")
#	endif
#//	if 1<=OUT_USE_HMLIB && 100<=USE_HMLIB_DXDRAWFUNC && USE_HMLIB_DXDRAWFUNC<101
#//		pragma message("hmLib : # error : [dxDrawFunc.hpp] ...�Bv1_01(v3_01_00)�ȏ�ւ̑Ή��𐄏����܂��B")
#//	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_DXDRAWFUNC
#	define INC_CHG_HMLIB_DXDRAWFUNC
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMLIB_DXDRAWFUNC
#		if 1<=OUT_CHG_HMLIB && 100<CHG_HMLIB_DXDRAWFUNC
#			pragma message("chg_hmLib : # error : [dxDrawFunc.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B")
#		endif
#//		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXDRAWFUNC<200 && 200<=USE_HMLIB_DXDRAWFUNC
#//			pragma message("chg_hmLib : # error : [dxDrawFunc.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv1_00(v3_00_00)���O�́A...")
#//		elif 1<=OUT_CHG_HMLIB && USE_HMLIB_DXDRAWFUNC<200 && 200<=CHG_HMLIB_DXDRAWFUNC
#//			pragma message("chg_hmLib : # error : [dxDrawFunc.hpp] ����݊����͕ۏ؂���Ă��܂���Bv1_00(v3_00_00)�ȍ~�́A...")
#//		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXDRAWFUNC<100
#			pragma message("chg_hmLib : # error : [dxDrawFunc.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#	/* dxImage�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_DXDRAWFUNC
#		ifndef CHG_HMLIB_DXIMAGE
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [dxDrawFunc.hpp] dxImage.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��dxImage.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/dxImage.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/dxImage.hpp"
#			endif
#		endif
#//		if 1<=OUT_CHG_HMLIB && 100<=CHG_HMLIB_DXDRAWFUNC && CHG_HMLIB_DXIMAGE<100
#//			pragma message("chg_hmLib : # error : [dxDrawFunc.hpp] dxImage.hpp v1_00(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#//		elif 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXDRAWFUNC<100 && 100<=CHG_HMLIB_DXIMAGE
#//			pragma message("chg_hmLib : # error : [dxDrawFunc.hpp] dxImage.hpp v1_00(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#//		endif
#//		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXIMAGE<100
#//			pragma message("chg_hmLib : # error : [dxDrawFunc.hpp] �g�p�\��dxImage.hpp�����݂��܂���B")
#//		endif
#	endif
#	/* dxFont�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_DXDRAWFUNC
#		ifndef CHG_HMLIB_DXFONT
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [dxDrawFunc.hpp] dxFont.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��dxFont.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/dxFont.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/dxFont.hpp"
#			endif
#		endif
#//		if 1<=OUT_CHG_HMLIB && 100<=CHG_HMLIB_DXDRAWFUNC && CHG_HMLIB_DXFONT<100
#//			pragma message("chg_hmLib : # error : [dxDrawFunc.hpp] dxFont.hpp v1_00(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#//		elif 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXDRAWFUNC<100 && 100<=CHG_HMLIB_DXFONT
#//			pragma message("chg_hmLib : # error : [dxDrawFunc.hpp] dxFont.hpp v1_00(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#//		endif
#//		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXFONT<100
#//			pragma message("chg_hmLib : # error : [dxDrawFunc.hpp] �g�p�\��dxFont.hpp�����݂��܂���B")
#//		endif
#	endif
#	/* hmAlign�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_DXDRAWFUNC
#		ifndef CHG_HMLIB_HMALIGN
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [dxDrawFunc.hpp] hmAlign.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��hmAlign.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/hmAlign.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/hmAlign.hpp"
#			endif
#		endif
#		if 1<=OUT_CHG_HMLIB && 100<=CHG_HMLIB_DXDRAWFUNC && CHG_HMLIB_HMALIGN<102
#			pragma message("chg_hmLib : # error : [dxDrawFunc.hpp] hmAlign.hpp v1_02(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#		endif
#//		if 1<=OUT_CHG_HMLIB && 100<=CHG_HMLIB_DXDRAWFUNC && CHG_HMLIB_HMALIGN<100
#//			pragma message("chg_hmLib : # error : [dxDrawFunc.hpp] hmAlign.hpp v1_00(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#//		elif 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXDRAWFUNC<100 && 100<=CHG_HMLIB_HMALIGN
#//			pragma message("chg_hmLib : # error : [dxDrawFunc.hpp] hmAlign.hpp v1_00(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#//		endif
#	endif
#
#	endif
#endif
