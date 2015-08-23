/*
iterator_ghost_v1_00.hpp
	���z�I�Ɉ����Ƃ��ē����ꂽiterator�Ƃ��Ăӂ�܂��Aiterator�̑��
	virtual�錾����������iterator���g�������ꍇ�Ɏg�p�\
	�ʏ��template<iterator>�ɔ�ׂāA3�`4�{�قǒx��
*/
#ifndef VER_HMLIB_ITERATORGHOST
#	define VER_HMLIB_ITERATORGHOST 100
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_ITERATORGHOST
#	if USE_HMLIB>=30000
#		define USE_HMLIB_ITERATORGHOST 100
#	else
#		define USE_HMLIB_ITERATORGHOST 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_ITERATORGHOST
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_ITERATORGHOST 100
#	else
#		define CHG_HMLIB_ITERATORGHOST 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_ITERATORGHOST
#	define INC_USE_HMLIB_ITERATORGHOST
#
#	if USE_HMLIB_ITERATORGHOST>100
#		error hmLib : # error : [iterator_ghost.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B
#	elif USE_HMLIB_ITERATORGHOST==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [iterator_ghost.hpp] v1_00")
#		endif
#		include "hmLib_v2/iterator_ghost/iterator_ghost_v1_00.hpp"
#	else
#		error hmLib : # error : [iterator_ghost.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B
#	endif
#
#//	if 1<=OUT_USE_HMLIB && 100<=USE_HMLIB_ITERATORGHOST && USE_HMLIB_ITERATORGHOST<101
#//		pragma message("hmLib : # error : [iterator_ghost.hpp] ...�Bv1_01(v3_01_00)�ȏ�ւ̑Ή��𐄏����܂��B")
#//	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_ITERATORGHOST
#	define INC_CHG_HMLIB_ITERATORGHOST
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMLIB_ITERATORGHOST
#		if 1<=OUT_CHG_HMLIB && 100<CHG_HMLIB_ITERATORGHOST
#			pragma message("chg_hmLib : # error : [iterator_ghost.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B")
#		endif
#//		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_ITERATORGHOST<100 && 100<=USE_HMLIB_ITERATORGHOST
#//			pragma message("chg_hmLib : # error : [iterator_ghost.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv1_00(v3_00_00)���O�́A...")
#//		elif 1<=OUT_CHG_HMLIB && USE_HMLIB_ITERATORGHOST<100 && 100<=CHG_HMLIB_ITERATORGHOST
#//			pragma message("chg_hmLib : # error : [iterator_ghost.hpp] ����݊����͕ۏ؂���Ă��܂���Bv1_00(v3_00_00)�ȍ~�́A...")
#//		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_ITERATORGHOST<100
#			pragma message("chg_hmLib : # error : [iterator_ghost.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#	/* iterator_pattern�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_ITERATORGHOST
#		ifndef CHG_HMLIB_ITERATORPATTERN
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [iterator_ghost.hpp] iterator_pattern.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��iterator_pattern.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/iterator_pattern.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/iterator_pattern.hpp"
#			endif
#		endif
#//		if 1<=OUT_CHG_HMLIB && 100<=CHG_HMLIB_ITERATORGHOST && CHG_HMLIB_ITERATORPATTERN<100
#//			pragma message("chg_hmLib : # error : [iterator_ghost.hpp] iterator_pattern.hpp v1_00(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#//		elif 1<=OUT_CHG_HMLIB && CHG_HMLIB_ITERATORGHOST<100 && 100<=CHG_HMLIB_ITERATORPATTERN
#//			pragma message("chg_hmLib : # error : [iterator_ghost.hpp] iterator_pattern.hpp v1_00(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#//		endif
#		if 1<=OUT_CHG_HMLIB && ( CHG_HMLIB_ITERATORPATTERN<100 || CHG_HMLIB_ITERATORPATTERN==999)
#			pragma message("chg_hmLib : # error : [iterator_ghost.hpp] �g�p�\��iterator_pattern.hpp�����݂��܂���B")
#		endif
#	endif
#
#	endif
#endif
