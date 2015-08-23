/*
dxBasic�p�~
dxBasic_v2_05
	winTime.hpp��p�~���AhmTime.hpp�ɑΉ�
dxBasic_v2_04
	hmBasic.h v1_3�ɑΉ�
dxBasic_v2_03
	dx::resetDrawScreen���s����NowScreen���ύX����Ȃ������o�O���C��
dxBasic_v2_02
	dxFont::make(...)������ɋ@�\���Ȃ������o�O���C��
dxBasic_v2_01
	dxGraph���摜�ۑ��ł��Ȃ��o�O���C��
	�`��\�ȃO���t�B�b�N�n���h�������dxBasicScreen,dxScreen�̒ǉ�
	dx::setDrawScreen�̈�����dxBasicScreen�ɕύX
dxBasic_v2_00
	DxLiv_V3�ɑΉ�
	dx::ini,dx::end�̒ǉ���dxManager�̔p�~
	DxLib�𗘗p����N���X�̃R���X�g���N�^�p�~
	dx namespace�ɑS�֐����ڍs
	�֐����̈ꕔ�ύX�A�N���X�Ԃœ��ꉻ
	dxColor_v2 �ɑΉ�
	dxColorSet.h�ɕ���
	dxAlign.hpp��POS::Position�𕪊��ϖ�
	dxInput�̕`��ł��Ȃ��Ȃ�o�O���C��
	�����n���h�������@�\�̂Ȃ�Unsafe�ȉ摜�N���X�AdxBasicGraph��ǉ�
	�����摜�N���X�AdxGraphs��ǉ�
	���z�摜�N���X�AdxImGraph�̐F/���ߓx�ւ̃A�N�Z�X�֐�������
	dxGraph��dxImGraph�̑��ݕϊ��@�\�ǉ�(�������load�֐��Ŏd�l)
	�`����e�w��N���X�AdxDMode�ǉ�
	�`��͈͎w��N���X�AdxDArea��ǉ�
*/
#ifndef VER_HMLIB_DXBASIC
#	define VER_HMLIB_DXBASIC 205
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_DXBASIC
#	if USE_HMLIB>=30000
#		define USE_HMLIB_DXBASIC 999
#	elif USE_HMLIB>=20702
#		define USE_HMLIB_DXBASIC 205
#	elif USE_HMLIB>=20600
#		define USE_HMLIB_DXBASIC 204
#	elif USE_HMLIB>=20500
#		define USE_HMLIB_DXBASIC 203
#	elif USE_HMLIB>=20200
#		define USE_HMLIB_DXBASIC 201
#	elif USE_HMLIB>=20000
#		define USE_HMLIB_DXBASIC 200
#	else
#		define USE_HMLIB_DXBASIC 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_DXBASIC
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_DXBASIC 999
#	elif CHG_HMLIB>=20702
#		define CHG_HMLIB_DXBASIC 205
#	elif CHG_HMLIB>=20600
#		define CHG_HMLIB_DXBASIC 204
#	elif CHG_HMLIB>=20500
#		define CHG_HMLIB_DXBASIC 203
#	elif CHG_HMLIB>=20200
#		define CHG_HMLIB_DXBASIC 201
#	elif CHG_HMLIB>=20000
#		define CHG_HMLIB_DXBASIC 200
#	else
#		define CHG_HMLIB_DXBASIC 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_DXBASIC
#	define INC_USE_HMLIB_DXBASIC
#
#	if USE_HMLIB_DXBASIC>205
#		error hmLib : # error : [dxBasic.hpp] ��Ή��o�[�W�����ł��Bv2_05����(v3_00_00�ȍ~)�́A�g�p�ł��܂���B
#	elif USE_HMLIB_DXBASIC==205
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [dxBasic.hpp] v2_05")
#		endif
#		include "hmLib_v2/dxBasic/dxBasic_v2_05.h"
#	elif USE_HMLIB_DXBASIC==204
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [dxBasic.hpp] v2_04")
#		endif
#		include "hmLib_v2/dxBasic/dxBasic_v2_04.h"
#	elif USE_HMLIB_DXBASIC==203
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [dxBasic.hpp] v2_03")
#		endif
#		include "hmLib_v2/dxBasic/dxBasic_v2_03.h"
#	elif USE_HMLIB_DXBASIC==201
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [dxBasic.hpp] v2_01")
#		endif
#		include "hmLib_v2/dxBasic/dxBasic_v2_01.h"
#	elif USE_HMLIB_DXBASIC==200
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [dxBasic.hpp] v2_00")
#		endif
#		include "hmLib_v2/dxBasic/dxBasic_v2_00.h"
#	else
#		error hmLib : # error : [dxBasic.hpp] ��Ή��o�[�W�����ł��Bv2_00(v2_00_00)���O�́A�g�p�ł��܂���B
#	endif
#
#	if 3<=OUT_USE_HMLIB && 100<USE_HMLIB_DXBASIC
#		pragma message("hmLib : # info  : [dxBasic.hpp] �p�~�o�[�W�����ł��Bv2_05����(v3_00_00�ȍ~)�́A�g�p�ł��܂���B")
#	endif
#	if 1<=OUT_USE_HMLIB && USE_HMLIB_DXBASIC<203
#		pragma message("hmLib : # error : [dxBasic.hpp] dxFont,�X�N���[���֘A�̃o�O�����݂��܂��Bv2_03(v2_05_00)�ȏ�ւ̑Ή��𐄏����܂��B")
#	endif
#	if 1<=OUT_USE_HMLIB && USE_HMLIB_DXBASIC<201
#		pragma message("hmLib : # error : [dxBasic.hpp] �X�N���[���֘A�̃o�O�����݂��܂��Bv2_01(v2_02_00)�ȏ�ւ̑Ή��𐄏����܂��B")
#	endif
#
#	endif
#endif)
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_DXBASIC
#	define INC_CHG_HMLIB_DXBASIC
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMLIB_DXBASIC
#		if 1<=OUT_CHG_HMLIB && 205<CHG_HMLIB_DXBASIC
#			pragma message("chg_hmLib : # error : [dxBasic.hpp] ��Ή��o�[�W�����ł��Bv2_05����(v3_00_00�ȍ~)�́A�g�p�ł��܂���B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXBASIC<203 && 203<=USE_HMLIB_DXBASIC
#			pragma message("chg_hmLib : # error : [dxBasic.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv2_03(v2_05_00)���O�́AdxFont,�X�N���[���֘A�̃o�O�����݂��܂��B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXBASIC<201 && 201<=USE_HMLIB_DXBASIC
#			pragma message("chg_hmLib : # error : [dxBasic.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv2_01(v2_02_00)���O�́A�X�N���[���֘A�̃o�O�����݂��܂��B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXBASIC<200
#			pragma message("chg_hmLib : # error : [dxBasic.hpp] ��Ή��o�[�W�����ł��Bv2_00(v2_00_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#	/* hmTime�Ƃ̌݊����ɂ���*/
#	if 205<=CHG_HMLIB_DXBASIC
#		ifndef CHG_HMLIB_HMTIME
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [dxBasic.hpp] hmTime.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��hmTime.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/hmTime.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/hmTime.hpp"
#			endif
#		endif
#//		if 1<=OUT_CHG_HMLIB && 100<=CHG_HMLIB_DXBASIC && CHG_HMLIB_HMTIME<100
#//			pragma message("chg_hmLib : # error : [dxBasic.hpp] hmTime.hpp v1_00(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#//		elif 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXBASIC<100 && 100<=CHG_HMLIB_HMTIME
#//			pragma message("chg_hmLib : # error : [dxBasic.hpp] hmTime.hpp v1_00(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#//		endif
#		if 1<=OUT_CHG_HMLIB && ( CHG_HMLIB_HMTIME<100 || CHG_HMLIB_HMTIME==999)
#			pragma message("chg_hmLib : # error : [dxBasic.hpp] �g�p�\��hmTime.hpp�����݂��܂���B")
#		endif
#	endif
#	/* winTime�Ƃ̌݊����ɂ���*/
#	if 200<=CHG_HMLIB_DXBASIC && CHG_HMLIB_DXBASIC<205
#		ifndef CHG_HMLIB_WINTIME
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [dxBasic.hpp] winTime.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��winTime.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/winTime.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/winTime.hpp"
#			endif
#		endif
#//		if 1<=OUT_CHG_HMLIB && 100<=CHG_HMLIB_DXBASIC && CHG_HMLIB_WINTIME<100
#//			pragma message("chg_hmLib : # error : [dxBasic.hpp] winTime.hpp v1_00(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#//		elif 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXBASIC<100 && 100<=CHG_HMLIB_WINTIME
#//			pragma message("chg_hmLib : # error : [dxBasic.hpp] winTime.hpp v1_00(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#//		endif
#		if 1<=OUT_CHG_HMLIB && ( CHG_HMLIB_WINTIME<100 || CHG_HMLIB_WINTIME==999)
#			pragma message("chg_hmLib : # error : [dxBasic.hpp] �g�p�\��winTime.hpp�����݂��܂���B")
#		endif
#	endif
#	/* hmBasic�Ƃ̌݊����ɂ���*/
#	if 200<=CHG_HMLIB_DXBASIC
#		ifndef CHG_HMLIB_HMBASIC
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [dxBasic.hpp] hmBasic.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��hmBasic.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/hmBasic.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/hmBasic.hpp"
#			endif
#		endif
#//		if 1<=OUT_CHG_HMLIB && 100<=CHG_HMLIB_DXBASIC && CHG_HMLIB_HMBASIC<100
#//			pragma message("chg_hmLib : # error : [dxBasic.hpp] hmBasic.hpp v1_00(v3_00_00)���O�Ƃ́A�݊���������܂���B")
#//		elif 1<=OUT_CHG_HMLIB && CHG_HMLIB_DXBASIC<100 && 100<=CHG_HMLIB_HMBASIC
#//			pragma message("chg_hmLib : # error : [dxBasic.hpp] hmBasic.hpp v1_00(v3_00_00)�ȍ~�Ƃ́A�݊���������܂���B")
#//		endif
#		if 1<=OUT_CHG_HMLIB && ( CHG_HMLIB_HMBASIC<100 || CHG_HMLIB_HMBASIC==999)
#			pragma message("chg_hmLib : # error : [dxBasic.hpp] �g�p�\��hmBasic.hpp�����݂��܂���B")
#		endif
#	endif
#
#	endif
#endif
