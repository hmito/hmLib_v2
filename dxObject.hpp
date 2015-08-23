/*
dxObject�p�~
dxObject_v2_06.hpp
	dxO��Object�A�N�Z�X�N���X����accessor�ɕύX
	dxO::accessor�̃A�N�Z�X���Z�q��iterator�ɏ���
dxObject_v2_05.hpp
	dxArObject���`��͈͂𐧌����Ă��������C��
dxObject_v2_04.hpp
	dxFn��`��֐��I�u�W�F�N�g�Ƃ��ē���
	dxFnObject��dxFn�ɓ���
	dxArObject��ǉ�
dxObject_v2_03.hpp
	dxReObject��ǉ�
dxObject_v2_02.hpp
	�֐��|�C���^�p�֐��I�u�W�F�N�gdxFn�ǉ�
	dxFnObject���֐��I�u�W�F�N�g�p�ɉ���
dxObject_v2_01.hpp
	dxBasic_v2_01�ɑΉ�
dxObject_v2_00.hpp
	active�̈ʒu��pos�̎��Ɉړ�
dxObject_v1_01.hpp
	dxoProgress�ǉ�
	dxoBasicBut��active�łȂ������������o�O���C��
dxObject_v1_00.hpp
*/
#ifndef VER_HMLIB_DXOBJECT
#	define VER_HMLIB_DXOBJECT 206
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_DXOBJECT
#	if USE_HMLIB>=30000
#		define USE_HMLIB_DXOBJECT 999
#	elif USE_HMLIB>=20901
#		define USE_HMLIB_DXOBJECT 206
#	elif USE_HMLIB>=20804
#		define USE_HMLIB_DXOBJECT 205
#	elif USE_HMLIB>=20803
#		define USE_HMLIB_DXOBJECT 204
#	elif USE_HMLIB>=20802
#		define USE_HMLIB_DXOBJECT 203
#	elif USE_HMLIB>=20800
#		define USE_HMLIB_DXOBJECT 202
#	elif USE_HMLIB>=20200
#		define USE_HMLIB_DXOBJECT 201
#	elif USE_HMLIB>=20100
#		define USE_HMLIB_DXOBJECT 200
#	elif USE_HMLIB>=20001
#		define USE_HMLIB_DXOBJECT 101
#	elif USE_HMLIB>=20000
#		define USE_HMLIB_DXOBJECT 100
#	else
#		define USE_HMLIB_DXOBJECT 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_DXOBJECT
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_DXOBJECT 999
#	elif CHG_HMLIB>=20901
#		define CHG_HMLIB_DXOBJECT 206
#	elif CHG_HMLIB>=20804
#		define CHG_HMLIB_DXOBJECT 205
#	elif CHG_HMLIB>=20803
#		define CHG_HMLIB_DXOBJECT 204
#	elif CHG_HMLIB>=20802
#		define CHG_HMLIB_DXOBJECT 203
#	elif CHG_HMLIB>=20800
#		define CHG_HMLIB_DXOBJECT 202
#	elif CHG_HMLIB>=20200
#		define CHG_HMLIB_DXOBJECT 201
#	elif CHG_HMLIB>=20100
#		define CHG_HMLIB_DXOBJECT 200
#	elif CHG_HMLIB>=20001
#		define CHG_HMLIB_DXOBJECT 101
#	elif CHG_HMLIB>=20000
#		define CHG_HMLIB_DXOBJECT 100
#	else
#		define CHG_HMLIB_DXOBJECT 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_DXOBJECT
#	define INC_USE_HMLIB_DXOBJECT
#
#	if USE_HMLIB_DXOBJECT>206
#		error hmLib : # error : [dxObject.hpp] ��Ή��o�[�W�����ł��Bv2_06����(v3_00_00�ȍ~)�́A�g�p�ł��܂���B
#	elif USE_HMLIB_DXOBJECT==206
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [dxObject.hpp] v2_06")
#		endif
#		include "hmLib_v2/dxObject/dxObject_v2_06.hpp"
#	elif USE_HMLIB_DXOBJECT==205
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [dxObject.hpp] v2_05")
#		endif
#		include "hmLib_v2/dxObject/dxObject_v2_05.hpp"
#	elif USE_HMLIB_DXOBJECT==204
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [dxObject.hpp] v2_04")
#		endif
#		include "hmLib_v2/dxObject/dxObject_v2_04.hpp"
#	elif USE_HMLIB_DXOBJECT==203
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [dxObject.hpp] v2_03")
#		endif
#		include "hmLib_v2/dxObject/dxObject_v2_03.hpp"
#	elif USE_HMLIB_DXOBJECT==202
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [dxObject.hpp] v2_02")
#		endif
#		include "hmLib_v2/dxObject/dxObject_v2_02.hpp"
#	elif USE_HMLIB_DXOBJECT==201
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [dxObject.hpp] v2_01")
#		endif
#		include "hmLib_v2/dxObject/dxObject_v2_01.hpp"
#	elif USE_HMLIB_DXOBJECT==200
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [dxObject.hpp] v2_00")
#		endif
#		include "hmLib_v2/dxObject/dxObject_v2_00.hpp"
#	elif USE_HMLIB_DXOBJECT==101
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [dxObject.hpp] v1_01")
#		endif
#		include "hmLib_v2/dxObject/dxObject_v1_01.hpp"
#	elif USE_HMLIB_DXOBJECT==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [dxObject.hpp] v1_00")
#		endif
#		include "hmLib_v2/dxObject/dxObject_v1_00.hpp"
#	else
#		error hmLib : # error : [dxObject.hpp] ��Ή��o�[�W�����ł��Bv1_00(v2_00_00)���O�́A�g�p�ł��܂���B
#	endif
#
#//	if 1<=OUT_USE_HMLIB && 100<=USE_HMLIB_DXOBJECT && USE_HMLIB_DXOBJECT<101
#//		pragma message("hmLib : # error : [dxObject.hpp] ...�Bv1_01(v3_01_00)�ȏ�ւ̑Ή��𐄏����܂��B")
#//	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_DXOBJECT
#	define INC_CHG_HMLIB_DXOBJECT
#
#	define FILENAME __FILE__
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMLIB_DXOBJECT
#		if 1<=OUT_CHG_HMLIB && 206<CHG_HMLIB_DXOBJECT
#			pragma message("chg_hmLib : # error : [dxObject.hpp] ��Ή��o�[�W�����ł��Bv2_06����(v3_00_00�ȍ~)�́A�g�p�ł��܂���B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXOBJECT<206 && 206<=USE_HMLIB_DXOBJECT
#			pragma message("chg_hmLib : # error : [dxObject.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv2_06(v2_09_01)���O�́AdxO::accessor��dxO::Acs�Ƃ��Đ݌v����Ă��܂��B")
#		elif 1<=OUT_CHG_HMLIB && USE_HMLIB_DXOBJECT<206 && 206<=CHG_HMLIB_DXOBJECT
#			pragma message("chg_hmLib : # error : [dxObject.hpp] ����݊����͕ۏ؂���Ă��܂���Bv2_06(v2_09_01)�ȍ~�́AdxO::Acs��dxO::accessor�Ƃ��Đ݌v����Ă��܂��B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXOBJECT<204 && 204<=USE_HMLIB_DXOBJECT
#			pragma message("chg_hmLib : # error : [dxObject.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv2_04(v2_08_03)���O�́AdxFn�Ɋ֘A����N���X�̒�`���啝�ɕς���Ă��܂��B")
#		elif 1<=OUT_CHG_HMLIB && USE_HMLIB_DXOBJECT<204 && 204<=CHG_HMLIB_DXOBJECT
#			pragma message("chg_hmLib : # error : [dxObject.hpp] ����݊����͕ۏ؂���Ă��܂���Bv2_04(v2_08_03)�ȍ~�́AdxFn�Ɋ֘A����N���X�̒�`���啝�ɕς���Ă��܂��B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXOBJECT<203 && 203<=USE_HMLIB_DXOBJECT
#			pragma message("chg_hmLib : # error : [dxObject.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv2_03(v2_08_02)���O�́AdxReObject���g�p�ł��Ȃ��Ȃ�܂��B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXOBJECT<202 && 202<=USE_HMLIB_DXOBJECT
#			pragma message("chg_hmLib : # error : [dxObject.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv2_02(v2_08_00)���O�́AdxFnObject�̕`��p�����o�ϐ��́A�֐��I�u�W�F�N�g����֐��|�C���^�ɒu�������܂��B")
#		elif 1<=OUT_CHG_HMLIB && USE_HMLIB_DXOBJECT<202 && 202<=CHG_HMLIB_DXOBJECT
#			pragma message("chg_hmLib : # error : [dxObject.hpp] ����݊����͕ۏ؂���Ă��܂���Bv2_02(v2_08_00)�ȍ~�́AdxFnObject�̕`��p�����o�ϐ��́A�֐��|�C���^����֐��I�u�W�F�N�g�ɒu�������܂��B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXOBJECT<200 && 200<=USE_HMLIB_DXOBJECT
#			pragma message("chg_hmLib : # error : [dxObject.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv2_00(v2_01_00)���O�́Adraw�֐��̈����ύX������܂��B")
#		elif 1<=OUT_CHG_HMLIB && USE_HMLIB_DXOBJECT<200 && 200<=CHG_HMLIB_DXOBJECT
#			pragma message("chg_hmLib : # error : [dxObject.hpp] ����݊����͕ۏ؂���Ă��܂���Bv2_00(v2_01_00)�ȍ~�́Adraw�֐��̈����ύX������܂��B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXOBJECT<101 && 101<=USE_HMLIB_DXOBJECT
#			pragma message("chg_hmLib : # error : [dxObject.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv1_01(v2_00_01)���O�́AdxBut�̃o�O�����݂��܂��BdxProgress���g�p�s�\�ƂȂ�܂��B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXOBJECT<100
#			pragma message("chg_hmLib : # error : [dxObject.hpp] ��Ή��o�[�W�����ł��Bv1_00(v2_00_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#	/* dxBasic�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_DXOBJECT
#		ifndef CHG_HMLIB_DXBASIC
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [dxObject.hpp] dxBasic.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��dxBasic.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/dxBasic.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/dxBasic.hpp"
#			endif
#		endif
#//		if 1<=OUT_CHG_HMLIB && 100<=CHG_HMLIB_DXOBJECT && CHG_HMLIB_DXBASIC<100
#//			pragma message("chg_hmLib : # error : [dxObject.hpp] dxBasic.hpp v1_00(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#//		elif 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXOBJECT<100 && 100<=CHG_HMLIB_DXBASIC
#//			pragma message("chg_hmLib : # error : [dxObject.hpp] dxBasic.hpp v1_00(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#//		endif
#		if 1<=OUT_CHG_HMLIB && ( CHG_HMLIB_DXBASIC<100 || CHG_HMLIB_DXBASIC==999)
#			pragma message("chg_hmLib : # error : [dxObject.hpp] �g�p�\��dxBasic.hpp�����݂��܂���B")
#		endif
#	endif
#	/* hmObject�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_DXOBJECT
#		ifndef CHG_HMLIB_HMOBJECT
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [dxObject.hpp] hmObject.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��hmObject.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/hmObject.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/hmObject.hpp"
#			endif
#		endif
#//		if 1<=OUT_CHG_HMLIB && 100<=CHG_HMLIB_DXOBJECT && CHG_HMLIB_HMOBJECT<100
#//			pragma message("chg_hmLib : # error : [dxObject.hpp] hmObject.hpp v1_00(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#//		elif 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXOBJECT<100 && 100<=CHG_HMLIB_HMOBJECT
#//			pragma message("chg_hmLib : # error : [dxObject.hpp] hmObject.hpp v1_00(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#//		endif
#		if 1<=OUT_CHG_HMLIB && ( CHG_HMLIB_HMOBJECT<100 || CHG_HMLIB_HMOBJECT==999)
#			pragma message("chg_hmLib : # error : [dxObject.hpp] �g�p�\��hmObject.hpp�����݂��܂���B")
#		endif
#	endif
#
#	endif
#endif
