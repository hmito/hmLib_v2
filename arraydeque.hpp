/*
arraydeque�p�~
	deque�̖�������������Aarrayloop�̋@�\������circular.hpp���o�������߁A�p�~�B
	circular.hpp��bicircular�����l�̋@�\�����B
arraydeque_v1_03
	iterator��hmstd::basic_iterator���g�p
arraydeque_v1_02
	iterator��hm::basic_random_access_iterator���g�p
	iterator���o�b�t�@��̃f�[�^�̐擪�̃A�h���X��ێ�����悤�ɕύX
arraydeque_v1_01
	iterator��STL�^�ɏ���
arraydeque_v1_00�ǉ�
	STL������deque�^�Œ蒷�z��N���X
	�������̎��Ȋm�ۂ��s��Ȃ����߁A����
*/
#ifndef VER_HMLIB_ARRAYDEQUE
#	define VER_HMLIB_ARRAYDEQUE 999
#endif
#ifndef INC_HMLIB
#	include <hmLib.h>
#endif
#ifndef USE_HMLIB_ARRAYDEQUE
#	ifdef USE_HMLIB>=30000
#		define USE_HMLIB_ARRAYDEQUE 999
#	elif USE_HMLIB>=20905
#		define USE_HMLIB_ARRAYDEQUE 103
#	elif USE_HMLIB>=20902
#		define USE_HMLIB_ARRAYDEQUE 102
#	elif USE_HMLIB>=20901
#		define USE_HMLIB_ARRAYDEQUE 101
#	elif USE_HMLIB>=20900
#		define USE_HMLIB_ARRAYDEQUE 100
#	else
#		define USE_HMLIB_ARRAYDEQUE 100
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_ARRAYDEQUE
#	ifdef CHG_HMLIB>=30000
#		define CHG_HMLIB_ARRAYDEQUE 999
#	elif CHG_HMLIB>=20905
#		define CHG_HMLIB_ARRAYDEQUE 103
#	elif CHG_HMLIB>=20902
#		define CHG_HMLIB_ARRAYDEQUE 102
#	elif CHG_HMLIB>=20901
#		define CHG_HMLIB_ARRAYDEQUE 101
#	elif CHG_HMLIB>=20900
#		define CHG_HMLIB_ARRAYDEQUE 100
#	else
#		define CHG_HMLIB_ARRAYDEQUE 100
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_ARRAYDEQUE
#	define INC_USE_HMLIB_ARRAYDEQUE
#
#	ifdef USE_HMLIB_ARRAYDEQUE>103
#		error hmLib : [arraydeque.hpp] �p�~�o�[�W�����ł��Bv1_03����(v3_00_00�ȍ~)�́A�g�p�ł��܂���Bcircular.hpp���g�p���Ă��������B
#	elif USE_HMLIB_ARRAYDEQUE==103
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [arraydeque.hpp] v1_03");
#		endif
#		include "hmLib_v2/arraydeque/arraydeque_v1_03.hpp"
#	elif USE_HMLIB_ARRAYDEQUE==102
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [arraydeque.hpp] v1_02");
#		endif
#		include "hmLib_v2/arraydeque/arraydeque_v1_02.hpp"
#	elif USE_HMLIB_ARRAYDEQUE==101
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [arraydeque.hpp] v1_01");
#		endif
#		include "hmLib_v2/arraydeque/arraydeque_v1_01.hpp"
#	elif USE_HMLIB_ARRAYDEQUE==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [arraydeque.hpp] v1_00");
#		endif
#		include "hmLib_v2/arraydeque/arraydeque_v1_00.hpp"
#	else
#		error hmLib : [arraydeque.hpp] ��Ή��o�[�W�����ł��Bv1_00(v2_09_00)���O�́A�g�p�ł��܂���B
#	endif
#
#	if 3<=OUT_USE_HMLIB
#		pragma message("hmLib : # info  : [arraydeque.hpp] v1_03����(v3_00_00�ȍ~)�A�p�~����܂��B��p��circular.hpp�����݂��܂��B");
#	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_ARRAYDEQUE
#	define INC_CHG_HMLIB_ARRAYDEQUE
#
#	if 100<=USE_HMLIB_ARRAYDEQUE
#		if 1<=OUT_CHG_HMLIB && 103<CHG_HMLIB_ARRAYDEQUE
#			pragma message("chg_hmLib : # error : [arraydeque.hpp] �p�~�o�[�W�����ł��Bv1_03����(v3_00_00�ȍ~)�́A�g�p�ł��܂���Bcircular.hpp���g�p���Ă��������B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_ARRAYDEQUE<100
#			pragma message("chg_hmLib : # error : [arraydeque.hpp] ��Ή��o�[�W�����ł��Bv1_00(v2_09_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#
#	if 100<=CHG_HMLIB_ARRAYDEQUE
#		ifndef INC_CHG_HMLIB_ARRAY
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [arraydeque.hpp] array.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��array.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/array.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/array.hpp"
#			endif
#		endif
#
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_ARRAYDEQUE<=103 && 103<CHG_HMLIB_ARRAY
#			pragma message("chg_hmLib : # error : [arraydeque.hpp] array.hpp v1_04(v3_00_00)�ȍ~�Ƃ͌݊���������܂���B")
#		endif
#	endif
#
#	endif
#endif
