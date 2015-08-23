/*
debugstream_v1_00.hpp
*/
#ifndef VER_HMLIB_DEBUGSTREAM
#	define VER_HMLIB_DEBUGSTREAM 100
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_DEBUGSTREAM
#	if USE_HMLIB>=30000
#		define USE_HMLIB_DEBUGSTREAM 100
#	else
#		define USE_HMLIB_DEBUGSTREAM 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_DEBUGSTREAM
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_DEBUGSTREAM 100
#	else
#		define CHG_HMLIB_DEBUGSTREAM 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_DEBUGSTREAM
#	define INC_USE_HMLIB_DEBUGSTREAM
#
#	if USE_HMLIB_DEBUGSTREAM>100
#		error hmLib : # error : [debugstream.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B
#	elif USE_HMLIB_DEBUGSTREAM==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [debugstream.hpp] v1_00")
#		endif
#		include "hmLib_v2/debugstream/debugstream_v1_00.h"
#	else
#		error hmLib : # error : [debugstream.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B
#	endif
#
#//	if 1<=OUT_USE_HMLIB && 100<=USE_HMLIB_DEBUGSTREAM && USE_HMLIB_DEBUGSTREAM<101
#//		pragma message("hmLib : # error : [debugstream.hpp] ...�Bv1_01(v3_01_00)�ȏ�ւ̑Ή��𐄏����܂��B")
#//	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_DEBUGSTREAM
#	define INC_CHG_HMLIB_DEBUGSTREAM
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMLIB_DEBUGSTREAM
#		if 1<=OUT_CHG_HMLIB && 100<CHG_HMLIB_DEBUGSTREAM
#			pragma message("chg_hmLib : # error : [debugstream.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B")
#		endif
#//		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_DEBUGSTREAM<100 && 100<=USE_HMLIB_DEBUGSTREAM
#//			pragma message("chg_hmLib : # error : [debugstream.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv1_00(v3_00_00)���O�́A...")
#//		elif 1<=OUT_CHG_HMLIB && USE_HMLIB_DEBUGSTREAM<100 && 100<=CHG_HMLIB_DEBUGSTREAM
#//			pragma message("chg_hmLib : # error : [debugstream.hpp] ����݊����͕ۏ؂���Ă��܂���Bv1_00(v3_00_00)�ȍ~�́A...")
#//		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_DEBUGSTREAM<100
#			pragma message("chg_hmLib : # error : [debugstream.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#	/* streambuf_pattern�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_DEBUGSTREAM
#		ifndef INC_CHG_HMLIB_STREAMBUFPATTERN
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [debugstream.hpp] streambuf_pattern.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��streambuf_pattern.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/streambuf_pattern.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/streambuf_pattern.hpp"
#			endif
#		endif
#//		if 1<=OUT_CHG_HMLIB && 100<=CHG_HMLIB_DEBUGSTREAM && CHG_HMLIB_STREAMBUFPATTERN<100
#//			pragma message("chg_hmLib : # error : [debugstream.hpp] streambuf_pattern.hpp v1_00(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#//		elif 1<=OUT_CHG_HMLIB && CHG_HMLIB_DEBUGSTREAM<100 && 100<=CHG_HMLIB_STREAMBUFPATTERN
#//			pragma message("chg_hmLib : # error : [debugstream.hpp] streambuf_pattern.hpp v1_00(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#//		endif
#		if 1<=OUT_CHG_HMLIB && ( CHG_HMLIB_STREAMBUFPATTERN<100 || CHG_HMLIB_STREAMBUFPATTERN==999)
#			pragma message("chg_hmLib : # error : [debugstream.hpp] �g�p�\��streambuf_pattern.hpp�����݂��܂���B")
#		endif
#	endif
#
#	endif
#endif