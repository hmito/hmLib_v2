/*
shared_memory_v1_00.hpp
	�ꎞ�I�������m�ۗp�o�b�t�@
	�����̏ꏊ�ňꎞ�I�ɋ���ȃo�b�t�@���K�v�ƂȂ�ꍇ�ɁA
	�e�X�Ŋm�ۂ����A���ʂ̂�����̃���������苤�L����
*/
#ifndef VER_HMLIB_SHAREDMEMORY
#	define VER_HMLIB_SHAREDMEMORY 100
#endif
#
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_SHAREDMEMORY
#	if USE_HMLIB>=30000
#		define USE_HMLIB_SHAREDMEMORY 100
#	else
#		define USE_HMLIB_SHAREDMEMORY 0
#	endif
#endif
#
#if defined CHG_HMLIB &&  !defined CHG_HMLIB_SHAREDMEMORY
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_SHAREDMEMORY 100
#	else
#		define CHG_HMLIB_SHAREDMEMORY 0
#	endif
#endif
#
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_SHAREDMEMORY
#	define INC_USE_HMLIB_SHAREDMEMORY
#
#	if USE_HMLIB_SHAREDMEMORY>100
#		error hmLib : [shared_memory.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B
#	elif USE_HMLIB_SHAREDMEMORY==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [shared_memory.hpp] v1_00")
#		endif
#		include "hmLib_v2/shared_memory/shared_memory_v1_00.hpp"
#	else
#		error hmLib : [shared_memory.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B
#	endif
#
#	if 3<=OUT_USE_HMLIB && 100<=USE_HMLIB_SHAREDMEMORY
#		pragma message("hmLib : # info  : [shared_memory.hpp] shm::toStr,shm::toCStr�֐��̓}���`�X���b�h���S�ł͂���܂���B")
#	endif
#
#	endif
#endif
#
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_SHAREDMEMORY
#	define INC_CHG_HMLIB_SHAREDMEMORY
#
#	if 100<=USE_HMLIB_SHAREDMEMORY
#		if 1<=OUT_CHG_HMLIB && 100<CHG_HMLIB_SHAREDMEMORY
#			pragma message("chg_hmLib : # error : [shared_memory.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_SHAREDMEMORY<100
#			pragma message("chg_hmLib : # error : [shared_memory.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#
#	/* exception�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_SHAREDMEMORY
#		ifndef INC_CHG_HMLIB_EXCEPTION
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [shared_memory.hpp] exception.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��exception.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/exception.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/exception.hpp"
#			endif
#		endif
#//		if 1<=OUT_CHG_HMLIB && 100<=CHG_HMLIB_SHAREDMEMORY && CHG_HMLIB_EXCEPTION<100
#//			pragma message("chg_hmLib : # error : [shared_memory.hpp] exception.hpp v1_00(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#//		elif 1<=OUT_CHG_HMLIB && CHG_HMLIB_SHAREDMEMORY<100 && 100<=CHG_HMLIB_EXCEPTION
#//			pragma message("chg_hmLib : # error : [shared_memory.hpp] exception.hpp v1_00(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#//		endif
#		if 1<=OUT_CHG_HMLIB && ( CHG_HMLIB_EXCEPTION<100 || CHG_HMLIB_EXCEPTION==999)
#			pragma message("chg_hmLib : # error : [shared_memory.hpp] �g�p�\��exception.hpp�����݂��܂���B")
#		endif
#	endif
#
#	endif
#endif
