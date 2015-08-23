/*
hmStreamBuf.hpp v1_1
	NB��stream���g�p����ƁA�G���[�ɂȂ�o�O���C��
*/
#ifndef VER_HMLIB_HMSTREAMBUF
#	define VER_HMLIB_HMSTREAMBUF 999
#endif
#
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_HMSTREAMBUF
#	if USE_HMLIB>=30000
#		define USE_HMLIB_HMSTREAMBUF 999
#	elif USE_HMLIB>=20701
#		define USE_HMLIB_HMSTREAMBUF 101
#	elif USE_HMLIB>=20000
#		define USE_HMLIB_HMSTREAMBUF 100
#	else
#		define USE_HMLIB_HMSTREAMBUF 0
#	endif
#endif
#
#if defined CHG_HMLIB &&  !defined CHG_HMLIB_HMSTREAMBUF
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_HMSTREAMBUF 999
#	elif CHG_HMLIB>=20701
#		define CHG_HMLIB_HMSTREAMBUF 101
#	elif CHG_HMLIB>=20000
#		define CHG_HMLIB_HMSTREAMBUF 100
#	else
#		define CHG_HMLIB_HMSTREAMBUF 0
#	endif
#endif
#
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_HMSTREAMBUF
#	define INC_USE_HMLIB_HMSTREAMBUF
#
#	if USE_HMLIB_HMSTREAMBUF>101
#		error hmLib : [hmStreamBuf.hpp] �p�~�o�[�W�����ł��Bv1_01����(v3_00_00�ȏ�)�ł́A�g�p�ł��܂���B��p��streambuf_pattern.hpp�����݂��܂��B
#	elif USE_HMLIB_HMSTREAMBUF==101
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [hmStreamBuf.hpp] v1_01")
#		endif
#		include "hmLib_v2/hmStreamBuf/hmStreamBuf_v1_01.hpp"
#	elif USE_HMLIB_HMSTREAMBUF==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [hmStreamBuf.hpp] v1_00")
#		endif
#		include "hmLib_v2/hmStreamBuf/hmStreamBuf_v1_00.hpp"
#	else
#		error hmLib : [hmStreamBuf.hpp] ��Ή��o�[�W�����ł��Bv1_00(v2_00_00)���O�́A�g�p�ł��܂���B
#	endif
#
#	if 3<=OUT_USE_HMLIB && 100<=USE_HMLIB_HMBASIC
#		pragma message("hmLib : # info  : [hmStreamBuf.hpp] v3_00_00�ȏ�ł́AhmStreamBuf.hpp�͔p�~����܂��B��p��streambuf_pattern.hpp�����݂��܂��B")
#	endif
#	if 2<=OUT_USE_HMLIB && 100<=USE_HMLIB_HMSTREAMBUF && USE_HMLIB_HMSTREAMBUF<101
#		pragma message("hmLib : #warning: [hmStreamBuf.hpp] class hmNBstreambuf�ɒv���I�ȃo�O�����݂��܂��Bv1_01(v2_07_01)�ȏ�̎g�p�𐄏����܂��B")
#	endif
#
#	endif
#endif
#
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_HMSTREAMBUF
#	define INC_CHG_HMLIB_HMSTREAMBUF
#
#	if 100<=USE_HMLIB_HMSTREAMBUF
#		if 1<=OUT_CHG_HMLIB && 101<CHG_HMLIB_HMSTREAMBUF
#			pragma message("chg_hmLib : # error : [hmStreamBuf.hpp] ��Ή��o�[�W�����ł��Bv1_01����́A�g�p�ł��܂���B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_HMSTREAMBUF<101 && 101<=USE_HMLIB_HMSTREAMBUF
#			pragma message("chg_hmLib : # error : [hmStreamBuf.hpp] class hmNBstreambuf�ɒv���I�ȃo�O�����݂��܂��Bv1_01(v2_07_01)�ȏ�̎g�p�𐄏����܂��B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_HMSTREAMBUF<100
#			pragma message("chg_hmLib : # error : [hmStreamBuf.hpp] ��Ή��o�[�W�����ł��Bv1_00(v2_00_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#
#	endif
#endif
