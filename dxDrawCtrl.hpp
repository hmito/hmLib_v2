/*
dxDrawCtrl_v1_00.hpp
*/
#ifndef VER_HMLIB_DXDRAWCTRL
#	define VER_HMLIB_DXDRAWCTRL 100
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_DXDRAWCTRL
#	if USE_HMLIB>=30000
#		define USE_HMLIB_DXDRAWCTRL 100
#	else
#		define USE_HMLIB_DXDRAWCTRL 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_DXDRAWCTRL
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_DXDRAWCTRL 100
#	else
#		define CHG_HMLIB_DXDRAWCTRL 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_DXDRAWCTRL
#	define INC_USE_HMLIB_DXDRAWCTRL
#
#	if USE_HMLIB_DXDRAWCTRL>100
#		error hmLib : # error : [dxDrawCtrl.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B
#	elif USE_HMLIB_DXDRAWCTRL==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [dxDrawCtrl.hpp] v1_00")
#		endif
#		include "hmLib_v2/dxDrawCtrl/dxDrawCtrl_v1_00.h"
#	else
#		error hmLib : # error : [dxDrawCtrl.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B
#	endif
#
#	if 3<=OUT_USE_HMLIB && 100<=USE_HMLIB_DXDRAWCTRL
#		pragma message("hmLib : # info  : [dxDrawCtrl.hpp] DxLib�ˑ��t�@�C���ł��B")
#	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_DXDRAWCTRL
#	define INC_CHG_HMLIB_DXDRAWCTRL
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMLIB_DXDRAWCTRL
#		if 1<=OUT_CHG_HMLIB && 100<CHG_HMLIB_DXDRAWCTRL
#			pragma message("chg_hmLib : # error : [dxDrawCtrl.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXDRAWCTRL<100
#			pragma message("chg_hmLib : # error : [dxDrawCtrl.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#	/* hmRect�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_DXDRAWCTRL
#		ifndef CHG_HMLIB_HMRECT
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [dxDrawCtrl.hpp] hmRect.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��hmRect.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/hmRect.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/hmRect.hpp"
#			endif
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_HMRECT<102 && 100<=CHG_HMLIB_DXDRAWCTRL
#			pragma message("chg_hmLib : # error : [dxDrawCtrl.hpp] hmRect.hpp v1_02(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#		endif
#	endif
#	/* hmColor�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_DXDRAWCTRL
#		ifndef CHG_HMLIB_HMCOLOR
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [dxDrawCtrl.hpp] hmColor.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��hmColor.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/hmColor.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/hmColor.hpp"
#			endif
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_HMCOLOR<101 && 100<=CHG_HMLIB_DXDRAWCTRL
#			pragma message("chg_hmLib : # error : [dxDrawCtrl.hpp] hmColor.hpp v1_01(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#		endif
#	endif
#	/* basic_operator�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_DXDRAWCTRL
#		ifndef CHG_HMLIB_BASICOPERATOR
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [dxDrawCtrl.hpp] basic_operator.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��basic_operator.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/basic_operator.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/basic_operator.hpp"
#			endif
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_BASICOPERATOR<101 && 100<=CHG_HMLIB_DXDRAWCTRL
#			pragma message("chg_hmLib : # error : [dxDrawCtrl.hpp] basic_operator.hpp v1_01(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#		endif
#	endif
#
#	endif
#endif
