/*
dxDisplay_v1_00.hpp
*/
#ifndef VER_HMLIB_DXDISPLAY
#	define VER_HMLIB_DXDISPLAY 100
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_DXDISPLAY
#	if USE_HMLIB>=30000
#		define USE_HMLIB_DXDISPLAY 100
#	else
#		define USE_HMLIB_DXDISPLAY 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_DXDISPLAY
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_DXDISPLAY 100
#	else
#		define CHG_HMLIB_DXDISPLAY 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_DXDISPLAY
#	define INC_USE_HMLIB_DXDISPLAY
#
#	if USE_HMLIB_DXDISPLAY>100
#		error hmLib : # error : [dxDisplay.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B
#	elif USE_HMLIB_DXDISPLAY==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [dxDisplay.hpp] v1_00")
#		endif
#		include "hmLib_v2/dxDisplay/dxDisplay_v1_00.h"
#	else
#		error hmLib : # error : [dxDisplay.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B
#	endif
#
#	if 3<=OUT_USE_HMLIB && 100<=USE_HMLIB_DXDISPLAY
#		pragma message("hmLib : # info  : [dxDisplay.hpp] DxLib�ˑ��t�@�C���ł��B")
#	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_DXDISPLAY
#	define INC_CHG_HMLIB_DXDISPLAY
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMLIB_DXDISPLAY
#		if 1<=OUT_CHG_HMLIB && 100<CHG_HMLIB_DXDISPLAY
#			pragma message("chg_hmLib : # error : [dxDisplay.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXDISPLAY<100
#			pragma message("chg_hmLib : # error : [dxDisplay.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#	/* hmPos.hpp�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_DXDISPLAY
#		ifndef CHG_HMLIB_HMPOS
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [dxDisplay.hpp] hmPos.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��hmPos.hpp��include���܂��B")
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
#	/* hmTask�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_DXDISPLAY
#		ifndef CHG_HMLIB_HMTASK
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [dxDisplay.hpp] hmTask.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��hmTask.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/hmTask.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/hmTask.hpp"
#			endif
#		endif
#	endif
#	/* dxImage�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_DXDISPLAY
#		ifndef CHG_HMLIB_DXIMAGE
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [dxDisplay.hpp] dxImage.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��dxImage.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/dxImage.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/dxImage.hpp"
#			endif
#		endif
#	endif
#
#	endif
#endif
