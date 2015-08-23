/*
hmRand�p�~
	�����̋@�\��std::random�ɈڊǁB�f�t�H���g�ŏ����������random_engine��random.hpp�Ɍ�p�Ƃ��č쐬�B
hmRand_v2_04
	randNorm�̈�������var����sd�ւƕύX
hmRand_v2_03
	hmRand���֐��I�u�W�F�N�g�Ƃ��Ďg�p�\�ɕύX
	hm::getGlobalRand�ǉ�
hmRand_v2_02
	hmRand::gen_randNorm��ǉ��B���K����������{�����B
hmRand_v2_01
	hm::rand(int min,int max)�Ő���ɕ\������Ȃ��o�O���C��
hmRand_v2_00
	���������֐���ǉ�
		�ŏ��A�ő���w��ł��闐��
		32bit,64bit���ґΉ��̐��̗���
		�ŏ��A�ő���w��ł��镂������
		���K����
	�����o�֐����琳�K�������폜
	hm::rand�I�u�W�F�N�g���폜
*/
#ifndef VER_HMLIB_HMRAND
#	define VER_HMLIB_HMRAND 999
#endif
#
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_HMRAND
#	if USE_HMLIB>=30000
#		define USE_HMLIB_HMRAND 999
#	elif USE_HMLIB>=20905
#		define USE_HMLIB_HMRAND 204
#	elif USE_HMLIB>=20902
#		define USE_HMLIB_HMRAND 203
#	elif USE_HMLIB>=20807
#		define USE_HMLIB_HMRAND 202
#	elif USE_HMLIB>=20301
#		define USE_HMLIB_HMRAND 201
#	elif USE_HMLIB>=20300
#		define USE_HMLIB_HMRAND 200
#	elif USE_HMLIB>=20000
#		define USE_HMLIB_HMRAND 100
#	else
#		define USE_HMLIB_HMRAND 0
#	endif
#endif
#
#if defined CHG_HMLIB &&  !defined CHG_HMLIB_HMRAND
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_HMRAND 999
#	elif CHG_HMLIB>=20905
#		define CHG_HMLIB_HMRAND 204
#	elif CHG_HMLIB>=20902
#		define CHG_HMLIB_HMRAND 203
#	elif CHG_HMLIB>=20807
#		define CHG_HMLIB_HMRAND 202
#	elif CHG_HMLIB>=20301
#		define CHG_HMLIB_HMRAND 201
#	elif CHG_HMLIB>=20300
#		define CHG_HMLIB_HMRAND 200
#	elif CHG_HMLIB>=20000
#		define CHG_HMLIB_HMRAND 100
#	else
#		define CHG_HMLIB_HMRAND 0
#	endif
#endif
#
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_HMRAND
#	define INC_USE_HMLIB_HMRAND
#
#	if USE_HMLIB_HMRAND>204
#		error hmLib : [hmRand.hpp] �p�~�o�[�W�����ł��Bv2_04����(v3_00_00�ȍ~)�́A�g�p�ł��܂���B��p��random.hpp�����݂��܂��B
#	elif USE_HMLIB_HMRAND==204
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [hmRand.hpp] v2_04")
#		endif
#		include "hmLib_v2/hmRand/hmRand_v2_04.h"
#	elif USE_HMLIB_HMRAND==203
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [hmRand.hpp] v2_03")
#		endif
#		include "hmLib_v2/hmRand/hmRand_v2_03.h"
#	elif USE_HMLIB_HMRAND==202
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [hmRand.hpp] v2_02")
#		endif
#		include "hmLib_v2/hmRand/hmRand_v2_02.h"
#	elif USE_HMLIB_HMRAND==201
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [hmRand.hpp] v2_01")
#		endif
#		include "hmLib_v2/hmRand/hmRand_v2_01.h"
#	elif USE_HMLIB_HMRAND==200
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [hmRand.hpp] v2_00")
#		endif
#		include "hmLib_v2/hmRand/hmRand_v2_00.h"
#	elif USE_HMLIB_HMRAND==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [hmRand.hpp] v1_00")
#		endif
#		include "hmLib_v2/hmRand/hmRand_v1_00.h"
#	else
#		error hmLib : [hmRand.hpp] ��Ή��o�[�W�����ł��Bv1_00(v2_00_00)���O�́A�g�p�ł��܂���B
#	endif
#
#	if 3<=OUT_USE_HMLIB && 200<=USE_HMLIB_HMRAND && USE_HMLIB_HMRAND<204
#		pragma message("hmLib : #	info  : [hmRand.hpp] hm::randNorm�̈��������������Ӗ��������Ă��܂���Bv2_04(v2_09_05)�ȏ�ւ̑Ή��𐄏����܂��B")
#	endif
#	if 3<=OUT_USE_HMLIB && 200<=USE_HMLIB_HMRAND && USE_HMLIB_HMRAND<202
#		pragma message("hmLib : #	info  : [hmRand.hpp] ���K���z�����̐������{�����\�ł��Bv2_02(v2_08_07)�ȏ�ւ̑Ή��𐄏����܂��B")
#	endif
#	if 2<=OUT_USE_HMLIB && 200<=USE_HMLIB_HMRAND && USE_HMLIB_HMRAND<201
#		pragma message("hmLib : #warning: [hmRand.hpp] hm::rand�Ƀo�O�����݂��܂��Bv2_00(v2_03_01)�ȏ�ւ̑Ή��𐄏����܂��B")
#	endif
#	
#	endif
#endif
#
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_HMRAND
#	define INC_CHG_HMLIB_HMRAND
#
#	if 100<=USE_HMLIB_HMRAND
#		if 1<=OUT_CHG_HMLIB && 204<CHG_HMLIB_HMRAND
#			pragma message("chg_hmLib : #	error : [hmRand.hpp] �p�~�o�[�W�����ł��Bv2_04����(v3_00_00�ȍ~)�́A�g�p�ł��܂���B��p��random.hpp�����݂��܂��B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_HMRAND<203 && 203<=USE_HMLIB_HMRAND
#			pragma message("chg_hmLib : # error : [hmRand.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv2_03(v2_09_02)���O�́A�����̊֐��I�u�W�F�N�g�Ƃ��Ă͎g���܂���B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_HMRAND<201 && 201<=USE_HMLIB_HMRAND
#			pragma message("chg_hmLib : # error : [hmRand.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv2_01(v2_03_01)���O�́Ahm::rand�Ƀo�O�����݂��܂��B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_HMRAND<200 && 200<=USE_HMLIB_HMRAND
#			pragma message("chg_hmLib : # error : [hmRand.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv2_00(v2_03_00)���O�́A�֐��̕ύX������܂��B")
#		elif 1<=OUT_CHG_HMLIB && USE_HMLIB_HMRAND<200 && 200<=CHG_HMLIB_HMRAND
#			pragma message("chg_hmLib : # error : [hmRand.hpp] ����݊����͕ۏ؂���Ă��܂���Bv2_00(v2_03_00)�ȍ~�́A�֐��̕ύX������܂��B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_HMRAND<200
#			pragma message("chg_hmLib : #	error : [hmRand.hpp] ��Ή��o�[�W�����ł��Bv1_00(v2_00_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#
#	if 100<=CHG_HMLIB_HMRAND && CHG_HMLIB_HMRAND<=204
#		ifndef CHG_HMLIB_HMBASIC
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [hmRand.hpp] hmBasic.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��hmBasic.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/hmBasic.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/hmBasic.hpp"
#			endif
#		endif
#	endif
#
#	endif
#endif
