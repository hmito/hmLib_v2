/*
hmColor �p�~
	��p��color.hpp
hmColor_v1_00.hpp
*/
#ifndef VER_HMLIB_HMCOLOR
#	define VER_HMLIB_HMCOLOR 999
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_HMCOLOR
#	if USE_HMLIB>=30000
#		define USE_HMLIB_HMCOLOR 999
#	elif USE_HMLIB>=20000
#		define USE_HMLIB_HMCOLOR 100
#	else
#		define USE_HMLIB_HMCOLOR 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_HMCOLOR
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_HMCOLOR 999
#	elif CHG_HMLIB>=20000
#		define CHG_HMLIB_HMCOLOR 100
#	else
#		define CHG_HMLIB_HMCOLOR 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_HMCOLOR
#	define INC_USE_HMLIB_HMCOLOR
#
#	if USE_HMLIB_HMCOLOR>999
#		error hmLib : # error : [hmColor.hpp] �p�~�o�[�W�����ł��Bv1_01����(v3_00_00�ȍ~)�́A�g�p�ł��܂���B��p��color.hpp�ł��B
#	elif USE_HMLIB_HMCOLOR==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [hmColor.hpp] v1_00")
#		endif
#		include "hmLib_v2/hmColor/hmColor_v1_00.hpp"
#	else
#		error hmLib : # error : [hmColor.hpp] ��Ή��o�[�W�����ł��Bv1_00(v2_00_00)���O�́A�g�p�ł��܂���B
#	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_HMCOLOR
#	define INC_CHG_HMLIB_HMCOLOR
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMLIB_HMCOLOR
#		if 1<=OUT_CHG_HMLIB && 100<CHG_HMLIB_HMCOLOR
#			pragma message("chg_hmLib : # error : [hmColor.hpp] �p�~�o�[�W�����ł��Bv1_01����(v3_00_00�ȍ~)�́A�g�p�ł��܂���B��p��color.hpp�ł��B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_HMCOLOR<100
#			pragma message("chg_hmLib : # error : [hmColor.hpp] ��Ή��o�[�W�����ł��Bv1_00(v2_00_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#	/* hmBasic�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_HMCOLOR && CHG_HMLIB_HMCOLOR<=100
#		ifndef CHG_HMLIB_HMBASIC
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [hmColor.hpp] hmBasic.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��hmBasic.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/hmBasic.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/hmBasic.hpp"
#			endif
#		endif
#	endif
#
#	endif
#endif
