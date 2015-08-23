/*
dxInput_v1_00.hpp
*/
#ifndef VER_HMLIB_DXINPUT
#	define VER_HMLIB_DXINPUT 100
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_DXINPUT
#	if USE_HMLIB>=30000
#		define USE_HMLIB_DXINPUT 100
#	else
#		define USE_HMLIB_DXINPUT 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_DXINPUT
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_DXINPUT 100
#	else
#		define CHG_HMLIB_DXINPUT 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_DXINPUT
#	define INC_USE_HMLIB_DXINPUT
#
#	if USE_HMLIB_DXINPUT>100
#		error hmLib : # error : [dxInput.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B
#	elif USE_HMLIB_DXINPUT==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [dxInput.hpp] v1_00")
#		endif
#		include "hmLib_v2/dxInput/dxInput_v1_00.h"
#	else
#		error hmLib : # error : [dxInput.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B
#	endif
#
#	if 3<=OUT_USE_HMLIB && 100<=USE_HMLIB_DXINPUT
#		pragma message("hmLib : # info  : [dxInput.hpp] DxLib�ˑ��t�@�C���ł��B")
#	endif
#//	if 1<=OUT_USE_HMLIB && 100<=USE_HMLIB_DXINPUT && USE_HMLIB_DXINPUT<101
#//		pragma message("hmLib : # error : [dxInput.hpp] ...�Bv1_01(v3_01_00)�ȏ�ւ̑Ή��𐄏����܂��B")
#//	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_DXINPUT
#	define INC_CHG_HMLIB_DXINPUT
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMLIB_DXINPUT
#		if 1<=OUT_CHG_HMLIB && 100<CHG_HMLIB_DXINPUT
#			pragma message("chg_hmLib : # error : [dxInput.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B")
#		endif
#//		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXINPUT<200 && 200<=USE_HMLIB_DXINPUT
#//			pragma message("chg_hmLib : # error : [dxInput.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv1_00(v3_00_00)���O�́A...")
#//		elif 1<=OUT_CHG_HMLIB && USE_HMLIB_DXINPUT<200 && 200<=CHG_HMLIB_DXINPUT
#//			pragma message("chg_hmLib : # error : [dxInput.hpp] ����݊����͕ۏ؂���Ă��܂���Bv1_00(v3_00_00)�ȍ~�́A...")
#//		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXINPUT<100
#			pragma message("chg_hmLib : # error : [dxInput.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#	/* hmTask�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_DXINPUT
#		ifndef CHG_HMLIB_HMTASK
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [dxInput.hpp] hmTask.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��hmTask.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/hmTask.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/hmTask.hpp"
#			endif
#		endif
#//		if 1<=OUT_CHG_HMLIB && 100<=CHG_HMLIB_DXINPUT && CHG_HMLIB_HMTASK<100
#//			pragma message("chg_hmLib : # error : [dxInput.hpp] hmTask.hpp v1_00(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#//		elif 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXINPUT<100 && 100<=CHG_HMLIB_HMTASK
#//			pragma message("chg_hmLib : # error : [dxInput.hpp] hmTask.hpp v1_00(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#//		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_HMTASK<100
#			pragma message("chg_hmLib : # error : [dxInput.hpp] �g�p�\��hmTask.hpp�����݂��܂���B")
#		endif
#	endif
#	/* hmStr�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_DXINPUT
#		ifndef CHG_HMLIB_HMSTR
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [dxInput.hpp] hmStr.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��hmStr.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/hmStr.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/hmStr.hpp"
#			endif
#		endif
#//		if 1<=OUT_CHG_HMLIB && 100<=CHG_HMLIB_DXINPUT && CHG_HMLIB_HMSTR<100
#//			pragma message("chg_hmLib : # error : [dxInput.hpp] hmStr.hpp v1_00(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#//		elif 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXINPUT<100 && 100<=CHG_HMLIB_HMSTR
#//			pragma message("chg_hmLib : # error : [dxInput.hpp] hmStr.hpp v1_00(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#//		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_HMSTR<100
#			pragma message("chg_hmLib : # error : [dxInput.hpp] �g�p�\��hmStr.hpp�����݂��܂���B")
#		endif
#	endif
#	/* dxFont�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_DXINPUT
#		ifndef CHG_HMLIB_DXFONT
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [dxInput.hpp] dxFont.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��dxFont.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/dxFont.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/dxFont.hpp"
#			endif
#		endif
#//		if 1<=OUT_CHG_HMLIB && 100<=CHG_HMLIB_DXINPUT && CHG_HMLIB_DXFONT<100
#//			pragma message("chg_hmLib : # error : [dxInput.hpp] dxFont.hpp v1_00(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#//		elif 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXINPUT<100 && 100<=CHG_HMLIB_DXFONT
#//			pragma message("chg_hmLib : # error : [dxInput.hpp] dxFont.hpp v1_00(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#//		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXFONT<100
#			pragma message("chg_hmLib : # error : [dxInput.hpp] �g�p�\��dxFont.hpp�����݂��܂���B")
#		endif
#	endif
#	/* dxDrawFunc�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_DXINPUT
#		ifndef CHG_HMLIB_DXDRAWFUNC
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [dxInput.hpp] dxDrawFunc.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��dxDrawFunc.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/dxDrawFunc.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/dxDrawFunc.hpp"
#			endif
#		endif
#//		if 1<=OUT_CHG_HMLIB && 100<=CHG_HMLIB_DXINPUT && CHG_HMLIB_DXDRAWFUNC<100
#//			pragma message("chg_hmLib : # error : [dxInput.hpp] dxDrawFunc.hpp v1_00(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#//		elif 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXINPUT<100 && 100<=CHG_HMLIB_DXDRAWFUNC
#//			pragma message("chg_hmLib : # error : [dxInput.hpp] dxDrawFunc.hpp v1_00(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#//		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXDRAWFUNC<100
#			pragma message("chg_hmLib : # error : [dxInput.hpp] �g�p�\��dxDrawFunc.hpp�����݂��܂���B")
#		endif
#	endif
#	/* dxDrawCtrl�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_DXINPUT
#		ifndef CHG_HMLIB_DXDRAWCTRL
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [dxInput.hpp] dxDrawCtrl.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��dxDrawCtrl.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/dxDrawCtrl.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/dxDrawCtrl.hpp"
#			endif
#		endif
#//		if 1<=OUT_CHG_HMLIB && 100<=CHG_HMLIB_DXINPUT && CHG_HMLIB_DXDRAWCTRL<100
#//			pragma message("chg_hmLib : # error : [dxInput.hpp] dxDrawCtrl.hpp v1_00(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#//		elif 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXINPUT<100 && 100<=CHG_HMLIB_DXDRAWCTRL
#//			pragma message("chg_hmLib : # error : [dxInput.hpp] dxDrawCtrl.hpp v1_00(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#//		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXDRAWCTRL<100
#			pragma message("chg_hmLib : # error : [dxInput.hpp] �g�p�\��dxDrawCtrl.hpp�����݂��܂���B")
#		endif
#	endif
#
#	endif
#endif
