/*
hmRSGate.hpp �p�~
	��p��comgate.hpps
hmRSGate_v1_02.hpp
	uchar������`�����������C��
hmRSGate_v1_01.hpp
	namespace hmstd�ɉ���
*/
#ifndef VER_HMLIB_HMRSGATE
#	define VER_HMLIB_HMRSGATE 999
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_HMRSGATE
#	if USE_HMLIB>=30000
#		define USE_HMLIB_HMRSGATE 999
#	elif USE_HMLIB>=20701
#		define USE_HMLIB_HMRSGATE 102
#	elif USE_HMLIB>=20001
#		define USE_HMLIB_HMRSGATE 101
#	else
#		define USE_HMLIB_HMRSGATE 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_HMRSGATE
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_HMRSGATE 999
#	elif CHG_HMLIB>=20701
#		define CHG_HMLIB_HMRSGATE 102
#	elif CHG_HMLIB>=20001
#		define CHG_HMLIB_HMRSGATE 101
#	else
#		define CHG_HMLIB_HMRSGATE 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_HMRSGATE
#	define INC_USE_HMLIB_HMRSGATE
#
#	if USE_HMLIB_HMRSGATE>102
#		error hmLib : # error : [hmRSGate.hpp] �p�~�o�[�W�����ł��Bv3_00_00�ȍ~�́A�g�p�ł��܂���B��p��comgate.hpp������܂��B
#	elif USE_HMLIB_HMRSGATE==102
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [hmRSGate.hpp] v1_02")
#		endif
#		include "hmLib_v2/hmRSGate/hmRSGate_v1_02.h"
#	elif USE_HMLIB_HMRSGATE==101
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [hmRSGate.hpp] v1_01")
#		endif
#		include "hmLib_v2/hmRSGate/hmRSGate_v1_01.hpp"
#	else
#		error hmLib : # error : [hmRSGate.hpp] ��Ή��o�[�W�����ł��Bv1_01(v2_00_01)���O�́A�g�p�ł��܂���B
#	endif
#
#
#	if 2<=OUT_USE_HMLIB && 100<=USE_HMLIB_HMRSGATE && USE_HMLIB_HMRSGATE<102
#		pragma message("hmLib : #warning: [hmRSGate.hpp] v3_00_00�ȍ~�́A�p�~����܂��B��p��comgate.hpp������܂��B")
#	endif
#
#	if 1<=OUT_USE_HMLIB && 100<=USE_HMLIB_HMRSGATE && USE_HMLIB_HMRSGATE<101
#		pragma message("hmLib : # error : [hmRSGate.hpp] �v���I�ȃo�O�����݂��܂��Bv1_02(v2_07_01)�ȏ�ւ̑Ή��𐄏����܂��B")
#	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_HMRSGATE
#	define INC_CHG_HMLIB_HMRSGATE
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMLIB_HMRSGATE
#		if 1<=OUT_CHG_HMLIB && 103<CHG_HMLIB_HMRSGATE
#			pragma message("chg_hmLib : # error : [hmRSGate.hpp] �p�~�o�[�W�����ł��Bv3_00_00�ȍ~�́A�g�p�ł��܂���B��p��comgate.hpp������܂��B")
#		endif
#		if 1<=OUT_CHG_HMLIB && USE_HMLIB_HMRSGATE<103 && 103<=CHG_HMLIB_HMRSGATE
#			pragma message("chg_hmLib : # error : [hmRSGate.hpp] ����݊����͕ۏ؂���Ă��܂���Bv1_03(v3_00_00)�ȍ~�́A���O��ԁA�N���X���ɕύX������܂��B")
#		elif 1<=OUT_CHG_HMLIB && USE_HMLIB_HMRSGATE<103 && 103<=CHG_HMLIB_HMRSGATE
#			pragma message("chg_hmLib : # error : [hmRSGate.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv1_03(v3_00_00)���O�́A���O��ԁA�N���X���ɕύX������܂��B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_HMRSGATE<102 && 102<=USE_HMLIB_HMRSGATE
#			pragma message("chg_hmLib : # error : [hmRSGate.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv1_02(v2_07_01)���O�́A�v���I�ȃo�O�����݂��܂��B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_HMRSGATE<101
#			pragma message("chg_hmLib : # error : [hmRSGate.hpp] ��Ή��o�[�W�����ł��Bv1_01(v2_00_01)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#	/* gatestream�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_HMRSGATE && CHG_HMLIB_HMRSGATE<=102
#		ifndef CHG_HMLIB_GATESTREAM
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [hmRSGate.hpp] gatestream.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��gatestream.hpp��include���܂��B")
#			endif
#			ifdef CAN_CHG_HMLIB
#				undef CAN_CHG_HMLIB
#				include "hmLib_v2/gatestream.hpp"
#				define CAN_CHG_HMLIB
#			else
#				include "hmLib_v2/gatestream.hpp"
#			endif
#		endif
#	endif
#
#	endif
#endif
