/*
csvflow_v1_01
	ocsvflow,icsvflow�̃R���X�g���N�^�̋L�q�o�O���C��
csvflow_v1_00
*/
#ifndef VER_HMLIB_CSVFLOW
#	define VER_HMLIB_CSVFLOW 999
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_CSVFLOW
#	if USE_HMLIB>=30000
#		define USE_HMLIB_CSVFLOW 999
#	elif USE_HMLIB>=20802
#		define USE_HMLIB_CSVFLOW 101
#	elif USE_HMLIB>=20000
#		define USE_HMLIB_CSVFLOW 100
#	else
#		define USE_HMLIB_CSVFLOW 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_CSVFLOW
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_CSVFLOW 999
#	elif CHG_HMLIB>=20802
#		define CHG_HMLIB_CSVFLOW 101
#	elif CHG_HMLIB>=20000
#		define CHG_HMLIB_CSVFLOW 100
#	else
#		define CHG_HMLIB_CSVFLOW 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_CSVFLOW
#	define INC_USE_HMLIB_CSVFLOW
#
#	if USE_HMLIB_CSVFLOW>101
#		error hmLib : # error : [csvflow.hpp] ��Ή��o�[�W�����ł��Bv1_01����(v3_00_00�ȍ~)�́A�g�p�ł��܂���B
#	elif USE_HMLIB_CSVFLOW==101
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [csvflow.hpp] v1_01")
#		endif
#		include "hmLib_v2/csvflow/csvflow_v1_01.hpp"
#	elif USE_HMLIB_CSVFLOW==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [csvflow.hpp] v1_00")
#		endif
#		include "hmLib_v2/csvflow/csvflow_v1_00.hpp"
#	else
#		error hmLib : # error : [csvflow.hpp] ��Ή��o�[�W�����ł��Bv1_00(v2_00_00)���O�́A�g�p�ł��܂���B
#	endif
#
#	if 1<=OUT_USE_HMLIB && 100<=USE_HMLIB_CSVFLOW && USE_HMLIB_CSVFLOW<101
#		pragma message("hmLib : # error : [csvflow.hpp] ocsvflow,icsvflow�̃R���X�g���N�^�ɒv���I�ȃo�O�����݂��܂��Bv1_01(v2_08_02)�ȏ�ւ̑Ή��𐄏����܂��B")
#	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_CSVFLOW
#	define INC_CHG_HMLIB_CSVFLOW
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMLIB_CSVFLOW
#		if 1<=OUT_CHG_HMLIB && 101<CHG_HMLIB_CSVFLOW
#			pragma message("chg_hmLib : # error : [csvflow.hpp] ��Ή��o�[�W�����ł��Bv1_01����(v3_00_00�ȍ~)�́A�g�p�ł��܂���B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_CSVFLOW<101 && 101<=USE_HMLIB_CSVFLOW
#			pragma message("chg_hmLib : # error : [csvflow.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv1_01(v2_08_05)���O�́Aocsvflow,icsvflow�̃R���X�g���N�^�ɒv���I�ȃo�O�����݂��܂��B")
#//		elif 1<=OUT_CHG_HMLIB && USE_HMLIB_CSVFLOW<100 && 100<=CHG_HMLIB_CSVFLOW
#//			pragma message("chg_hmLib : # error : [csvflow.hpp] ����݊����͕ۏ؂���Ă��܂���Bv1_00(v3_00_00)�ȍ~�́A...")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_CSVFLOW<100
#			pragma message("chg_hmLib : # error : [csvflow.hpp] ��Ή��o�[�W�����ł��Bv1_00(v2_00_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#	/* hmPos�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_CSVFLOW
#		ifndef INC_CHG_HMLIB_HMPOS
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [csvflow.hpp] hmPos.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��hmPos.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/hmPos.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/hmPos.hpp"
#			endif
#		endif
#//		if 1<=OUT_CHG_HMLIB && 100<=CHG_HMLIB_CSVFLOW && CHG_HMLIB_HMPOS<302
#//			pragma message("chg_hmLib : # error : [csvflow.hpp] hmPos.hpp v1_00(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_CSVFLOW<=101 && 302<=CHG_HMLIB_HMPOS
#			pragma message("chg_hmLib : # error : [csvflow.hpp] hmPos.hpp v3_02(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#		endif
#		if 1<=OUT_CHG_HMLIB && ( CHG_HMLIB_HMPOS<100 || CHG_HMLIB_HMPOS==999)
#			pragma message("chg_hmLib : # error : [csvflow.hpp] �g�p�\��hmPos.hpp�����݂��܂���B")
#		endif
#	endif
#
#	endif
#endif
