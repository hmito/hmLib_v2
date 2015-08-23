/*
hmRect�p�~
	��p��rectangle.hpp
hmRect_v1_01.hpp
	check�֐���ǉ�
hmRect_v1_00.hpp
*/
#ifndef VER_HMLIB_HMRECT
#	define VER_HMLIB_HMRECT 999
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_HMRECT
#	if USE_HMLIB>=30000
#		define USE_HMLIB_HMRECT 999
#	elif USE_HMLIB>=20805
#		define USE_HMLIB_HMRECT 101
#	elif USE_HMLIB>=20000
#		define USE_HMLIB_HMRECT 100
#	else
#		define USE_HMLIB_HMRECT 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_HMRECT
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_HMRECT 999
#	elif CHG_HMLIB>=20805
#		define CHG_HMLIB_HMRECT 101
#	elif CHG_HMLIB>=20000
#		define CHG_HMLIB_HMRECT 100
#	else
#		define CHG_HMLIB_HMRECT 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_HMRECT
#	define INC_USE_HMLIB_HMRECT
#
#	if USE_HMLIB_HMRECT>101
#		error hmLib : # error : [hmRect.hpp] �p�~�o�[�W�����ł��Bv1_01����(v3_00_00�ȍ~)�́A�g�p�ł��܂���B��p��rectangle.hpp�����݂��܂��B
#	elif USE_HMLIB_HMRECT==101
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [hmRect.hpp] v1_01")
#		endif
#		include "hmLib_v2/hmRect/hmRect_v1_01.hpp"
#	elif USE_HMLIB_HMRECT==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [hmRect.hpp] v1_00")
#		endif
#		include "hmLib_v2/hmRect/hmRect_v1_00.hpp"
#	else
#		error hmLib : # error : [hmRect.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B
#	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_HMRECT
#	define INC_CHG_HMLIB_HMRECT
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMLIB_HMRECT
#		if 1<=OUT_CHG_HMLIB && 101<CHG_HMLIB_HMRECT
#			pragma message("chg_hmLib : # error : [hmRect.hpp] �p�~�o�[�W�����ł��Bv1_01����(v3_00_00�ȍ~)�́A�g�p�ł��܂���B��p��rectangle.hpp�����݂��܂��B")
#		endif
#		if 2<=OUT_CHG_HMLIB && CHG_HMLIB_HMRECT<102 && 102<=USE_HMLIB_HMRECT
#			pragma message("chg_hmLib : #warning: [hmRect.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv1_01(v2_08_05)���O�́AhmRect::check�֐��͎g�p�ł��܂���B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_HMRECT<100
#			pragma message("chg_hmLib : # error : [hmRect.hpp] ��Ή��o�[�W�����ł��Bv1_00(v2_00_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#	/* hmPos�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_HMRECT
#		ifndef CHG_HMLIB_HMPOS
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [hmRect.hpp] hmPos.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��hmPos.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/hmPos.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/hmPos.hpp"
#			endif
#		endif
#
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_HMRECT<102 && 302<=CHG_HMLIB_HMPOS
#			pragma message("chg_hmLib : # error : [hmRect.hpp] hmPos.hpp v3_02(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#		elif 1<=OUT_CHG_HMLIB && CHG_HMLIB_HMPOS<302 && 102<=CHG_HMLIB_HMRECT
#			pragma message("chg_hmLib : # error : [hmRect.hpp] hmPos.hpp v3_02(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#		endif
#	endif
#
#	endif
#endif
