/*
iterator_pattern_v1_00.hpp
	iterator������y�ɍ쐬�ł���ЂȌ`�N���X
*/
#ifndef VER_HMLIB_ITERATORPATTERN
#	define VER_HMLIB_ITERATORPATTERN 100
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_ITERATORPATTERN
#	if USE_HMLIB>=30000
#		define USE_HMLIB_ITERATORPATTERN 100
#	else
#		define USE_HMLIB_ITERATORPATTERN 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_ITERATORPATTERN
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_ITERATORPATTERN 100
#	else
#		define CHG_HMLIB_ITERATORPATTERN 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_ITERATORPATTERN
#	define INC_USE_HMLIB_ITERATORPATTERN
#
#	if USE_HMLIB_ITERATORPATTERN>100
#		error hmLib : # error : [iterator_pattern.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B
#	elif USE_HMLIB_ITERATORPATTERN==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [iterator_pattern.hpp] v1_00")
#		endif
#		include "hmLib_v2/iterator_pattern/iterator_pattern_v1_00.hpp"
#	else
#		error hmLib : # error : [iterator_pattern.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B
#	endif
#
#//	if 1<=OUT_USE_HMLIB && 100<=USE_HMLIB_ITERATORPATTERN && USE_HMLIB_ITERATORPATTERN<101
#//		pragma message("hmLib : # error : [iterator_pattern.hpp] ...�Bv1_01(v3_01_00)�ȏ�ւ̑Ή��𐄏����܂��B")
#//	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_ITERATORPATTERN
#	define INC_CHG_HMLIB_ITERATORPATTERN
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMLIB_ITERATORPATTERN
#		if 1<=OUT_CHG_HMLIB && 100<CHG_HMLIB_ITERATORPATTERN
#			pragma message("chg_hmLib : # error : [iterator_pattern.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B")
#		endif
#//		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_ITERATORPATTERN<100 && 100<=USE_HMLIB_ITERATORPATTERN
#//			pragma message("chg_hmLib : # error : [iterator_pattern.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv1_00(v3_00_00)���O�́A...")
#//		elif 1<=OUT_CHG_HMLIB && USE_HMLIB_ITERATORPATTERN<100 && 100<=CHG_HMLIB_ITERATORPATTERN
#//			pragma message("chg_hmLib : # error : [iterator_pattern.hpp] ����݊����͕ۏ؂���Ă��܂���Bv1_00(v3_00_00)�ȍ~�́A...")
#//		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_ITERATORPATTERN<100
#			pragma message("chg_hmLib : # error : [iterator_pattern.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#	/* operator_pattern�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_ITERATORPATTERN
#		ifndef CHG_HMLIB_OPERATORPATTERN
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [iterator_pattern.hpp] operator_pattern.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��operator_pattern.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/operator_pattern.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/operator_pattern.hpp"
#			endif
#		endif
#//		if 1<=OUT_CHG_HMLIB && 100<=CHG_HMLIB_ITERATORPATTERN && CHG_HMLIB_OPERATORPATTERN<100
#//			pragma message("chg_hmLib : # error : [iterator_pattern.hpp] operator_pattern.hpp v1_00(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#//		elif 1<=OUT_CHG_HMLIB && CHG_HMLIB_ITERATORPATTERN<100 && 100<=CHG_HMLIB_OPERATORPATTERN
#//			pragma message("chg_hmLib : # error : [iterator_pattern.hpp] operator_pattern.hpp v1_00(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#//		endif
#		if 1<=OUT_CHG_HMLIB && ( CHG_HMLIB_OPERATORPATTERN<100 || CHG_HMLIB_OPERATORPATTERN==999)
#			pragma message("chg_hmLib : # error : [iterator_pattern.hpp] �g�p�\��operator_pattern.hpp�����݂��܂���B")
#		endif
#	endif
#
#	endif
#endif
