/*
hmObject_v1_00.hpp
*/
#ifndef VER_HMLIB_HMOBJECT
#	define VER_HMLIB_HMOBJECT 999
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_HMOBJECT
#	if USE_HMLIB>=30000
#		define USE_HMLIB_HMOBJECT 999
#	elif USE_HMLIB>=20000
#		define USE_HMLIB_HMOBJECT 200
#	else
#		define USE_HMLIB_HMOBJECT 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_HMOBJECT
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_HMOBJECT 999
#	elif CHG_HMLIB>=20000
#		define CHG_HMLIB_HMOBJECT 200
#	else
#		define CHG_HMLIB_HMOBJECT 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_HMOBJECT
#	define INC_USE_HMLIB_HMOBJECT
#
#	if USE_HMLIB_HMOBJECT>200
#		error hmLib : # error : [hmObject.hpp] �p�~�o�[�W�����ł��Bv2_00����(v3_00_00�ȍ~)�́A�g�p�ł��܂���B��p�ɁAbody.hpp�����݂��܂��B
#	elif USE_HMLIB_HMOBJECT==200
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [hmObject.hpp] v2_00")
#		endif
#		include "hmLib_v2/hmObject/hmObject_v2_00.hpp"
#	else
#		error hmLib : # error : [hmObject.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B
#	endif
#
#	if 3<=OUT_USE_HMLIB
#		pragma message("hmLib : # info  : [hmObject.hpp] v2_00����(v3_00_00�ȍ~)�́A�p�~����܂��B��p�ɁAhmBody.hpp�����݂��܂��B
#	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_HMOBJECT
#	define INC_CHG_HMLIB_HMOBJECT
#
#	/*���g�Ƃ̌݊���*/
#	if 200<=USE_HMLIB_HMOBJECT
#		if 1<=OUT_CHG_HMLIB && 200<CHG_HMLIB_HMOBJECT
#			pragma message("chg_hmLib : # error : [hmObject.hpp] �p�~�o�[�W�����ł��Bv2_00����(v3_00_00�ȍ~)�́A�g�p�ł��܂���B��p�ɁAbody.hpp�����݂��܂��B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_HMOBJECT<200
#			pragma message("chg_hmLib : # error : [hmObject.hpp] ��Ή��o�[�W�����ł��Bv2_00(v2_00_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#	/* hmRect�Ƃ̌݊����ɂ���*/
#	if 200<=CHG_HMLIB_HMOBJECT
#		ifndef CHG_HMLIB_HMRECT
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [hmObject.hpp] hmRect.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��hmRect.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/hmRect.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/hmRect.hpp"
#			endif
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_HMOBJECT<=200 && 102<=CHG_HMLIB_HMRECT
#			pragma message("chg_hmLib : # error : [hmObject.hpp] hmRect.hpp v1_02�ȍ~�Ƃ́A�݊���������܂���B")
#		endif
#
#	endif
#
#	endif
#endif
