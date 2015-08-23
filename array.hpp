/*
array�p�~
	std::bitset��boost::dynamic_bitset�̊֌W���Aboost::array�Ǝ�邽�߁B
array_v1_03
	iterator��hmstd::basic_iterator���g�p
array_v1_02
	iterator��hm::basic_random_access_iterator���g�p
array_v1_01
	iterator��STL�^�ɏ���
array_v1_00�ǉ�
	STL�����̌Œ蒷�z��N���X
*/
#ifndef VER_HMLIB_ARRAY
#	define VER_HMLIB_ARRAY 999
#endif
#
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#ifndef USE_HMLIB_ARRAY
#	if USE_HMLIB>=30000
#		define USE_HMLIB_ARRAY 999
#	elif USE_HMLIB>=20905
#		define USE_HMLIB_ARRAY 103
#	elif USE_HMLIB>=20902
#		define USE_HMLIB_ARRAY 102
#	elif USE_HMLIB>=20901
#		define USE_HMLIB_ARRAY 101
#	elif USE_HMLIB>=20900
#		define USE_HMLIB_ARRAY 100
#	else
#		define USE_HMLIB_ARRAY 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_ARRAY
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_ARRAY 999
#	elif CHG_HMLIB>=20905
#		define CHG_HMLIB_ARRAY 103
#	elif CHG_HMLIB>=20902
#		define CHG_HMLIB_ARRAY 102
#	elif CHG_HMLIB>=20901
#		define CHG_HMLIB_ARRAY 101
#	elif CHG_HMLIB>=20900
#		define CHG_HMLIB_ARRAY 100
#	else
#		define CHG_HMLIB_ARRAY 0
#	endif
#endif
#
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_ARRAY
#	define INC_USE_HMLIB_ARRAY
#
#	if USE_HMLIB_ARRAY>103
#		error hmLib : [array.hpp] �p�~�o�[�W�����ł��Bv1_03����(v3_00_00�ȍ~)�́A�g�p�ł��܂���B��p��dynamic_array.hpp�����݂��܂��B
#	elif USE_HMLIB_ARRAY==103
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [array.hpp] v1_03")
#		endif
#		include "hmLib_v2/array/array_v1_03.hpp"
#	elif USE_HMLIB_ARRAY==102
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [array.hpp] v1_02")
#		endif
#		include "hmLib_v2/array/array_v1_02.hpp"
#	elif USE_HMLIB_ARRAY==101
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [array.hpp] v1_01")
#		endif
#		include "hmLib_v2/array/array_v1_01.hpp"
#	elif USE_HMLIB_ARRAY==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [array.hpp] v1_00")
#		endif
#		include "hmLib_v2/array/array_v1_00.hpp"
#	else
#		error hmLib : [array.hpp] ��Ή��o�[�W�����ł��Bv1_00(v2_09_00)���O�́A�g�p�ł��܂���B
#	endif
#
#	if 2<=OUT_USE_HMLIB && 100<=USE_HMLIB_ARRAY && USE_HMLIB_ARRAY<104
#		pragma message("hmLib : #warning: [array.hpp] �ꕔ�A���S���Y���ł́A�C�e���[�^������ɍ쓮���Ȃ��\��������܂��Bv1_04(v3_00_00)�ȍ~�ŉ�������Ă��܂��B")
#	endif
#	if 1<=OUT_USE_HMLIB && 100<=USE_HMLIB_ARRAY && USE_HMLIB_ARRAY<103
#		pragma message("hmLib : # error : [array.hpp] operator!=�ɐ[���ȃG���[�����݂��܂��Bv1_03(v2_09_05)�ȏ�ւ̑Ή��𐄏����܂��B")
#	endif
#
#	endif
#endif
#
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_ARRAY
#	define INC_CHG_HMLIB_ARRAY
#
#	if 100<=USE_HMLIB_ARRAY
#		if 1<=OUT_CHG_HMLIB && 103<CHG_HMLIB_ARRAY
#			pragma message("chg_hmLib : # error : [array.hpp] �p�~�o�[�W�����ł��Bv1_03����(v3_00_00�ȍ~)�́A�g�p�ł��܂���B��p��dynamic_array.hpp�����݂��܂��B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_ARRAY<103 && 103<=USE_HMLIB_ARRAY
#			pragma message("chg_hmLib : # error : [array.hpp] operator!=�ɐ[���ȃG���[�����݂��܂��Bv1_03(v2_09_05)�ȏ�̎g�p�𐄏����܂��B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_ARRAY<100
#			pragma message("chg_hmLib : # error : [array.hpp] ��Ή��o�[�W�����ł��Bv1_00(v2_09_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#
#	if 102<=CHG_HMLIB_ARRAY && CHG_HMLIB_ARRAY<=102
#		ifndef INC_CHG_HMLIB_ALGORITHM
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [array.hpp] algorithm.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��algorithm.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/algorithm.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/algorithm.hpp"
#			endif
#		endif
#		
#		if 1<=OUT_CHG_HMLIB && 102<CHG_HMLIB_ALGORITHM
#			pragma message("chg_hmLib : # error : [array.hpp] algorithm.hpp v1_02(v2_09_05)�ȍ~�Ƃ́A�݊���������܂���B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_ALGORITHM<100
#			pragma message("chg_hmLib : # error : [array.hpp] �g�p�\��algorithm.hpp�����݂��܂���B")
#		endif
#	endif
#
#	if 103<=CHG_HMLIB_ARRAY && CHG_HMLIB_ARRAY<=103
#		ifndef INC_CHG_HMLIB_BASICITERATOR
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [array.hpp] basic_iterator.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��basic_iterator.hpp��include���܂��B")
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
#		if 1<=OUT_CHG_HMLIB && 102<CHG_HMLIB_BASICITERATOR
#			pragma message("chg_hmLib : # error : [array.hpp] basic_iterator.hpp v1_02(v2_09_05)�ȍ~�Ƃ́A�݊���������܂���B")
#		endif
#		if 1<=OUT_CHG_HMLIB && (CHG_HMLIB_BASICITERATOR<100 || CHG_HMLIB_BASICITERATOR==999)
#			pragma message("chg_hmLib : # error : [array.hpp] �g�p�\��basic_iterator.hpp�����݂��܂���B")
#		endif
#	endif
#
#	endif
#endif
