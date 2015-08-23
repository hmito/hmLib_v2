/*
hmPos�p�~
	��p��position.hpp
hmPos_v3_01
	std::pair��p���^�ɕύX
hmPos_v3_00
	std::pair���g�����e���v���[�g�^�ɕύX
hmPos_v2_03
	PintX,PintY,area(���s�l�ӌ`�ʐ�)��ǉ�
	�֐����̕ύX
		InnerPrd=>inprd
		Min/Max=>min/max
hmPos_v2_02
	InnerPrd(����)��ǉ�
hmPos_v2_01
	Pdouble<->Pint�݊���������
hmPos_v2_00
	Pos�N���X�Ɖ���
	Pdouble�N���X����
hmPos_v1_03
	������Z�q�ASet�֐��ɃA�h���X�m�F�@�\��ǉ�
hmPos_v1_02
	�召���艉�Z�q��j��
	�召����֐��𓱓�
hmPos_v1_01
	ortho�𓱓�
*/
#ifndef VER_HMLIB_HMPOS
#	define VER_HMLIB_HMPOS 999
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_HMPOS
#	if USE_HMLIB>=30000
#		define USE_HMLIB_HMPOS 999
#	elif USE_HMLIB>=20000
#		define USE_HMLIB_HMPOS 301
#	else
#		define USE_HMLIB_HMPOS 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_HMPOS
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_HMPOS 999
#	elif CHG_HMLIB>=20000
#		define CHG_HMLIB_HMPOS 301
#	else
#		define CHG_HMLIB_HMPOS 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_HMPOS
#	define INC_USE_HMLIB_HMPOS
#
#	if USE_HMLIB_HMPOS>301
#		error hmLib : # error : [hmPos.hpp] �p�~�o�[�W�����ł��Bv3_01����(v3_00_00�ȍ~)�́A�g�p�ł��܂���B��p��position.hpp�����݂��܂��B
#	elif USE_HMLIB_HMPOS==301
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [hmPos.hpp] v3_01")
#		endif
#		include "hmLib_v2/hmPos/hmPos_v3_01.hpp"
#	else
#		error hmLib : # error : [hmPos.hpp] ��Ή��o�[�W�����ł��Bv3_01(v2_00_00)���O�́A�g�p�ł��܂���B
#	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_HMPOS
#	define INC_CHG_HMLIB_HMPOS
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMLIB_HMPOS
#		if 1<=OUT_CHG_HMLIB && 301<CHG_HMLIB_HMPOS
#			pragma message("chg_hmLib : # error : [hmPos.hpp] �p�~�o�[�W�����ł��Bv3_01����(v3_00_00�ȍ~)�́A�g�p�ł��܂���B��p��position.hpp�����݂��܂��B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_HMPOS<301
#			pragma message("chg_hmLib : # error : [hmPos.hpp] ��Ή��o�[�W�����ł��Bv3_01(v2_00_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#	/* hmBasic�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_HMPOS && CHG_HMLIB_HMPOS<302
#		ifndef CHG_HMLIB_HMBASIC
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [hmPos.hpp] hmBasic.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��hmBasic.hpp��include���܂��B")
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
