/*
vectorlist�p�~
	��荂�@�\��list�^�R���e�i�Achain���ł������߁B
	��p��chain.hpp
vectorlist_v1_01
	�������m�ۂ̂ӂ�܂����Avector�ɏ���(�ǉ��m�ۂ͍s�����A����͎����ōs��Ȃ�)
vectorlist_v1_00�ǉ�
	STL������list�^vector�N���X
	����v�f���̒������s��arraylist
	�C�ӂ̈ʒu�̗v�f�̑}��/�폜������
*/
#ifndef VER_HMLIB_VECTORLIST
#	define VER_HMLIB_VECTORLIST 999
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_VECTORLIST
#	if USE_HMLIB>=30000
#		define USE_HMLIB_VECTORLIST 999
#	elif USE_HMLIB>=20902
#		define USE_HMLIB_VECTORLIST 101
#	elif USE_HMLIB>=20900
#		define USE_HMLIB_VECTORLIST 100
#	else
#		define USE_HMLIB_VECTORLIST 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_VECTORLIST
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_VECTORLIST 999
#	elif CHG_HMLIB>=20902
#		define CHG_HMLIB_VECTORLIST 101
#	elif CHG_HMLIB>=20900
#		define CHG_HMLIB_VECTORLIST 100
#	else
#		define CHG_HMLIB_VECTORLIST 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_VECTORLIST
#	define INC_USE_HMLIB_VECTORLIST
#
#	if USE_HMLIB_VECTORLIST>101
#		error hmLib : # error : [vectorlist.hpp] �p�~�o�[�W�����ł��Bv1_01����(v3_00_00�ȍ~)�́A�g�p�ł��܂���B��p��chain.hpp�����݂��܂��B
#	elif USE_HMLIB_VECTORLIST==101
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [vectorlist.hpp] v1_01")
#		endif
#		include "hmLib_v2/vectorlist/vectorlist_v1_01.hpp"
#	elif USE_HMLIB_VECTORLIST==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [vectorlist.hpp] v1_00")
#		endif
#		include "hmLib_v2/vectorlist/vectorlist_v1_00.hpp"
#	else
#		error hmLib : # error : [vectorlist.hpp] ��Ή��o�[�W�����ł��Bv1_00(v2_09_00)���O�́A�g�p�ł��܂���B
#	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_VECTORLIST
#	define INC_CHG_HMLIB_VECTORLIST
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMLIB_VECTORLIST
#		if 1<=OUT_CHG_HMLIB && 101<CHG_HMLIB_VECTORLIST
#			pragma message("chg_hmLib : # error : [vectorlist.hpp] �p�~�o�[�W�����ł��Bv1_01����(v3_00_00�ȍ~)�́A�g�p�ł��܂���B��p��chain.hpp�����݂��܂��B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_VECTORLIST<100
#			pragma message("chg_hmLib : # error : [vectorlist.hpp] ��Ή��o�[�W�����ł��Bv1_00(v2_09_00)���O�́A�g�p�ł��܂���")
#		endif
#	endif
#	/* arraylist�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_VECTORLIST
#		ifndef CHG_HMLIB_ARRAYLIST
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [vectorlist.hpp] arraylist.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��arraylist.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/arraylist.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/arraylist.hpp"
#			endif
#		endif
#
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_VECTORLIST<102 && 104<=CHG_HMLIB_ARRAYLIST
#			pragma message("chg_hmLib : # error : [vectorlist.hpp] arraylist.hpp v1_04(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#		elif 1<=OUT_CHG_HMLIB && CHG_HMLIB_ARRAYLIST<104 && 102<=CHG_HMLIB_VECTORLIST
#			pragma message("chg_hmLib : # error : [vectorlist.hpp] arraylist.hpp v1_04(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#		endif
#
#	endif
#
#	endif
#endif
