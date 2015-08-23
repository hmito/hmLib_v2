/*
csvstream_v1_00.h/cpp
*/
#ifndef VER_HMLIB_CSVSTREAM
#	define VER_HMLIB_CSVSTREAM 100
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_CSVSTREAM
#	if USE_HMLIB>=30000
#		define USE_HMLIB_CSVSTREAM 100
#	else
#		define USE_HMLIB_CSVSTREAM 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_CSVSTREAM
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_CSVSTREAM 100
#	else
#		define CHG_HMLIB_CSVSTREAM 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_CSVSTREAM
#	define INC_USE_HMLIB_CSVSTREAM
#
#	if USE_HMLIB_CSVSTREAM>100
#		error hmLib : # error : [csvstream.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B
#	elif USE_HMLIB_CSVSTREAM==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [csvstream.hpp] v1_00")
#		endif
#		include "hmLib_v2/csvstream/csvstream_v1_00.h"
#	else
#		error hmLib : # error : [csvstream.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B
#	endif
#
#//	if 1<=OUT_USE_HMLIB && 100<=USE_HMLIB_CSVSTREAM && USE_HMLIB_CSVSTREAM<101
#//		pragma message("hmLib : # error : [csvstream.hpp] ...�Bv1_01(v3_01_00)�ȏ�ւ̑Ή��𐄏����܂��B")
#//	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_CSVSTREAM
#	define INC_CHG_HMLIB_CSVSTREAM
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMLIB_CSVSTREAM
#		if 1<=OUT_CHG_HMLIB && 100<CHG_HMLIB_CSVSTREAM
#			pragma message("chg_hmLib : # error : [csvstream.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B")
#		endif
#//		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_CSVSTREAM<100 && 100<=USE_HMLIB_CSVSTREAM
#//			pragma message("chg_hmLib : # error : [csvstream.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv1_00(v3_00_00)���O�́A...")
#//		elif 1<=OUT_CHG_HMLIB && USE_HMLIB_CSVSTREAM<100 && 100<=CHG_HMLIB_CSVSTREAM
#//			pragma message("chg_hmLib : # error : [csvstream.hpp] ����݊����͕ۏ؂���Ă��܂���Bv1_00(v3_00_00)�ȍ~�́A...")
#//		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_CSVSTREAM<100
#			pragma message("chg_hmLib : # error : [csvstream.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#
#	/* streambuf_pattern�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_CSVSTREAM
#		ifndef INC_CHG_HMLIB_STREAMBUFPATTERN
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [csvstream.hpp] streambuf_pattern.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��streambuf_pattern.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/streambuf_pattern.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/streambuf_pattern.hpp"
#			endif
#		endif
#//		if 1<=OUT_CHG_HMLIB && 100<=CHG_HMLIB_CSVSTREAM && CHG_HMLIB_STREAMBUFPATTERN<100
#//			pragma message("chg_hmLib : # error : [csvstream.hpp] streambuf_pattern.hpp v1_00(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#//		elif 1<=OUT_CHG_HMLIB && CHG_HMLIB_CSVSTREAM<100 && 100<=CHG_HMLIB_STREAMBUFPATTERN
#//			pragma message("chg_hmLib : # error : [csvstream.hpp] streambuf_pattern.hpp v1_00(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#//		endif
#		if 1<=OUT_CHG_HMLIB && ( CHG_HMLIB_STREAMBUFPATTERN<100 || CHG_HMLIB_STREAMBUFPATTERN==999)
#			pragma message("chg_hmLib : # error : [csvstream.hpp] �g�p�\��streambuf_pattern.hpp�����݂��܂���B")
#		endif
#	endif
#
#	/* filterbuf�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_CSVSTREAM
#		ifndef INC_CHG_HMLIB_FILTERBUF
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [csvstream.hpp] filterbuf.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��filterbuf.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/filterbuf.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/filterbuf.hpp"
#			endif
#		endif
#//		if 1<=OUT_CHG_HMLIB && 100<=CHG_HMLIB_CSVSTREAM && CHG_HMLIB_FILTERBUF<100
#//			pragma message("chg_hmLib : # error : [csvstream.hpp] filterbuf.hpp v1_00(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#//		elif 1<=OUT_CHG_HMLIB && CHG_HMLIB_CSVSTREAM<100 && 100<=CHG_HMLIB_FILTERBUF
#//			pragma message("chg_hmLib : # error : [csvstream.hpp] filterbuf.hpp v1_00(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#//		endif
#		if 1<=OUT_CHG_HMLIB && ( CHG_HMLIB_FILTERBUF<100 || CHG_HMLIB_FILTERBUF==999)
#			pragma message("chg_hmLib : # error : [csvstream.hpp] �g�p�\��filterbuf.hpp�����݂��܂���B")
#		endif
#	endif
#
#	endif
#endif
