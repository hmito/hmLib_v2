/*
arrayloop �p�~
	��p��circular.hpp��circular�B
arrayloop_v1_00�ǉ�
	STL������list�^�Œ蒷�z��N���X
	���񃁃����m�ۂ��s�킸�A�Œ�z���Ƀf�[�^��u��
	�C�ӂ̈ʒu�̗v�f�̑}��/�폜������
*/
#ifndef VER_HMLIB_ARRAYLOOP
#	define VER_HMLIB_ARRAYLOOP 999
#endif
#ifndef INC_HMLIB
#	include <hmLib.h>
#endif
#ifndef USE_HMLIB_ARRAYLOOP
#	if USE_HMLIB>=30000
#		define USE_HMLIB_ARRAYLOOP 999
#	elif USE_HMLIB>=20900
#		define USE_HMLIB_ARRAYLOOP 100
#	else
#		define USE_HMLIB_ARRAYLOOP 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_ARRAYLOOP
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_ARRAYLOOP 999
#	elif CHG_HMLIB>=20900
#		define CHG_HMLIB_ARRAYLOOP 100
#	else
#		define CHG_HMLIB_ARRAYLOOP 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_HMLIB_ARRAYLOOP
#	define INC_HMLIB_ARRAYLOOP
#
#	if USE_HMLIB_ARRAYLOOP >100
#		error hmLib : [arrayloop.hpp] �p�~�o�[�W�����ł��Bv1_00����(v3_00_00�ȍ~)�́A�g�p�ł��܂���Bcircular.hpp���g�p���Ă��������B
#	elif USE_HMLIB_ARRAYLOOP==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [arrayloop.hpp] v1_00");
#		endif
#		include "hmLib_v2/arrayloop/arrayloop_v1_00.hpp"
#	else
#		error hmLib : [arrayloop.hpp] ���Ή��o�[�W�����ł��Bv1_00(v2_09_00)���O�́A�g�p�ł��܂���B
#	endif
#
#	if 3<=OUT_USE_HMLIB
#		pragma message("hmLib : # info  : [arrayloop.hpp] v1_00����(v3_00_00�ȍ~)�A�p�~����܂��B��p��circular.hpp�����݂��܂��B");
#	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_ARRAYLOOP
#	define INC_CHG_HMLIB_ARRAYLOOP
#
#	if 100<=USE_HMLIB_ARRAYLOOP
#		if 1<=OUT_CHG_HMLIB && 100<CHG_HMLIB_ARRAYLOOP
#			pragma message("chg_hmLib : # error : [arraydeque.hpp] �p�~�o�[�W�����ł��Bv1_00�ȑO(v3_00_00���O)���Acircular.hpp���g�p���Ă��������B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_ARRAYLOOP<100
#			pragma message("chg_hmLib : # error : [arraydeque.hpp] ���Ή��o�[�W�����ł��Bv1_00(v2_09_00)�ȏ�ł����g�p�ł��܂���B")
#		endif
#	endif
#
#	if 100<=CHG_HMLIB_ARRAYLOOP
#		ifndef INC_CHG_HMLIB_ARRAYDEQUE
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [arrayloop.hpp] arraydeque.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��arraydeque.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/arraydeque.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/arraydeque.hpp"
#			endif
#		endif
#	endif
#
#	endif
#endif
