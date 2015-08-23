/*
hmBasic.hpp�p�~ v3_00_00
	��{�ƂȂ�t�@�C���𓝍����Ă��܂��ƁA�ꕔ�̕ύX�����C�u�����S�̂ɋy�ڂ��e�����傫������
	�񋟂���Ă����啔���̋@�\�́A�����̌�p�t�@�C���֌p�������
		hmStr ������֘A
		hmAlgorithm ���l�����֘A
		hmType �^�֘A
		hmPrcTime ���Ԋ֘A
		hmBit bit�����֘A
hmBasic_v1_07
	system�֐���ǉ�
hmBasic_v1_06
	mod�̒v���I�ȃo�O���C��
hmBasic_v1_05
	str,c_str��hm�ɒǉ�
hmBasic_v1_04
	mod�ǉ�
hmBasic_v1_03
	char* getTmpStrAdress()��hm�Ɉړ�
	int getTmpStrAdressSize()��ǉ�
hmBasic_v1_02
	bitxor�̒ǉ�
hmBasic_v1_01
	min3�l,max3�l,med3�̒ǉ�
*/
#ifndef VER_HMLIB_HMBASIC
#	define VER_HMLIB_HMBASIC 999
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_HMBAISC
#	if USE_HMLIB>=30000
#		define USE_HMLIB_HMBASIC 999
#	elif USE_HMLIB>=20903
#		define USE_HMLIB_HMBASIC 107
#	elif USE_HMLIB>=20807
#		define USE_HMLIB_HMBASIC 106
#	elif USE_HMLIB>=20805
#		define USE_HMLIB_HMBASIC 105
#	elif USE_HMLIB>=20702
#		define USE_HMLIB_HMBASIC 104
#	elif USE_HMLIB>=20502
#		define USE_HMLIB_HMBASIC 103
#	elif USE_HMLIB>=20500
#		define USE_HMLIB_HMBASIC 102
#	elif USE_HMLIB>=20000
#		define USE_HMLIB_HMBASIC 100
#	else
#		define USE_HMLIB_HMBASIC 0
#	endif
#endif
#
#if defined CHG_HMLIB &&  !defined CHG_HMLIB_HMBAISC
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_HMBASIC 999
#	elif CHG_HMLIB>=20903
#		define CHG_HMLIB_HMBASIC 107
#	elif CHG_HMLIB>=20807
#		define CHG_HMLIB_HMBASIC 106
#	elif CHG_HMLIB>=20805
#		define CHG_HMLIB_HMBASIC 105
#	elif CHG_HMLIB>=20702
#		define CHG_HMLIB_HMBASIC 104
#	elif CHG_HMLIB>=20502
#		define CHG_HMLIB_HMBASIC 103
#	elif CHG_HMLIB>=20500
#		define CHG_HMLIB_HMBASIC 102
#	elif CHG_HMLIB>=20000
#		define CHG_HMLIB_HMBASIC 100
#	else
#		define CHG_HMLIB_HMBASIC 0
#	endif
#endif
#
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_HMBASIC
#	define iNC_USE_HMLIB_HMBASIC
#
#	if USE_HMLIB_HMBASIC>107
#		error hmLib : [hmBasic.hpp] �p�~�o�[�W�����ł��Bv1_07����(v3_00_00�ȍ~)�͎g�p�ł��܂���B�ڍs��̊e�w�b�_�t�@�C�����g�p���Ă��������B
#	elif USE_HMLIB_HMBASIC==107
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [hmBasic.hpp] v1_07")
#		endif
#		include "hmLib_v2/hmBasic/hmBasic_v1_07.h"
#	elif USE_HMLIB_HMBASIC==106
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [hmBasic.hpp] v1_06")
#		endif
#		include "hmLib_v2/hmBasic/hmBasic_v1_06.h"
#	elif USE_HMLIB_HMBASIC==105
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [hmBasic.hpp] v1_05")
#		endif
#		include "hmLib_v2/hmBasic/hmBasic_v1_05.h"
#	elif USE_HMLIB_HMBASIC==104
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [hmBasic.hpp] v1_04")
#		endif
#		include "hmLib_v2/hmBasic/hmBasic_v1_04.h"
#	elif USE_HMLIB_HMBASIC==103
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [hmBasic.hpp] v1_03")
#		endif
#		include "hmLib_v2/hmBasic/hmBasic_v1_03.h"
#	elif USE_HMLIB_HMBASIC==102
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [hmBasic.hpp] v1_02")
#		endif
#		include "hmLib_v2/hmBasic/hmBasic_v1_02.h"
#	elif USE_HMLIB_HMBASIC==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [hmBasic.hpp] v1_00")
#		endif
#		include "hmLib_v2/hmBasic/hmBasic_v1_00.h"
#	else
#		error hmLib : [hmBasic.hpp] ��Ή��o�[�W�����ł��Bv1_00(v2_00_00)���O�́A�g�p�ł��܂���B
#	endif
#
#	if 3<=OUT_USE_HMLIB && 100<=USE_HMLIB_HMBASIC
#		pragma message("hmLib : # info  : [hmBasic.hpp] v3_00_00�ȏ�ł́AhmBasic.hpp�͕����̃t�@�C���ɉ�̂���܂��B")
#	endif
#	if 2<=OUT_USE_HMLIB && 104<=USE_HMLIB_HMBASIC && USE_HMLIB_HMBASIC<106
#		pragma message("hmLib : #warning: [hmBasic.hpp] hmstd::mod�ɒv���I�ȃo�O�����݂��܂��Bv1_06(v2_08_07)�ȏ�ւ̍X�V�𐄏����܂��B")
#	endif
#
#	endif
#endif
#
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_HMBASIC
#	define INC_CHG_HMLIB_HMBASIC
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMLIB_HMBASIC
#		if 1<=OUT_CHG_HMLIB && 107<CHG_HMLIB_HMBASIC
#			pragma message("chg_hmLib : # error : [hmBasic.hpp] �p�~�o�[�W�����ł��Bv1_07����(v3_00_00�ȍ~)�͎g�p�ł��܂���B�ڍs��̊e�w�b�_�t�@�C�����g�p���Ă��������B")
#		endif
#		if 1<=OUT_CHG_HMLIB && 104<=CHG_HMLIB_HMBASIC && CHG_HMLIB_HMBASIC<107 && 107<=USE_HMLIB_HMBASIC
#			pragma message("chg_hmLib : # error : [hmBasic.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv1_07(v2_09_03)�ȏ�ł���system�֐��͎g�p�ł��܂���B")
#		elif 104<=USE_HMLIB_HMBASIC && USE_HMLIB_HMBASIC<107 && 107<=CHG_HMLIB_HMBASIC
#		endif
#		if 1<=OUT_CHG_HMLIB && 104<=CHG_HMLIB_HMBASIC && CHG_HMLIB_HMBASIC<106 && 106<=USE_HMLIB_HMBASIC
#			pragma message("chg_hmLib : # error : [hmBasic.hpp] �O���݊����͕ۏ؂���Ă��܂���Bhmstd::mod�ɒv���I�ȃo�O�����݂��܂��Bv1_06(v2_08_07)�ȏ�̗��p�𐄏����܂��B")
#		elif 104<=USE_HMLIB_HMBASIC && USE_HMLIB_HMBASIC<106 && 106<=CHG_HMLIB_HMBASIC
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_HMBASIC<105 && 105<=USE_HMLIB_HMBASIC
#			pragma message("chg_hmLib : # error : [hmBasic.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv1_05(v2_08_05)���O�ł́Astr,c_str���g�p�s�\�ɂȂ�܂��B")
#		elif USE_HMLIB_HMBASIC<105 && 105<=CHG_HMLIB_HMBASIC
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_HMBASIC<104 && 104<=USE_HMLIB_HMBASIC
#			pragma message("chg_hmLib : # error : [hmBasic.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv1_04(v2_07_02)���O�ł́Amod���g�p�s�\�ɂȂ�܂��B")
#		elif USE_HMLIB_HMBASIC<104 && 104<=CHG_HMLIB_HMBASIC
#		endif
#		if 2<=OUT_CHG_HMLIB && CHG_HMLIB_HMBASIC<103 && 103<=USE_HMLIB_HMBASIC
#			pragma message("chg_hmLib : #warning: [hmBasic.hpp] �ꕔ���O��Ԃɂ�����d�l�ύX�����݂��܂��B")
#		elif 2<=OUT_CHG_HMLIB && USE_HMLIB_HMBASIC<103 && 103<=CHG_HMLIB_HMBASIC
#			pragma message("chg_hmLib : #warning: [hmBasic.hpp] �ꕔ���O��Ԃɂ�����d�l�ύX�����݂��܂��B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_HMBASIC<102 && 102<=USE_HMLIB_HMBASIC
#			pragma message("chg_hmLib : # error : [hmBasic.hpp] �O���݊����͕ۏ؂���Ă��܂���Bv1_02(v2_05_00)���O�ł́Abit�֘A�̊֐����g�p�s�\�ɂȂ�܂��B")
#		elif USE_HMLIB_HMBASIC<102 && 102<=CHG_HMLIB_HMBASIC
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_HMBASIC<100 && 100<=USE_HMLIB_HMBASIC
#			pragma message("chg_hmLib : # error : [hmBasic.hpp] ��Ή��o�[�W�����ł��Bv1_00(v2_00_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#
#	endif
#endif
