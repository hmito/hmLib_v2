/*
dxKernel_v1_00.hpp
*/
#ifndef VER_HMLIB_DXKERNEL
#	define VER_HMLIB_DXKERNEL 100
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_DXKERNEL
#	if USE_HMLIB>=30000
#		define USE_HMLIB_DXKERNEL 100
#	else
#		define USE_HMLIB_DXKERNEL 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_DXKERNEL
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_DXKERNEL 100
#	else
#		define CHG_HMLIB_DXKERNEL 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_DXKERNEL
#	define INC_USE_HMLIB_DXKERNEL
#
#	if USE_HMLIB_DXKERNEL>100
#		error hmLib : # error : [dxKernel.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B
#	elif USE_HMLIB_DXKERNEL==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [dxKernel.hpp] v1_00")
#		endif
#		include "hmLib_v2/dxKernel/dxKernel_v1_00.h"
#	else
#		error hmLib : # error : [dxKernel.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B
#	endif
#
#	if 3<=OUT_USE_HMLIB && 100<=USE_HMLIB_DXKERNEL
#		pragma message("hmLib : # info  : [dxKernel.hpp] DxLib�ˑ��t�@�C���ł��B")
#	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_DXKERNEL
#	define INC_CHG_HMLIB_DXKERNEL
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMLIB_DXKERNEL
#		if 1<=OUT_CHG_HMLIB && 100<CHG_HMLIB_DXKERNEL
#			pragma message("chg_hmLib : # error : [dxKernel.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXKERNEL<100
#			pragma message("chg_hmLib : # error : [dxKernel.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#	/* hmTask�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_DXKERNEL
#		ifndef CHG_HMLIB_HMTASK
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [dxKernel.hpp] hmTask.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��hmTask.hpp��include���܂��B")
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
#
#	endif
#endif
