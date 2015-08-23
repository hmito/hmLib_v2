/*
dxGraphics_v1_00.hpp
*/
#ifndef VER_HMLIB_DXGRAPHICS
#	define VER_HMLIB_DXGRAPHICS 100
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_DXGRAPHICS
#	if USE_HMLIB>=30000
#		define USE_HMLIB_DXGRAPHICS 100
#	else
#		define USE_HMLIB_DXGRAPHICS 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_DXGRAPHICS
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_DXGRAPHICS 100
#	else
#		define CHG_HMLIB_DXGRAPHICS 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_DXGRAPHICS
#	define INC_USE_HMLIB_DXGRAPHICS
#
#	if USE_HMLIB_DXGRAPHICS>100
#		error hmLib : # error : [dxGraphics.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B
#	elif USE_HMLIB_DXGRAPHICS==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [dxGraphics.hpp] v1_00")
#		endif
#		include "hmLib_v2/dxGraphics/dxGraphics_v1_00.h"
#	else
#		error hmLib : # error : [dxGraphics.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B
#	endif
#
#//	if 1<=OUT_USE_HMLIB && 100<=USE_HMLIB_DXGRAPHICS && USE_HMLIB_DXGRAPHICS<101
#//		pragma message("hmLib : # error : [dxGraphics.hpp] ...�Bv1_01(v3_01_00)�ȏ�ւ̑Ή��𐄏����܂��B")
#//	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_DXGRAPHICS
#	define INC_CHG_HMLIB_DXGRAPHICS
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMLIB_DXGRAPHICS
#		if 1<=OUT_CHG_HMLIB && 100<CHG_HMLIB_DXGRAPHICS
#			pragma message("chg_hmLib : # error : [dxGraphics.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B")
#		endif
#//		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXGRAPHICS<200 && 200<=USE_HMLIB_DXGRAPHICS
#//			pragma message("chg_hmLib : # error : [dxGraphics.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv1_00(v3_00_00)���O�́A...")
#//		elif 1<=OUT_CHG_HMLIB && USE_HMLIB_DXGRAPHICS<200 && 200<=CHG_HMLIB_DXGRAPHICS
#//			pragma message("chg_hmLib : # error : [dxGraphics.hpp] ����݊����͕ۏ؂���Ă��܂���Bv1_00(v3_00_00)�ȍ~�́A...")
#//		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXGRAPHICS<100
#			pragma message("chg_hmLib : # error : [dxGraphics.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#	/* hmColor�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_DXGRAPHICS
#		ifndef CHG_HMLIB_HMCOLOR
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [dxGraphics.hpp] hmColor.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��hmColor.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/hmColor.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/hmColor.hpp"
#			endif
#		endif
#		if 1<=OUT_CHG_HMLIB && 101<=CHG_HMLIB_DXGRAPHICS && CHG_HMLIB_HMCOLOR<100
#			pragma message("chg_hmLib : # error : [dxGraphics.hpp] hmColor.hpp v1_01(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#//		elif 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXGRAPHICS<100 && 100<=CHG_HMLIB_HMCOLOR
#//			pragma message("chg_hmLib : # error : [dxGraphics.hpp] hmColor.hpp v1_00(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#		endif
#//		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_HMCOLOR<100
#//			pragma message("chg_hmLib : # error : [dxGraphics.hpp] �g�p�\��hmColor.hpp�����݂��܂���B")
#//		endif
#	endif
#	/* hmRect�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_DXGRAPHICS
#		ifndef CHG_HMLIB_HMRECT
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [dxGraphics.hpp] hmRect.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��hmRect.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/hmRect.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/hmRect.hpp"
#			endif
#		endif
#		if 1<=OUT_CHG_HMLIB && 100<=CHG_HMLIB_DXGRAPHICS && CHG_HMLIB_HMRECT<102
#			pragma message("chg_hmLib : # error : [dxGraphics.hpp] hmRect.hpp v1_02(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#//		elif 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXGRAPHICS<100 && 100<=CHG_HMLIB_HMRECT
#//			pragma message("chg_hmLib : # error : [dxGraphics.hpp] hmRect.hpp v1_00(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#		endif
#//		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_YYY<100
#//			pragma message("chg_hmLib : # error : [dxGraphics.hpp] �g�p�\��yyy.hpp�����݂��܂���B")
#//		endif
#	endif
#	/* dxImage�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_DXGRAPHICS
#		ifndef CHG_HMLIB_DXIMAGE
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [dxGraphics.hpp] dxImage.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��dxImage.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/dxImage.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/dxImage.hpp"
#			endif
#		endif
#		if 1<=OUT_CHG_HMLIB && 100<=CHG_HMLIB_DXGRAPHICS && CHG_HMLIB_DXIMAGE<100
#			pragma message("chg_hmLib : # error : [dxGraphics.hpp] dxImage.hpp v1_00(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#//		elif 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXGRAPHICS<100 && 100<=CHG_HMLIB_DXIMAGE
#//			pragma message("chg_hmLib : # error : [dxGraphics.hpp] dxImage.hpp v1_00(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#		endif
#//		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXIMAGE<100
#//			pragma message("chg_hmLib : # error : [dxGraphics.hpp] �g�p�\��dxImage.hpp�����݂��܂���B")
#//		endif
#	endif
#	/* dxDrawCtrl�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_DXGRAPHICS
#		ifndef CHG_HMLIB_DXDRAWCTRL
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [dxGraphics.hpp] dxDrawCtrl.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��dxDrawCtrl.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/dxDrawCtrl.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/dxDrawCtrl.hpp"
#			endif
#		endif
#		if 1<=OUT_CHG_HMLIB && 100<=CHG_HMLIB_DXGRAPHICS && CHG_HMLIB_DXDRAWCTRL<100
#			pragma message("chg_hmLib : # error : [dxGraphics.hpp] dxDrawCtrl.hpp v1_00(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#//		elif 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXGRAPHICS<100 && 100<=CHG_HMLIB_DXDRAWCTRL
#//			pragma message("chg_hmLib : # error : [dxGraphics.hpp] dxDrawCtrl.hpp v1_00(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#		endif
#//		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXDRAWCTRL<100
#//			pragma message("chg_hmLib : # error : [dxGraphics.hpp] �g�p�\��dxDrawCtrl.hpp�����݂��܂���B")
#//		endif
#	endif
#
#	endif
#endif
