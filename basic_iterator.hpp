/*
basic_iterator �p�~
	�@�\�Q�����̂���
	��p��iterator_pattern.hpp
basic_iterator_v1_00�ǉ�
	iterator��{�쐬�L�b�g
*/
/*
�ˑ��t�@�C��
	102<=array.hpp
*/
#ifndef VER_HMLIB_BASICITERATOR
#	define VER_HMLIB_BASICITERATOR 999
#endif
#
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#ifndef USE_HMLIB_BASICITERATOR
#	if USE_HMLIB>=30000
#		define USE_HMLIB_BASICITERATOR 999
#	elif USE_HMLIB>=20905
#		define USE_HMLIB_BASICITERATOR 100
#	else
#		define USE_HMLIB_BASICITERATOR 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_BASICITERATOR
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_BASICITERATOR 999
#	elif CHG_HMLIB>=20905
#		define CHG_HMLIB_BASICITERATOR 100
#	else
#		define CHG_HMLIB_BASICITERATOR 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_BASICITERATOR
#	define INC_USE_HMLIB_BASICITERATOR
#
#	if USE_HMLIB_BASICITERATOR>100
#		error hmLib : [basic_iterator.hpp] �p�~�o�[�W�����ł��Bv1_00����(v3_00_00�ȍ~)�́A�g�p�ł��܂���B��p��iterator_pattern.hpp�����݂��܂��B
#	elif USE_HMLIB_BASICITERATOR==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [basic_iterator.hpp] v1_00")
#		endif
#		include "hmLib_v2/basic_iterator/basic_iterator_v1_00.hpp"
#	else
#		error hmLib : [basic_iterator.hpp] ��Ή��o�[�W�����ł��Bv1_00(v2_09_05)���O�́A�g�p�ł��܂���B
#	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_BASICITERATOR
#	define INC_CHG_HMLIB_BASICITERATOR
#
#	if 100<=USE_HMLIB_BASICITERATOR
#		if 1<=OUT_CHG_HMLIB && 100<CHG_HMLIB_BASICITERATOR
#			pragma message("chg_hmLib : # error : [basic_iterator.hpp] �p�~�o�[�W�����ł��Bv1_00����(v3_00_00�ȍ~)�́A�g�p�ł��܂���B��p��iterator_pattern.hpp�����݂��܂��B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_BASICITERATOR<100
#			pragma message("chg_hmLib : # error : [basic_iterator.hpp] ��Ή��o�[�W�����ł��Bv1_00(v2_09_05)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#
#	endif
#endif
