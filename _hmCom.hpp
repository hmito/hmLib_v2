/*
hmCom_v1_00.hpp
	�ʐM�����p�̒��ۃN���X
		�e��Gate���g���āA����\
			�����o�b�t�@�thmInfBufComGate
			�L���o�b�t�@�thmBufComGate
		�X���b�h�Ή�
	boost/thread�ˑ��t�@�C��		
*/
#ifndef VER_HMCOM
#	define VER_HMCOM 100
#endif
#ifndef INC_HMLIB
#	include "hmLib.h"
#endif
#
#ifndef USE_HMCOM
#	if USE_HMLIB>=30000
#		define USE_HMCOM 100
#	else
#		define USE_HMCOM 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMCOM
#	if CHG_HMLIB>=30000
#		define CHG_HMCOM 100
#	else
#		define CHG_HMCOM 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMCOM
#	define INC_USE_HMCOM
#
#	if USE_HMCOM>100
#		error hmLib # error : [hmCom.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B
#	elif USE_HMCOM==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [hmCom.hpp] v1_00")
#		endif
#		include "hmCom/hmCom_v1_00.hpp"
#	else
#		error hmLib # error : [hmCom.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B
#	endif
#
#	if 3<=OUT_USE_HMLIB && 100<=USE_HMCOM
#		pragma message("hmLib # info  : [hmCom.hpp] boost�ˑ��t�@�C���ł��Bboost/thread���g�p���Ă��܂��B")
#	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMCOM
#	define INC_CHG_HMCOM
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMCOM
#		if 1<=OUT_CHG_HMLIB && 100<CHG_HMCOM
#			pragma message("chg_hmLib # error : [hmCom.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMCOM<100
#			pragma message("chg_hmLib # error : [hmCom.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#	/* hmGate�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMCOM
#		ifndef CHG_HMGATE
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib # info  : [hmCom.hpp] hmGate.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��hmGate.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmGate.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmGate.hpp"
#			endif
#		endif
#	endif
#	/* circular�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMCOM
#		ifndef CHG_CIRCULAR
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib # info  : [hmCom.hpp] circular.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��circular.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "circular.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "circular.hpp"
#			endif
#		endif
#	endif
#
#	endif
#endif
