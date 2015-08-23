/*
color_v1_00.hpp
	�F�֌W����p�N���X
		class rgb_color;	//RGB�^�J���[	r:�ԋ��x g:�΋��x b:���x ���w��
		class hsv_color;	//HSV�^�J���[	hue:�F�� sat:�ʓx vlu:���x ���w��
		class hls_color;	//HLS�^�J���[	hue:�F�� lgt:�ʓx sat:���x ���w��
		class rgba_color;	//RGB�^�J���[	r:�ԋ��x g:�΋��x b:���x a:���ߓx ���w��
		class hsva_color;	//HSV�^�J���[	hue:�F�� sat:�ʓx vlu:���x a:���ߓx ���w��
		class hlsa_color;	//HLS�^�J���[	hue:�F�� lgt:�ʓx sat:���x a:���ߓx ���w��
*/
#ifndef VER_HMLIB_COLOR
#	define VER_HMLIB_COLOR 100
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_COLOR
#	if USE_HMLIB>=30000
#		define USE_HMLIB_COLOR 100
#	else
#		define USE_HMLIB_COLOR 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_COLOR
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_COLOR 100
#	else
#		define CHG_HMLIB_COLOR 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_COLOR
#	define INC_USE_HMLIB_COLOR
#
#	if USE_HMLIB_COLOR>100
#		error hmLib : # error : [color.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B
#	elif USE_HMLIB_COLOR==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [color.hpp] v1_00")
#		endif
#		include "hmLib_v2/color/color_v1_00.hpp"
#	else
#		error hmLib : # error : [color.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B
#	endif
#
#//	if 1<=OUT_USE_HMLIB && 100<=USE_HMLIB_COLOR && USE_HMLIB_COLOR<101
#//		pragma message("hmLib : # error : [color.hpp] ...�Bv1_01(v3_01_00)�ȏ�ւ̑Ή��𐄏����܂��B")
#//	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_COLOR
#	define INC_CHG_HMLIB_COLOR
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMLIB_COLOR
#		if 1<=OUT_CHG_HMLIB && 100<CHG_HMLIB_COLOR
#			pragma message("chg_hmLib : # error : [color.hpp] ��Ή��o�[�W�����ł��Bv1_00����́A�g�p�ł��܂���B")
#		endif
#//		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_COLOR<100 && 100<=USE_HMLIB_COLOR
#//			pragma message("chg_hmLib : # error : [color.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv1_00(v3_00_00)���O�́A...")
#//		elif 1<=OUT_CHG_HMLIB && USE_HMLIB_COLOR<100 && 100<=CHG_HMLIB_COLOR
#//			pragma message("chg_hmLib : # error : [color.hpp] ����݊����͕ۏ؂���Ă��܂���Bv1_00(v3_00_00)�ȍ~�́A...")
#//		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_COLOR<100
#			pragma message("chg_hmLib : # error : [color.hpp] ��Ή��o�[�W�����ł��Bv1_00(v3_00_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#	/* bytebase_type�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_COLOR
#		ifndef INC_CHG_HMLIB_BYTEBASETYPE
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [color.hpp] bytebase_type.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��bytebase_type.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/bytebase_type.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/bytebase_type.hpp"
#			endif
#		endif
#//		if 1<=OUT_CHG_HMLIB && 100<=CHG_HMLIB_COLOR && CHG_HMLIB_BYTEBASETYPE<100
#//			pragma message("chg_hmLib : # error : [color.hpp] bytebase_type.hpp v1_00(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#//		elif 1<=OUT_CHG_HMLIB && CHG_HMLIB_COLOR<100 && 100<=CHG_HMLIB_BYTEBASETYPE
#//			pragma message("chg_hmLib : # error : [color.hpp] bytebase_type.hpp v1_00(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#//		endif
#		if 1<=OUT_CHG_HMLIB && ( CHG_HMLIB_BYTEBASETYPE<100 || CHG_HMLIB_BYTEBASETYPE==999)
#			pragma message("chg_hmLib : # error : [color.hpp] �g�p�\��bytebase_type.hpp�����݂��܂���B")
#		endif
#	endif
#	/* operator_pattern�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_COLOR
#		ifndef INC_CHG_HMLIB_OPERATORPATTERN
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [color.hpp] operator_pattern.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��operator_pattern.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/operator_pattern.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/operator_pattern.hpp"
#			endif
#		endif
#//		if 1<=OUT_CHG_HMLIB && 100<=CHG_HMLIB_COLOR && CHG_HMLIB_OPERATORPATTERN<100
#//			pragma message("chg_hmLib : # error : [color.hpp] operator_pattern.hpp v1_00(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#//		elif 1<=OUT_CHG_HMLIB && CHG_HMLIB_COLOR<100 && 100<=CHG_HMLIB_OPERATORPATTERN
#//			pragma message("chg_hmLib : # error : [color.hpp] operator_pattern.hpp v1_00(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#//		endif
#		if 1<=OUT_CHG_HMLIB && ( CHG_HMLIB_OPERATORPATTERN<100 || CHG_HMLIB_OPERATORPATTERN==999)
#			pragma message("chg_hmLib : # error : [color.hpp] �g�p�\��operator_pattern.hpp�����݂��܂���B")
#		endif
#	endif
#
#	endif
#endif
