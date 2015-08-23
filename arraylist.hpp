/*
arraylist�p�~
	��p�͉ϒ�list�^�z���chain�@�|�C���^���v�f�̒ǉ��폜�����ۏႳ���悤�ɂȂ�
arraylist_v1_03
	iterator��hmstd::basic_iterator���g�p
arraylist_v1_02
	iterator��hm::basic_bidirectional_iterator���g�p
arraylist_v1_01
	iterator��STL�^�ɏ���
arraylist_v1_00�ǉ�
	STL������list�^array�N���X
	���񃁃����m�ۂ��s�킸�A�Œ�z���Ƀf�[�^��u
	�C�ӂ̈ʒu�̗v�f�̑}��/�폜������
*/
#ifndef VER_HMLIB_ARRAYLIST
#	define VER_HMLIB_ARRAYLIST 999
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_ARRAYLIST
#	if USE_HMLIB>=30000
#		define USE_HMLIB_ARRAYLIST 999
#	elif USE_HMLIB>=20905
#		define USE_HMLIB_ARRAYLIST 103
#	elif USE_HMLIB>=20902
#		define USE_HMLIB_ARRAYLIST 102
#	elif USE_HMLIB>=20901
#		define USE_HMLIB_ARRAYLIST 101
#	elif USE_HMLIB>=20900
#		define USE_HMLIB_ARRAYLIST 100
#	else
#		define USE_HMLIB_ARRAYLIST 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_ARRAYLIST
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_ARRAYLIST 999
#	elif CHG_HMLIB>=20905
#		define CHG_HMLIB_ARRAYLIST 103
#	elif CHG_HMLIB>=20902
#		define CHG_HMLIB_ARRAYLIST 102
#	elif CHG_HMLIB>=20901
#		define CHG_HMLIB_ARRAYLIST 101
#	elif CHG_HMLIB>=20900
#		define CHG_HMLIB_ARRAYLIST 100
#	else
#		define CHG_HMLIB_ARRAYLIST 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_ARRAYLIST
#	define INC_USE_HMLIB_ARRAYLIST
#
#	if USE_HMLIB_ARRAYLIST>103
#		error hmLib : # error : [arraylist.hpp] �p�~�o�[�W�����ł��Bv1_03(v3_00_00)����́A�g�p�ł��܂���B��p��chain.hpp�����݂��܂��B
#	elif USE_HMLIB_ARRAYLIST==103
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [arraylist.hpp] v1_03")
#		endif
#		include "hmLib_v2/arraylist/arraylist_v1_03.hpp"
#	elif USE_HMLIB_ARRAYLIST==102
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [arraylist.hpp] v1_02")
#		endif
#		include "hmLib_v2/arraylist/arraylist_v1_02.hpp"
#	elif USE_HMLIB_ARRAYLIST==101
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [arraylist.hpp] v1_01")
#		endif
#		include "hmLib_v2/arraylist/arraylist_v1_01.hpp"
#	elif USE_HMLIB_ARRAYLIST==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [arraylist.hpp] v1_00")
#		endif
#		include "hmLib_v2/arraylist/arraylist_v1_00.hpp"
#	else
#		error hmLib : # error : [arraylist.hpp] ��Ή��o�[�W�����ł��Bv1_00(2_09_00)���O�́A�g�p�ł��܂���B
#	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_ARRAYLIST
#	define INC_CHG_HMLIB_ARRAYLIST
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMLIB_ARRAYLIST
#		if 1<=OUT_CHG_HMLIB && 103<CHG_HMLIB_ARRAYLIST
#			pragma message("chg_hmLib : # error : [arraylist.hpp] �p�~�o�[�W�����ł��Bv1_03(v3_00_00)����́A�g�p�ł��܂���B��p��chain.hpp�����݂��܂��B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_ARRAYLIST<100
#			pragma message("chg_hmLib : # error : [arraylist.hpp] ��Ή��o�[�W�����ł��Bv1_00(2_09_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#	/* array�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_ARRAYLIST
#		ifndef INC_CHG_HMLIB_ARRAY
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [arraylist.hpp] array.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��array.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/array.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/array.hpp"
#			endif
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_ARRAYLIST<104 && 104<=CHG_HMLIB_ARRAY
#			pragma message("chg_hmLib : # error : [arraylist.hpp] array.hpp v1_04(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#		endif
#	endif
#
#	endif
#endif
