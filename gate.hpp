/*
===gate===
���o�͊Ǘ��p�N���X
	�v���O�����O���Ƃ̒ʐM�̏o��������Ǘ�����
	gatestream���g�����ƂŁAstream�N���X���\
////////////////
gate_v1_00.hpp
	gatestream�̌�p�t�@�C��
	itf_gate��basic_nonbuf_streambuf����
		gate��������΁A�ȒP��stream���\
*/
#ifndef VER_HMLIB_GATE
#	define VER_HMLIB_GATE 100
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_GATE
#	if USE_HMLIB>=30000
#		define USE_HMLIB_GATE 100
#	else
#		define USE_HMLIB_GATE 0
#	endif
#endif
#if defined CHG_HMLIB &&  !defined CHG_HMLIB_GATE
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_GATE 100
#	else
#		define CHG_HMLIB_GATE 0
#	endif
#endif
#
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_GATE
#	define INC_USE_HMLIB_GATE
#
#	if USE_HMLIB_GATE>100
#		error hmLib : # error : [gate.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B
#	elif USE_HMLIB_GATE==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [gate.hpp] v1_00")
#		endif
#		include "hmLib_v2/gate/gate_v1_00.hpp"
#	else
#		error hmLib : # error : [gate.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B
#	endif
#
#	endif
#endif
#
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_GATE
#	define INC_CHG_HMLIB_GATE
#
#	/*���g�Ƃ̌݊����ɂ���*/
#	if 100<=USE_HMLIB_GATE
#		if 1<=OUT_CHG_HMLIB && 100<CHG_HMLIB_GATE
#			pragma message("chg_hmLib : # error : [gate.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_GATE<100
#			pragma message("chg_hmLib : # error : [gate.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#
#	/* streambuf_pattern�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_GATE
#		ifndef CHG_HMLIB_STREAMBUFPATTERN
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [gate.hpp] streambuf_pattern.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��streambuf_pattern.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/streambuf_pattern.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/streambuf_pattern.hpp"
#			endif
#		endif
#	endif
#
#	endif
#endif
