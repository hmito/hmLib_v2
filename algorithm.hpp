/*
algorithm.hpp �p�~
	��p��hmAlgorithm.hpp��hmFuncIterator.hpp�Ɉڍs
algorithm_v1_02
	iterator�����p�N���X�Q��basic_iterator�ɓ��ꂵ�Abasic_iterator.hpp�ւƈړ�
algorithm_v1_01�ǉ�
	basic_random_access_iterator��distance��ǉ�
algorithm_v1_00�ǉ�
	STL�n�p��algorithm
*/
#ifndef VER_HMLIB_ALGORITHM
#	define VER_HMLIB_ALGORITHM 103
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_ALGORITHM
#	if USE_HMLIB>=30000
#		define USE_HMLIB_ALGORITHM 103
#	elif USE_HMLIB>=20905
#		define USE_HMLIB_ALGORITHM 102
#	elif USE_HMLIB>=20904
#		define USE_HMLIB_ALGORITHM 101
#	elif USE_HMLIB>=20902
#		define USE_HMLIB_ALGORITHM 100
#	else
#		define USE_HMLIB_ALGORITHM 0
#	endif
#endif
#
#if defined CHG_HMLIB && !defined CHG_HMLIB_ALGORITHM
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_ALGORITHM 103
#	elif CHG_HMLIB>=20905
#		define CHG_HMLIB_ALGORITHM 102
#	elif CHG_HMLIB>=20904
#		define CHG_HMLIB_ALGORITHM 101
#	elif CHG_HMLIB>=20902
#		define CHG_HMLIB_ALGORITHM 100
#	else
#		define CHG_HMLIB_ALGORITHM 0
#	endif
#endif
#
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_ALGORITHM
#	define INC_USE_HMLIB_ALGORITHM
#
#	if USE_HMLIB_ALGORITHM>103
#		error hmLib : [algorithm.hpp] ��Ή��o�[�W�����ł��Bv1_03����́A�g�p�ł��܂���B
#	elif USE_HMLIB_ALGORITHM==103
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [algorithm.hpp] v1_03")
#		endif
#		include "hmLib_v2/algorithm/algorithm_v1_03.hpp"
#	elif USE_HMLIB_ALGORITHM==102
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [algorithm.hpp] v1_02")
#		endif
#		include "hmLib_v2/algorithm/algorithm_v1_02.hpp"
#	elif USE_HMLIB_ALGORITHM==101
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [algorithm.hpp] v1_01")
#		endif
#		include "hmLib_v2/algorithm/algorithm_v1_01.hpp"
#	elif USE_HMLIB_ALGORITHM==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [algorithm.hpp] v1_00")
#		endif
#		include "hmLib_v2/algorithm/algorithm_v1_00.hpp"
#	else
#		error hmLib : [algorithm.hpp] ��Ή��o�[�W�����ł��Bv1_00(v2_09_02)���O�́A�g�p�ł��܂���B
#	endif
#
#	if 1<=OUT_USE_HMLIB && 100<=USE_HMLIB_ALGORITHM && USE_HMLIB_ALGORITHM<101
#		pragma message("hmLib : #warning: [algorithm.hpp] basic_random_access_iterator�ɒv���I�ȃo�O������܂��Bv1_01(v2_09_04)�ȏ�̎g�p�𐄏����܂��B")
#	endif
#
#	endif
#endif
#
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_ALGORITHM
#	define INC_CHG_HMLIB_ALGORITHM
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMLIB_ALGORITHM
#		if 1<=OUT_CHG_HMLIB && 103<CHG_HMLIB_ALGORITHM
#			pragma message("chg_hmLib : # error : [algorithm.hpp] ��Ή��o�[�W�����ł��Bv1_03����́A�g�p�ł��܂���B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_ALGORITHM<103 && 103<=USE_ALGORITHM
#			pragma message("chg_hmLib : # error : [algorithm.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv1_03(v3_00_00)���O�́A���݂̃A���S���Y�����܂�ł��܂���B")
#		elif 1<=OUT_CHG_HMLIB && USE_ALGORITHM<103 && 103<=CHG_ALGORITHM
#			pragma message("chg_hmLib : # error : [algorithm.hpp] ����݊����͕ۏ؂���Ă��܂���Bv1_03(v3_00_00)�ȍ~�́A����C�e���[�^���܂�ł��܂���B��p��functional_iterator.hpp���g�p���Ă��������B")
#		endif
#		if 2<=OUT_CHG_HMLIB && CHG_HMLIB_ALGORITHM<101 & 101<=USE_HMLIB_ALGORITHM && USE_HMLIB_ALGORITHM<102
#			pragma message("chg_hmLib : #warning: [algorithm.hpp] basic_random_access_iterator�ɒv���I�ȃo�O������܂��Bv1_01(v2_09_02)�ȏ�ł����g�p�ł��܂���B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_ALGORITHM<100
#			pragma message("chg_hmLib : # error : [algorithm.hpp] ��Ή��o�[�W�����ł��Bv1_00(v2_09_02)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#
#	if 100<=CHG_HMLIB_ALGORITHM && CHG_HMLIB_ALGORITHM<=102
#		ifndef CHG_HMLIB_HMRAND
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [algorithm.hpp] hmRand.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��hmRand.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/hmRand.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/hmRand.hpp"
#			endif
#		endif
#
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_ALGORITHM<102 && 205<=CHG_HMLIB_HMRAND
#			pragma message("chg_hmLib : # error : [algorithm.hpp] hmRand.hpp v2_05(v3_00_00)�ȍ~�Ƃ͌݊���������܂���B")
#		elif 1<=OUT_CHG_HMLIB && 102<=CHG_HMLIB_ALGORITHM && CHG_HMLIB_HMRAND<205
#			pragma message("chg_hmLib : # error : [algorithm.hpp] hmRand.hpp v2_05(v3_00_00)���O�Ƃ͌݊���������܂���B")
#		endif
#		if 1<=OUT_CHG_HMLIB && (CHG_HMLIB_HMRAND<100 || CHG_HMLIB_HMRAND==999)
#			pragma message("chg_hmLib : # error : [algorithm.hpp] �g�p�\��hmRand.hpp�����݂��܂���B")
#		endif
#	endif
#
#	if 102<=CHG_HMLIB_ALGORITHM && CHG_HMLIB_ALGORITHM<=102
#		ifndef CHG_HMLIB_BASICITERATOR
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [algorithm.hpp] basic_iterator.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��basic_iterator.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/basic_iterator.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/basic_iterator.hpp"
#			endif
#		endif
#
#		if 1<=OUT_CHG_HMLIB && 101<=CHG_HMLIB_BASIC_ITERATOR
#			pragma message("chg_hmLib : # error : [algorithm.hpp] basic_iterator.hpp v1_01(v3_00_00)�ȍ~�Ƃ͌݊���������܂���B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_BASIC_ITERATOR<100
#			pragma message("chg_hmLib : # error : [algorithm.hpp] �g�p�\��basic_iterator.hpp�����݂��܂���B")
#		endif
#	endif
#
#	if 103<=CHG_HMLIB_ALGORITHM
#		ifndef INC_CHG_HMLIB_RANDOM
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [algorithm.hpp] random.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��random.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/random.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/random.hpp"
#			endif
#		endif
#
#		if 1<=OUT_CHG_HMLIB && 101<=CHG_HMLIB_RANDOM
#			pragma message("chg_hmLib : # error : [algorithm.hpp] random.hpp v1_01(v3_00_00)�ȍ~�Ƃ͌݊���������܂���B")
#		endif
#		if 1<=OUT_CHG_HMLIB && (CHG_HMLIB_RANDOM<100 || CHG_HMLIB_RANDOM==999)
#			pragma message("chg_hmLib : # error : [algorithm.hpp] �g�p�\��random.hpp�����݂��܂���B")
#		endif
#	endif
#
#	endif
#endif

