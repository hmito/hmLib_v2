/*
hmTime�p�~
	boost::date_time�ő�։\�Ɣ��f��������
hmTime_v1_01.hpp
	hmTime::set��ǉ�
	hmDate::set��ǉ�
hmTime_v1_00.hpp
	winTime���p������`�ŐV�K�ǉ�
*/
#ifndef VER_HMLIB_HMTIME
#	define VER_HMLIB_HMTIME 999
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_HMTIME
#	if USE_HMLIB>=30000
#		define USE_HMLIB_HMTIME 999
#	elif USE_HMLIB>=20801
#		define USE_HMLIB_HMTIME 101
#	elif USE_HMLIB>=20702
#		define USE_HMLIB_HMTIME 100
#	else
#		define USE_HMLIB_HMTIME 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_HMTIME
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_HMTIME 999
#	elif CHG_HMLIB>=20801
#		define CHG_HMLIB_HMTIME 101
#	elif CHG_HMLIB>=20702
#		define CHG_HMLIB_HMTIME 100
#	else
#		define CHG_HMLIB_HMTIME 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_HMTIME
#	define INC_USE_HMLIB_HMTIME
#
#	if USE_HMLIB_HMTIME>101
#		error hmLib : # error : [hmTime.hpp] �p�~�o�[�W�����ł��Bv1_01����(v3_00_00�ȍ~)�́A�g�p�ł��܂���Bboost::date_time�̗��p�𐄏����Ă��܂��B
#	elif USE_HMLIB_HMTIME==101
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [hmTime.hpp] v1_01")
#		endif
#		include "hmLib_v2/hmTime/hmTime_v1_01.hpp"
#	elif USE_HMLIB_HMTIME==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [hmTime.hpp] v1_00")
#		endif
#		include "hmLib_v2/hmTime/hmTime_v1_00.hpp"
#	else
#		error hmLib : # error : [hmTime.hpp] ��Ή��o�[�W�����ł��Bv1_00(v2_07_02)���O�́A�g�p�ł��܂���B
#	endif
#
#	if 2<=OUT_USE_HMLIB && 100<=USE_HMLIB_HMTIME
#		pragma message("hmLib : #warning: [hmTime.hpp] windows.h�ˑ����C�u�����ł��B")
#	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_HMTIME
#	define INC_CHG_HMLIB_HMTIME
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMLIB_HMTIME
#		if 1<=OUT_CHG_HMLIB && 101<CHG_HMLIB_HMTIME
#			pragma message("chg_hmLib : # error : [hmTime.hpp] �p�~�o�[�W�����ł��Bv1_01����(v3_00_00�ȍ~)�́A�g�p�ł��܂���Bboost::date_time�̗��p�𐄏����Ă��܂��B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_HMTIME<100
#			pragma message("chg_hmLib : # error : [hmTime.hpp] ��Ή��o�[�W�����ł��Bv1_00(v2_07_02)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#	/* hmBasic�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_HMTIME && CHG_HMLIB_HMTIME<=101
#		ifndef CHG_HMLIB_HMBASIC
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [hmTime.hpp] hmBasic.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��hmBasic.hpp��include���܂��B")
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
