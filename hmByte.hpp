/*
hmByte_v1_01
	Bytes::get�̃L���X�g���Z�q��const�ϐ����g���Ȃ������o�O���C��
	ostream�ւ̏o�͂��A0x�\������P��bit�}���ɕύX
	0x�\�����o�͂���str()�֐��ǉ�
hmByte_v1_00
	�r�b�g���Z��p�N���X�Abytetype,Byte,Bytes�ǉ�
*/
#ifndef VER_HMLIB_HMBYTE
#	define VER_HMLIB_HMBYTE 999
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_HMBYTE
#	if USE_HMLIB>=30000
#		define USE_HMLIB_HMBYTE 999
#	elif USE_HMLIB>=20803
#		define USE_HMLIB_HMBYTE 101
#	elif USE_HMLIB>=20000
#		define USE_HMLIB_HMBYTE 100
#	else
#		define USE_HMLIB_HMBYTE 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_HMBYTE
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_HMBYTE 999
#	elif CHG_HMLIB>=20803
#		define CHG_HMLIB_HMBYTE 101
#	elif CHG_HMLIB>=20000
#		define CHG_HMLIB_HMBYTE 100
#	else
#		define CHG_HMLIB_HMBYTE 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_HMBYTE
#	define INC_USE_HMLIB_HMBYTE
#
#	if USE_HMLIB_HMBYTE>101
#		error hmLib : # error : [hmByte.hpp] �p�~�o�[�W�����ł��Bv1_01����(v3_00_00�ȍ~)�́A�g�p�ł��܂���B
#	elif USE_HMLIB_HMBYTE==101
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [hmByte.hpp] v1_01")
#		endif
#		include "hmLib_v2/hmByte/hmByte_v1_01.hpp"
#	elif USE_HMLIB_HMBYTE==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [hmByte.hpp] v1_00")
#		endif
#		include "hmLib_v2/hmByte/hmByte_v1_00.hpp"
#	else
#		error hmLib : # error : [hmByte.hpp] ��Ή��o�[�W�����ł��Bv1_00(v2_00_00)���O�́A�g�p�ł��܂���B
#	endif
#
#	if 2<=OUT_USE_HMLIB && 100<=USE_HMLIB_HMBYTE && USE_HMLIB_HMBYTE<101
#		pragma message("hmLib : #warning: [hmByte.hpp] Bytes::get�֐��Ƀo�O�����݂��܂��Bconst�ϐ����g���܂���Bv1_01(v3_01_00)�ȏ�ւ̑Ή��𐄏����܂��B")
#	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_HMBYTE
#	define INC_CHG_HMLIB_HMBYTE
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMLIB_HMBYTE
#		if 1<=OUT_CHG_HMLIB && 101<CHG_HMLIB_HMBYTE
#			pragma message("chg_hmLib : # error : [hmByte.hpp] �p�~�o�[�W�����ł��Bv1_01����(v3_00_00�ȍ~)�́A�g�p�ł��܂���B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_HMBYTE<101 && 101<=USE_HMLIB_HMBYTE
#			pragma message("chg_hmLib : # error : [hmByte.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv1_01(v2_08_03)���O�́ABytes::get�֐��Ƀo�O�����݂��܂��B")
#		elif 2<=OUT_CHG_HMLIB && CHG_HMLIB_HMBYTE<101 && 101<=USE_HMLIB_HMBYTE
#			pragma message("chg_hmLib : #warning: [hmByte.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv1_01(v2_08_03)���O�́Aostream�o�͓��e�ɕύX������܂��B")
#		elif 2<=OUT_CHG_HMLIB && USE_HMLIB_HMBYTE<101 && 101<=CHG_HMLIB_HMBYTE
#			pragma message("chg_hmLib : #warning: [hmByte.hpp] ����݊����͕ۏ؂���Ă��܂���Bv1_01(v2_08_03)�ȍ~�́Aostream�o�͓��e�ɕύX������܂��B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_HMBYTE<100
#			pragma message("chg_hmLib : # error : [hmByte.hpp] ��Ή��o�[�W�����ł��Bv1_00(v2_00_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#	/* hmBasic�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_HMBYTE
#		ifndef CHG_HMLIB_HMBASIC
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [hmByte.hpp] hmBasic.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��hmBasic.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/hmBasic.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/hmBasic.hpp"
#			endif
#		endif
#//		if 1<=OUT_CHG_HMLIB && 100<=CHG_HMLIB_HMBYTE && CHG_HMLIB_HMBASIC<100
#//			pragma message("chg_hmLib : # error : [hmByte.hpp] hmBasic.hpp v1_00(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#//		elif 1<=OUT_CHG_HMLIB && CHG_HMLIB_HMBYTE<100 && 100<=CHG_HMLIB_HMBASIC
#//			pragma message("chg_hmLib : # error : [hmByte.hpp] hmBasic.hpp v1_00(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#//		endif
#		if 1<=OUT_CHG_HMLIB && (CHG_HMLIB_HMBASIC<100 || CHG_HMLIB_HMBASIC==999)
#			pragma message("chg_hmLib : # error : [hmByte.hpp] �g�p�\��hmBasic.hpp�����݂��܂���B")
#		endif
#	endif
#
#	endif
#endif
