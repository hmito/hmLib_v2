/*
hmDebug �p�~
	��p�́Adebugstream.hpp
hmDebug_v1_00.hpp
	debug���ɏo�͂���ostream hm::dout
	debug���̂ݏo�͂���flow hm::debugflow
	debug���̂ݏo�͂���cout hm::d_cout
*/
#ifndef VER_HMLIB_HMDEBUG
#	define VER_HMLIB_HMDEBUG 999
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_HMDEBUG
#	if USE_HMLIB>=30000
#		define USE_HMLIB_HMDEBUG 999
#	elif USE_HMLIB>=20902
#		define USE_HMLIB_HMDEBUG 100
#	else
#		define USE_HMLIB_HMDEBUG 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_HMDEBUG
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_HMDEBUG 999
#	elif CHG_HMLIB>=20902
#		define CHG_HMLIB_HMDEBUG 100
#	else
#		define CHG_HMLIB_HMDEBUG 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_HMDEBUG
#	define INC_USE_HMLIB_HMDEBUG
#
#	if USE_HMLIB_HMDEBUG>100
#		error hmLib : # error : [hmDebug.hpp] �p�~�o�[�W�����ł��Bv1_01����(v3_00_00�ȍ~)�́A�g�p�ł��܂���B��p�́Adebugstream.hpp�ł��B
#	elif USE_HMLIB_HMDEBUG==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [hmDebug.hpp] v1_00")
#		endif
#		include "hmLib_v2/hmDebug/hmDebug_v1_00.h"
#	else
#		error hmLib : # error : [hmDebug.hpp] ��Ή��o�[�W�����ł��Bv1_00(v2_09_02)���O�́A�g�p�ł��܂���B
#	endif
#
#	if 3<=OUT_USE_HMLIB && 100<=USE_HMLIB_HMDEBUG
#		pragma message("hmLib : # info  : [hmDebug.hpp] windows.h�ˑ��t�@�C���ł��B")
#	endif
#
#	endif
#endif
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_HMDEBUG
#	define INC_CHG_HMLIB_HMDEBUG
#
#	/*���g�Ƃ̌݊���*/
#	if 100<=USE_HMLIB_HMDEBUG
#		if 1<=OUT_CHG_HMLIB && 101<CHG_HMLIB_HMDEBUG
#			pragma message("chg_hmLib : # error : [hmDebug.hpp] �p�~�o�[�W�����ł��Bv1_01����(v3_00_00�ȍ~)�́A�g�p�ł��܂���B��p�́Adebugstream.hpp�ł��B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_HMDEBUG<100
#			pragma message("chg_hmLib : # error : [hmDebug.hpp] ��Ή��o�[�W�����ł��Bv1_00(v2_09_02)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#	/* hmStreamBuf�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_HMDEBUG && CHG_HMLIB_HMDEBUG<=100
#		ifndef CHG_HMLIB_HMSTREAMBUF
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [hmDebug.hpp] hmStreamBuf.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��hmStreamBuf.hpp��include���܂��B")
#			endif
#			ifdef CAN_USE_HMLIB
#				undef CAN_USE_HMLIB
#				include "hmLib_v2/hmStreamBuf.hpp"
#				define CAN_USE_HMLIB
#			else
#				include "hmLib_v2/hmStreamBuf.hpp"
#			endif
#		endif
#	endif
#
#	endif
#endif
