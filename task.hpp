/*
task_v1_00.hpp
	TaskSystem���Č�����N���X task
		���w�^�X�N
			createChild/releaseChild�֐��ŁA�q�^�X�N�̐���\
		�D��x�t���s�@�\
			Priority��ݒ肷�邱�ƂŁA�D����s���ʂ�����\
		�����폜�@�\
			Priority�̕��ƁA�o�^����Task���̂�2���@�ō폜�\
		���ȏI���@�\
			���g�̏I����exit�֐��Őe�^�X�N�֒ʍ��\
		�o���^�X�N�쐬
			���g�̎o���^�X�N�ƂȂ�^�X�N�쐬���A�e�^�X�N�ɗv���\
		�X���[�v�@�\
			sleep�֐��ŁA�w��񐔂����֐��̎��s���X�L�b�v
*/
#ifndef VER_HMLIB_TASK
#	define VER_HMLIB_TASK 100
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_TASK
#	if USE_HMLIB>=30000
#		define USE_HMLIB_TASK 100
#	else
#		define USE_HMLIB_TASK 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_TASK
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_TASK 100
#	else
#		define CHG_HMLIB_TASK 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_TASK
#	define INC_USE_HMLIB_TASK
#
#	if USE_HMLIB_TASK>100
#		error hmLib : # error : [task.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B
#	elif USE_HMLIB_TASK==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [task.hpp] v1_00")
#		endif
#		include "hmLib_v2/task/task_v1_00.hpp"
#	else
#		error hmLib : # error : [task.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B
#	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_TASK
#	define INC_CHG_HMLIB_TASK
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMLIB_TASK
#		if 1<=OUT_CHG_HMLIB && 100<CHG_HMLIB_TASK
#			pragma message("chg_hmLib : # error : [task.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_TASK<100
#			pragma message("chg_hmLib : # error : [task.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#	/* iterator_pattern�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_TASK
#		ifndef CHG_HMLIB_ITERATORPATTERN
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [task.hpp] iterator_pattern.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��iterator_pattern.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/iterator_pattern.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/iterator_pattern.hpp"
#			endif
#		endif
#
#		if 100<=CHG_HMLIB_TASK
#			pragma message("chg_hmLib : # error : [task.hpp] iterator_pattern v1_01(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#		endif
#		
#	endif
#
#	endif
#endif
