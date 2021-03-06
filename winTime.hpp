/*
winTime廃止
winTime_v1_00.hpp
*/
#ifndef VER_HMLIB_WINTIME
#	define VER_HMLIB_WINTIME 999
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_WINTIME
#	if USE_HMLIB>=20702
#		define USE_HMLIB_WINTIME 999
#	elif USE_HMLIB>=20000
#		define USE_HMLIB_WINTIME 100
#	else
#		define USE_HMLIB_WINTIME 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_WINTIME
#	if CHG_HMLIB>=20702
#		define CHG_HMLIB_WINTIME 999
#	elif CHG_HMLIB>=20000
#		define CHG_HMLIB_WINTIME 100
#	else
#		define CHG_HMLIB_WINTIME 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_WINTIME
#	define INC_USE_HMLIB_WINTIME
#
#	if USE_HMLIB_WINTIME>100
#		error hmLib : # error : [winTime.hpp] 非対応バージョンです。v1_00より後(v2_07_02以降)は、使用できません。
#	elif USE_HMLIB_WINTIME==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [winTime.hpp] v1_00")
#		endif
#		include "hmLib_v2/winTime/winTime_v1_00.hpp"
#	else
#		error hmLib : # error : [winTime.hpp] 非対応バージョンです。v1_00(v2_00_00)より前は、使用できません。
#	endif
#
#//	if 1<=OUT_USE_HMLIB && 100<=USE_HMLIB_WINTIME && USE_HMLIB_WINTIME<101
#//		pragma message("hmLib : # error : [winTime.hpp] ...。v1_01(v3_01_00)以上への対応を推奨します。")
#//	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_WINTIME
#	define INC_CHG_HMLIB_WINTIME
#
#	/*自身との互換性*/
#	if 100<=USE_HMLIB_WINTIME
#		if 1<=OUT_CHG_HMLIB && 100<CHG_HMLIB_WINTIME
#			pragma message("chg_hmLib : # error : [winTime.hpp] 非対応バージョンです。v1_00より後(v2_07_02以降)は、使用できません。")
#		endif
#//		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_WINTIME<100 && 100<=USE_HMLIB_WINTIME
#//			pragma message("chg_hmLib : # error : [winTime.hpp] 前方互換性は保証されていません。v1_00(v3_00_00)より前は、...")
#//		elif 1<=OUT_CHG_HMLIB && USE_HMLIB_WINTIME<100 && 100<=CHG_HMLIB_WINTIME
#//			pragma message("chg_hmLib : # error : [winTime.hpp] 後方互換性は保証されていません。v1_00(v3_00_00)以降は、...")
#//		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_WINTIME<100
#			pragma message("chg_hmLib : # error : [winTime.hpp] 非対応バージョンです。v1_00(v2_00_00)より前は、使用できません。")
#		endif
#	endif
#	/* hmBasicとの互換性について*/
#	if 100<=CHG_HMLIB_WINTIME
#		ifndef CHG_HMLIB_HMBASIC
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [winTime.hpp] hmBasic.hppに依存しています。CHG_HMLIB用にhmBasic.hppをincludeします。")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/hmBasic.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/hmBasic.hpp"
#			endif
#		endif
#//		if 1<=OUT_CHG_HMLIB && 100<=CHG_HMLIB_WINTIME && CHG_HMLIB_HMBASIC<100
#//			pragma message("chg_hmLib : # error : [winTime.hpp] hmBasic.hpp v1_00(v3_00_00)より前とは、互換性がありません。")
#//		elif 1<=OUT_CHG_HMLIB && CHG_HMLIB_WINTIME<100 && 100<=CHG_HMLIB_HMBASIC
#//			pragma message("chg_hmLib : # error : [winTime.hpp] hmBasic.hpp v1_00(v3_00_00)以降とは、互換性がありません。")
#//		endif
#		if 1<=OUT_CHG_HMLIB && ( CHG_HMLIB_HMBASIC<100 || CHG_HMLIB_HMBASIC==999)
#			pragma message("chg_hmLib : # error : [winTime.hpp] 使用可能なhmBasic.hppが存在しません。")
#		endif
#	endif
#
#	endif
#endif
