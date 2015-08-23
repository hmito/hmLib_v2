/*
iologate hmLibv3���Ή�
iologgate_v1_01.hpp
	hmTime_v1_00.hpp�ɑΉ�
*/
#ifndef VER_HMLIB_IOLOGGATE
#	define VER_HMLIB_IOLOGGATE 999
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#ifndef USE_HMLIB_IOLOGGATE
#	if USE_HMLIB>=30000
#		define USE_HMLIB_IOLOGGATE 999
#	elif USE_HMLIB>=20702
#		define USE_HMLIB_IOLOGGATE 101
#	elif USE_HMLIB>=20701
#		define USE_HMLIB_IOLOGGATE 100
#	else
#		define USE_HMLIB_IOLOGGATE 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_IOLOGGATE
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_IOLOGGATE 999
#	elif CHG_HMLIB>=20702
#		define CHG_HMLIB_IOLOGGATE 101
#	else
#		define CHG_HMLIB_IOLOGGATE 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_IOLOGGATE
#	define INC_USE_HMLIB_IOLOGGATE
#
#	if USE_HMLIB_IOLOGGATE>101
#		error hmLib : # error : [iologgate.hpp] ��Ή��o�[�W�����ł��Bv1_01����(v3_00_00�ȍ~)�́A�g�p�ł��܂���B
#	elif USE_HMLIB_IOLOGGATE==101
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [iologgate.hpp] v1_01")
#		endif
#		include "hmLib_v2/iologgate/iologgate_v1_01.hpp"
#	else
#		error hmLib : # error : [iologgate.hpp] ��Ή��o�[�W�����ł��Bv1_01(v2_07_02)���O�́A�g�p�ł��܂���B
#	endif
#
#//	if 1<=OUT_USE_HMLIB && 100<=USE_HMLIB_IOLOGGATE && USE_HMLIB_IOLOGGATE<101
#//		pragma message("hmLib : # error : [iologgate.hpp] ...�Bv1_01(v3_01_00)�ȏ�ւ̑Ή��𐄏����܂��B")
#//	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_IOLOGGATE
#	define INC_CHG_HMLIB_IOLOGGATE
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMLIB_IOLOGGATE
#		if 1<=OUT_CHG_HMLIB && 101<CHG_HMLIB_IOLOGGATE
#			pragma message("chg_hmLib : # error : [iologgate.hpp] ��Ή��o�[�W�����ł��Bv1_01����(v3_00_00�ȍ~)�́A�g�p�ł��܂���B")
#		endif
#//		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_IOLOGGATE<200 && 200<=USE_HMLIB_IOLOGGATE
#//			pragma message("chg_hmLib : # error : [iologgate.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv1_01(v2_07_02)���O�́AiologHMTime���g�p�ł��Ȃ��Ȃ�܂��B")
#//		elif 1<=OUT_CHG_HMLIB && USE_HMLIB_IOLOGGATE<200 && 200<=CHG_HMLIB_IOLOGGATE
#//			pragma message("chg_hmLib : # error : [iologgate.hpp] ����݊����͕ۏ؂���Ă��܂���Bv1_01(v2_07_02)�ȍ~�́AiologWinTime���g�p�ł��Ȃ��Ȃ�܂��B")
#//		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_IOLOGGATE<101
#			pragma message("chg_hmLib : # error : [iologgate.hpp] ��Ή��o�[�W�����ł��Bv1_01(v2_07_02)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#	/* gatestream�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_IOLOGGATE
#		ifndef CHG_HMLIB_GATESTREAM
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [iologgate.hpp] gatestream.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��gatestream.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/gatestream.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/gatestream.hpp"
#			endif
#		endif
#//		if 1<=OUT_CHG_HMLIB && 100<=CHG_HMLIB_IOLOGGATE && CHG_HMLIB_GATESTREAM<100
#//			pragma message("chg_hmLib : # error : [iologgate.hpp] gatestream.hpp v1_00(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#//		elif 1<=OUT_CHG_HMLIB && CHG_HMLIB_IOLOGGATE<100 && 100<=CHG_HMLIB_GATESTREAM
#//			pragma message("chg_hmLib : # error : [iologgate.hpp] gatestream.hpp v1_00(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#//		endif
#//		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_GATESTREAM<100
#//			pragma message("chg_hmLib : # error : [iologgate.hpp] �g�p�\��gatestream.hpp�����݂��܂���B")
#//		endif
#	endif
#	/* hmTime�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_IOLOGGATE
#		ifndef CHG_HMLIB_HMTIME
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [iologgate.hpp] hmTime.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��hmTime.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/hmTime.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/hmTime.hpp"
#			endif
#		endif
#//		if 1<=OUT_CHG_HMLIB && 100<=CHG_HMLIB_IOLOGGATE && CHG_HMLIB_HMTIME<100
#//			pragma message("chg_hmLib : # error : [iologgate.hpp] hmTime.hpp v1_00(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#//		elif 1<=OUT_CHG_HMLIB && CHG_HMLIB_IOLOGGATE<100 && 100<=CHG_HMLIB_HMTIME
#//			pragma message("chg_hmLib : # error : [iologgate.hpp] hmTime.hpp v1_00(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#//		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_IOLOGGATE<102 && 102<=CHG_HMLIB_HMTIME
#			pragma message("chg_hmLib : # error : [iologgate.hpp] hmTime.hpp v1_02(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_HMTIME<100
#			pragma message("chg_hmLib : # error : [iologgate.hpp] �g�p�\��hmTime.hpp�����݂��܂���B")
#		endif
#	endif
#
#	endif
#endif
