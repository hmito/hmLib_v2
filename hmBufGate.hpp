/*
hmBufGate_v1_03
	����Gate�̃o�b�t�@�Ƃ��ċ@�\����Gate
		�L���o�b�t�@�N���X BufGate
		�����o�b�t�@�N���X InfBufGate
hmBufGate_v1_02
	ibufcltrgate������N���X�ɒǉ�
hmBufGate_v1_01
	getc()���s���Ƀf�[�^���Ȃ���΁A�f�[�^������܂őҋ@����悤�ɕύX
	buf��size�擾�n�֐��̒ǉ�
*/
#ifndef VER_HMLIB_HMBUFGATE
#	define VER_HMLIB_HMBUFGATE 999
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_HMBUFGATE
#	if USE_HMLIB>=30000
#		define USE_HMLIB_HMBUFGATE 999
#	elif USE_HMLIB>=20806
#		define USE_HMLIB_HMBUFGATE 102
#	elif USE_HMLIB>=20003
#		define USE_HMLIB_HMBUFGATE 101
#	elif USE_HMLIB>=20001
#		define USE_HMLIB_HMBUFGATE 100
#	else
#		define USE_HMLIB_HMBUFGATE 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_HMBUFGATE
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_HMBUFGATE 999
#	elif CHG_HMLIB>=20806
#		define CHG_HMLIB_HMBUFGATE 102
#	elif CHG_HMLIB>=20003
#		define CHG_HMLIB_HMBUFGATE 101
#	elif CHG_HMLIB>=20001
#		define CHG_HMLIB_HMBUFGATE 100
#	else
#		define CHG_HMLIB_HMBUFGATE 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_HMBUFGATE
#	define INC_USE_HMLIB_HMBUFGATE
#
#	if USE_HMLIB_HMBUFGATE>102
#		error hmLib # error : [hmBufGate.hpp] �p�~�o�[�W�����ł��Bv1_02����(v3_00_00�ȍ~)�́A�g�p�ł��܂���B
#	elif USE_HMLIB_HMBUFGATE==102
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [hmBufGate.hpp] v1_02")
#		endif
#		include "hmLib_v2/hmBufGate/hmBufGate_v1_02.hpp"
#	elif USE_HMLIB_HMBUFGATE==101
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [hmBufGate.hpp] v1_01")
#		endif
#		include "hmLib_v2/hmBufGate/hmBufGate_v1_01.hpp"
#	elif USE_HMLIB_HMBUFGATE==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [hmBufGate.hpp] v1_00")
#		endif
#		include "hmLib_v2/hmBufGate/hmBufGate_v1_00.hpp"
#	else
#		error hmLib # error : [hmBufGate.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B
#	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_HMBUFGATE
#	define INC_CHG_HMLIB_HMBUFGATE
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMLIB_HMBUFGATE
#		if 1<=OUT_CHG_HMLIB && 102<CHG_HMLIB_HMBUFGATE
#			pragma message("chg_hmLib # error : [hmBufGate.hpp] �p�~�o�[�W�����ł��Bv1_02����(v3_00_00�ȍ~)�́A�g�p�ł��܂���B")
#		endif
#		if 2<=OUT_CHG_HMLIB && CHG_HMLIB_HMBUFGATE<102 && 102<=USE_HMLIB_HMBUFGATE
#			pragma message("chg_hmLib #warning: [hmBufGate.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv1_02���O�́Aibufctlrgate���g�p�ł��܂���B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_HMBUFGATE<101 && 101<=USE_HMLIB_HMBUFGATE
#			pragma message("chg_hmLib # error : [hmBufGate.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv1_01���O�́A�N���X�����ύX����Ă��܂��B")
#		elif 1<=OUT_CHG_HMLIB && USE_HMLIB_HMBUFGATE<101 && 101<=CHG_HMLIB_HMBUFGATE
#			pragma message("chg_hmLib # error : [hmBufGate.hpp] ����݊����͕ۏ؂���Ă��܂���Bv1_01�ȍ~�́A�N���X�����ύX����Ă��܂��B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_HMBUFGATE<100
#			pragma message("chg_hmLib # error : [hmBufGate.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#	/* gatestream�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_HMBUFGATE && CHG_HMLIB_HMBUFGATE<=102
#		ifndef CHG_HMLIB_GATESTREAM
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib # info  : [hmBufGate.hpp] gatestream.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��gatestream.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/gatestream.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/gatestream.hpp"
#			endif
#		endif
#	endif
#
#	endif
#endif
