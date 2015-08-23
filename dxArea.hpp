/*
dxArea�p�~
dxArea_v2_04
	dxArea���`��͈͂𐧌����Ă��Ȃ����������C��
dxArea_v2_03
	dxArObject���p������`�ɏC��
		dxObject�̍X�V�ɏ���
dxArea_v2_02
	dxObject��hmoBox���p������`�ɏC��
		dxBasicObject���ڌp���ł́AdxSubObject��dxObject�ɂ����Ή����Ȃ�dxo.draw���g�p�ł��Ȃ�����
	basic_dxMoveAreaType::AtoF,FtoA,setViewPos�Ƀo�O���������̂��C��
dxArea_v2_01
	�֐��I�u�W�F�N�g�ɑΉ�
*/
#ifndef VER_HMLIB_DXAREA
#	define VER_HMLIB_DXAREA 204
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_DXAREA
#	if USE_HMLIB>=30000
#		define USE_HMLIB_DXAREA 999
#	elif USE_HMLIB>=20804
#		define USE_HMLIB_DXAREA 204
#	elif USE_HMLIB>=20803
#		define USE_HMLIB_DXAREA 203
#	elif USE_HMLIB>=20802
#		define USE_HMLIB_DXAREA 202
#	elif USE_HMLIB>=20800
#		define USE_HMLIB_DXAREA 201
#	elif USE_HMLIB>=20100
#		define USE_HMLIB_DXAREA 200
#	elif USE_HMLIB>=20000
#		define USE_HMLIB_DXAREA 100
#	else
#		define USE_HMLIB_DXAREA 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_DXAREA
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_DXAREA 999
#	elif CHG_HMLIB>=20804
#		define CHG_HMLIB_DXAREA 204
#	elif CHG_HMLIB>=20803
#		define CHG_HMLIB_DXAREA 203
#	elif CHG_HMLIB>=20802
#		define CHG_HMLIB_DXAREA 202
#	elif CHG_HMLIB>=20800
#		define CHG_HMLIB_DXAREA 201
#	elif CHG_HMLIB>=20100
#		define CHG_HMLIB_DXAREA 200
#	elif CHG_HMLIB>=20000
#		define CHG_HMLIB_DXAREA 100
#	else
#		define CHG_HMLIB_DXAREA 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_DXAREA
#	define INC_USE_HMLIB_DXAREA
#
#	if USE_HMLIB_DXAREA>204
#		error hmLib : # error : [dxArea.hpp] ��Ή��o�[�W�����ł��Bv2_04����(v3_00_00�ȍ~)�́A�g�p�ł��܂���B
#	elif USE_HMLIB_DXAREA==204
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [dxArea.hpp] v2_04")
#		endif
#		include "hmLib_v2/dxArea/dxArea_v2_04.hpp"
#	elif USE_HMLIB_DXAREA==203
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [dxArea.hpp] v2_03")
#		endif
#		include "hmLib_v2/dxArea/dxArea_v2_03.hpp"
#	elif USE_HMLIB_DXAREA==202
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [dxArea.hpp] v2_02")
#		endif
#		include "hmLib_v2/dxArea/dxArea_v2_02.hpp"
#	elif USE_HMLIB_DXAREA==201
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [dxArea.hpp] v2_01")
#		endif
#		include "hmLib_v2/dxArea/dxArea_v2_01.hpp"
#	elif USE_HMLIB_DXAREA==200
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [dxArea.hpp] v2_00")
#		endif
#		include "hmLib_v2/dxArea/dxArea_v2_00.hpp"
#	elif USE_HMLIB_DXAREA==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [dxArea.hpp] v1_00")
#		endif
#		include "hmLib_v2/dxArea/dxArea_v1_00.hpp"
#	else
#		error hmLib : # error : [dxArea.hpp] ��Ή��o�[�W�����ł��Bv1_00(v2_00_00)���O�́A�g�p�ł��܂���B
#	endif
#
#	if 1<=OUT_USE_HMLIB && 100<=USE_HMLIB_DXAREA && USE_HMLIB_DXAREA<202
#		pragma message("hmLib : # error : [dxArea.hpp] basic_dxMoveAreaType�̊֐��Ƀo�O�����݂��܂��Bv2_02(v2_08_02)�ȏ�ւ̑Ή��𐄏����܂��B")
#	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_DXAREA
#	define INC_CHG_HMLIB_DXAREA
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMLIB_DXAREA
#		if 1<=OUT_CHG_HMLIB && 204<CHG_HMLIB_DXAREA
#			pragma message("chg_hmLib : # error : [dxArea.hpp] ��Ή��o�[�W�����ł��Bv2_04����(v3_00_00�ȍ~)�́A�g�p�ł��܂���B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXAREA<203 && 203<=USE_HMLIB_DXAREA
#			pragma message("chg_hmLib : # error : [dxArea.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv2_03(v2_08_03)���O�́AdxFn�̒�`���قȂ�܂��B")
#		elif 1<=OUT_CHG_HMLIB && USE_HMLIB_DXAREA<203 && 203<=CHG_HMLIB_DXAREA
#			pragma message("chg_hmLib : # error : [dxArea.hpp] ����݊����͕ۏ؂���Ă��܂���Bv2_03(v2_08_03)�ȍ~�́AdxFn�̒�`���قȂ�܂��B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXAREA<202 && 202<=USE_HMLIB_DXAREA
#			pragma message("chg_hmLib : # error : [dxArea.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv2_02(v2_08_02)���O�́AhmoBox���p�����Ă��܂���B�ꕔ�ɒv���I�ȃo�O�����݂��܂��B")
#		elif 1<=OUT_CHG_HMLIB && USE_HMLIB_DXAREA<202 && 202<=CHG_HMLIB_DXAREA
#			pragma message("chg_hmLib : # error : [dxArea.hpp] ����݊����͕ۏ؂���Ă��܂���Bv2_02(v2_08_02)�ȍ~�́AhmoBox���p������`�ƂȂ�܂��B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXAREA<201 && 201<=USE_HMLIB_DXAREA
#			pragma message("chg_hmLib : # error : [dxArea.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv2_01(v2_08_00)���O�́AdxArea�̕`��p�����o�ϐ����֐��|�C���^�����g�p�ł��܂���B")
#		elif 1<=OUT_CHG_HMLIB && USE_HMLIB_DXAREA<201 && 201<=CHG_HMLIB_DXAREA
#			pragma message("chg_hmLib : # error : [dxArea.hpp] ����݊����͕ۏ؂���Ă��܂���Bv2_01(v2_08_00)�ȍ~�́AdxArea�̕`��p�����o�ϐ����֐��|�C���^����֐��I�u�W�F�N�g�ɒu�������܂��B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXAREA<200 && 200<=USE_HMLIB_DXAREA
#			pragma message("chg_hmLib : # error : [dxArea.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv2_00(v2_01_00)���O�́A�֐��̈����̕ύX������܂��B")
#		elif 1<=OUT_CHG_HMLIB && USE_HMLIB_DXAREA<200 && 200<=CHG_HMLIB_DXAREA
#			pragma message("chg_hmLib : # error : [dxArea.hpp] ����݊����͕ۏ؂���Ă��܂���Bv2_00(v2_01_00)�ȍ~�́A�֐��̈����̕ύX������܂��B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXAREA<100
#			pragma message("chg_hmLib : # error : [dxArea.hpp] ��Ή��o�[�W�����ł��Bv1_00(v2_00_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#	/* dxObject�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_DXAREA
#		ifndef CHG_HMLIB_DXOBJECT
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [dxArea.hpp] dxObject.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��dxObject.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/dxObject.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/dxObject.hpp"
#			endif
#		endif
#//		if 1<=OUT_CHG_HMLIB && 100<=CHG_HMLIB_DXAREA && CHG_HMLIB_DXOBJECT<100
#//			pragma message("chg_hmLib : # error : [dxArea.hpp] dxObject.hpp v1_00(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#//		elif 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXAREA<100 && 100<=CHG_HMLIB_DXOBJECT
#//			pragma message("chg_hmLib : # error : [dxArea.hpp] dxObject.hpp v1_00(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#//		endif
#		if 1<=OUT_CHG_HMLIB && ( CHG_HMLIB_DXOBJECT<100 || CHG_HMLIB_DXOBJECT==999)
#			pragma message("chg_hmLib : # error : [dxArea.hpp] �g�p�\��dxObject.hpp�����݂��܂���B")
#		endif
#	endif
#
#	endif
#endif
