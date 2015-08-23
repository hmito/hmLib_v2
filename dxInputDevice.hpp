/*
dxInputDevice_v1_00.hpp
*/
#ifndef VER_HMLIB_DXINPUTDEVICE
#	define VER_HMLIB_DXINPUTDEVICE 100
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_DXINPUTDEVICE
#	if USE_HMLIB>=30000
#		define USE_HMLIB_DXINPUTDEVICE 100
#	else
#		define USE_HMLIB_DXINPUTDEVICE 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_DXINPUTDEVICE
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_DXINPUTDEVICE 100
#	else
#		define CHG_HMLIB_DXINPUTDEVICE 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_DXINPUTDEVICE
#	define INC_USE_HMLIB_DXINPUTDEVICE
#
#	if USE_HMLIB_DXINPUTDEVICE>100
#		error hmLib : # error : [dxInputDevice.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B
#	elif USE_HMLIB_DXINPUTDEVICE==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [dxInputDevice.hpp] v1_00")
#		endif
#		include "hmLib_v2/dxInputDevice/dxInputDevice_v1_00.h"
#	else
#		error hmLib : # error : [dxInputDevice.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B
#	endif
#
#	if 3<=OUT_USE_HMLIB && 100<=USE_HMLIB_DXINPUT
#		pragma message("hmLib : # info  : [dxInputDevice.hpp] DxLib�ˑ��t�@�C���ł��B")
#	endif
#//	if 1<=OUT_USE_HMLIB && 100<=USE_HMLIB_DXINPUTDEVICE && USE_HMLIB_DXINPUTDEVICE<101
#//		pragma message("hmLib : # error : [dxInputDevice.hpp] ...�Bv1_01(v3_01_00)�ȏ�ւ̑Ή��𐄏����܂��B")
#//	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_DXINPUTDEVICE
#	define INC_CHG_HMLIB_DXINPUTDEVICE
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMLIB_DXINPUTDEVICE
#		if 1<=OUT_CHG_HMLIB && 100<CHG_HMLIB_DXINPUTDEVICE
#			pragma message("chg_hmLib : # error : [dxInputDevice.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B")
#		endif
#//		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXINPUTDEVICE<200 && 200<=USE_HMLIB_DXINPUTDEVICE
#//			pragma message("chg_hmLib : # error : [dxInputDevice.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv1_00(v3_00_00)���O�́A...")
#//		elif 1<=OUT_CHG_HMLIB && USE_HMLIB_DXINPUTDEVICE<200 && 200<=CHG_HMLIB_DXINPUTDEVICE
#//			pragma message("chg_hmLib : # error : [dxInputDevice.hpp] ����݊����͕ۏ؂���Ă��܂���Bv1_00(v3_00_00)�ȍ~�́A...")
#//		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXINPUTDEVICE<100
#			pragma message("chg_hmLib : # error : [dxInputDevice.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#	/* hmTask�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_DXINPUTDEVICE
#		ifndef CHG_HMLIB_HMTASK
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [dxInputDevice.hpp] hmTask.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��hmTask.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/hmTask.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/hmTask.hpp"
#			endif
#		endif
#//		if 1<=OUT_CHG_HMLIB && 100<=CHG_HMLIB_DXINPUTDEVICE && CHG_HMLIB_HMTASK<100
#//			pragma message("chg_hmLib : # error : [dxInputDevice.hpp] hmTask.hpp v1_00(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#//		elif 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXINPUTDEVICE<100 && 100<=CHG_HMLIB_HMTASK
#//			pragma message("chg_hmLib : # error : [dxInputDevice.hpp] hmTask.hpp v1_00(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#//		endif
#//		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_HMTASK<100
#//			pragma message("chg_hmLib : # error : [dxInputDevice.hpp] �g�p�\��hmTask.hpp�����݂��܂���B")
#//		endif
#	endif
#	/* hmPos�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_DXINPUTDEVICE
#		ifndef CHG_HMLIB_HMPOS
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [dxInputDevice.hpp] hmPos.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��hmPos.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/hmPos.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/hmPos.hpp"
#			endif
#		endif
#//		if 1<=OUT_CHG_HMLIB && 100<=CHG_HMLIB_DXINPUTDEVICE && CHG_HMLIB_HMPOS<100
#//			pragma message("chg_hmLib : # error : [dxInputDevice.hpp] hmPos.hpp v1_00(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#//		elif 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXINPUTDEVICE<100 && 100<=CHG_HMLIB_HMPOS
#//			pragma message("chg_hmLib : # error : [dxInputDevice.hpp] hmPos.hpp v1_00(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#//		endif
#//		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_HMPOS<100
#//			pragma message("chg_hmLib : # error : [dxInputDevice.hpp] �g�p�\��hmPos.hpp�����݂��܂���B")
#//		endif
#	endif
#
#	endif
#endif
