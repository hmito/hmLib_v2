/*
dxClock_v1_00.hpp
*/
#ifndef VER_DXCLOCK
#	define VER_DXCLOCK 100
#endif
#ifndef INC_HMLIB
#	include "hmLib.h"
#endif
#
#ifndef USE_DXCLOCK
#	if USE_HMLIB>=30000
#		define USE_DXCLOCK 100
#	else
#		define USE_DXCLOCK 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_DXCLOCK
#	if CHG_HMLIB>=30000
#		define CHG_DXCLOCK 100
#	else
#		define CHG_DXCLOCK 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_DXCLOCK
#	define INC_USE_DXCLOCK
#
#	if USE_DXCLOCK>100
#		error hmLib # error : [dxClock.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B
#	elif USE_DXCLOCK==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [dxClock.hpp] v1_00")
#		endif
#		include "dxClock/dxClock_v1_00.h"
#	else
#		error hmLib # error : [dxClock.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B
#	endif
#
#	if 3<=OUT_USE_HMLIB && 100<=USE_DXCLOCK
#		pragma message("hmLib # info  : [dxClock.hpp] DxLib�ˑ��t�@�C���ł��B")
#	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_DXCLOCK
#	define INC_CHG_DXCLOCK
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_DXCLOCK
#		if 1<=OUT_CHG_HMLIB && 100<CHG_DXCLOCK
#			pragma message("chg_hmLib # error : [dxClock.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_DXCLOCK<100
#			pragma message("chg_hmLib # error : [dxClock.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#
#	endif
#endif
