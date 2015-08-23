/*
binary_v1_00.hpp
	hmBasic��p�t�@�C���̈��
	bit���Z�p�֐��Q
		bittest:�w��bit�̒l�擾
		bitput:�w��bit���w��̒l��
		bitset:�w��bit��on
		bitclear:�w��bit��off
		bitxor:�w��bit��xor
*/
#ifndef VER_HMLIB_BINARY
#	define VER_HMLIB_BINARY 100
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#ifndef USE_HMLIB_BINARY
#	if USE_HMLIB>=30000
#		define USE_HMLIB_BINARY 100
#	else
#		define USE_HMLIB_BINARY 0
#	endif
#endif
#if defined CHG_HMLIB &&  !defined CHG_HMLIB_BINARY
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_BINARY 100
#	else
#		define CHG_HMLIB_BINARY 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_BINARY
#	define INC_USE_HMLIB_BINARY
#
#	if USE_HMLIB_BINARY>100
#		error hmLib : [binary.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B
#	elif USE_HMLIB_BINARY==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [binary.hpp] v1_00")
#		endif
#		include "hmLib_v2/binary/binary_v1_00.hpp"
#	else
#		error hmLib : [binary.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B
#	endif
#
#
#	endif
#endif
#
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_BINARY
#	define INC_CHG_HMLIB_BINARY
#
#	if 100<=USE_HMLIB_BINARY
#		if 1<=OUT_CHG_HMLIB && 100<CHG_HMLIB_BINARY
#			pragma message("chg_hmLib : # error : [binary.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_BINARY<100
#			pragma message("chg_hmLib : # error : [binary.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#
#	if 100<=CHG_HMLIB_BINARY
#		ifndef INC_CHG_HMLIB_BYTEBASETYPE
#			if 3<=OUT_CHG_HMLIB
#			 	pragma message("chg_hmLib : # info  : [binary.hpp] bytebase_type.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��bytebase_type.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/bytebase_type.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/bytebase_type.hpp"
#			endif
#		endif
#	endif
#
#	endif
#endif
