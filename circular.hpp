/*
circular_v1_00.hpp
	�z�o�b�t�@�p�R���e�i
		bicircular
			�O�ォ��}���A�폜���ł���^�C�v
		circular
			�㍞�߁A��o�����z�o�b�t�@
		circular_stack
			�捞�߁A��o�����z�o�b�t�@
*/
#ifndef VER_HMLIB_CIRCULAR
#	define VER_HMLIB_CIRCULAR 100
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_CIRCULAR
#	if USE_HMLIB>=30000
#		define USE_HMLIB_CIRCULAR 100
#	else
#		define USE_HMLIB_CIRCULAR 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_CIRCULAR
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_CIRCULAR 100
#	else
#		define CHG_HMLIB_CIRCULAR 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_CIRCULAR
#	define INC_USE_HMLIB_CIRCULAR
#
#	if USE_HMLIB_CIRCULAR>100
#		error hmLib : # error : [circular.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B
#	elif USE_HMLIB_CIRCULAR==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [circular.hpp] v1_00")
#		endif
#		include "hmLib_v2/circular/circular_v1_00.hpp"
#	else
#		error hmLib : # error : [circular.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B
#	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_CIRCULAR
#	define INC_CHG_HMLIB_CIRCULAR
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMLIB_CIRCULAR
#		if 1<=OUT_CHG_HMLIB && 100<CHG_HMLIB_CIRCULAR
#			pragma message("chg_hmLib : # error : [circular.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_CIRCULAR<100
#			pragma message("chg_hmLib : # error : [circular.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#	/* iterator_pattern�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_CIRCULAR
#		ifndef CHG_HMLIB_ITERATORPATTERN
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [circular.hpp] iterator_pattern.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��iterator_pattern.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/iterator_pattern.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/iterator_pattern.hpp"
#			endif
#		endif
#	endif
#
#	endif
#endif
