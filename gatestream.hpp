#ifndef VER_HMLIB_GATESTREAM
#	define VER_HMLIB_GATESTREAM 999
#endif
#ifndef INC_HMLIB
#	include "hmLib_v2/hmLib.h"
#endif
#
#ifndef USE_HMLIB_GATESTREAM
#	if USE_HMLIB>=30000
#		define USE_HMLIB_GATESTREAM 999
#	elif USE_HMLIB>=20000
#		define USE_HMLIB_GATESTREAM 100
#	else
#		define USE_HMLIB_GATESTREAM 0
#	endif
#endif
#if defined CHG_HMLIB && !defined CHG_HMLIB_GATESTREAM
#	if CHG_HMLIB>=30000
#		define CHG_HMLIB_GATESTREAM 999
#	elif CHG_HMLIB>=20000
#		define CHG_HMLIB_GATESTREAM 100
#	else
#		define CHG_HMLIB_GATESTREAM 0
#	endif
#endif
#ifdef CAN_USE_HMLIB
#	ifndef INC_USE_HMLIB_GATESTREAM
#	define INC_USE_HMLIB_GATESTREAM
#
#	if USE_HMLIB_GATESTREAM>100
#		error hmLib : [gatestream.hpp] �p�~�o�[�W�����ł��Bv1_00����(v3_00_00�ȍ~)�́A�g�p�ł��܂���BhmGate.hpp���g�p���Ă��������B
#	elif USE_HMLIB_GATESTREAM==100
#		if 1<=OUT_USE_HMLIB
#			pragma message("hmLib : [gatestream.hpp] v1_00")
#		endif
#		include "hmLib_v2/gatestream/gatestream_v1_00.hpp"
#	else
#		error hmLib : [gatestream.hpp] ��Ή��o�[�W�����ł��Bv1_00(v2_00_00)���O�́A�g�p�ł��܂���B
#	endif
#
#	if 3<=OUT_USE_HMLIB && 100<=USE_HMLIB_GATESTREAM
#		pragma message("hmLib : # info  : [gatestream.hpp] v3_00_00�ȏ�ł́Agatestream.hpp��hmGate.hpp�Ɉڍs���܂��B")
#	endif
#
#	endif
#endif
#
#ifdef CAN_CHG_HMLIB
#	ifndef INC_CHG_HMLIB_GATESTREAM
#	define INC_CHG_HMLIB_GATESTREAM
#
#	/*���g�̌݊����ɂ���*/
#	if 100<=USE_HMLIB_GATESTREAM
#		if 1<=OUT_CHG_HMLIB && 100<CHG_HMLIB_GATESTREAM
#			pragma message("chg_hmLib : # error : [gatestream.hpp] �p�~�o�[�W�����ł��Bv1_00����(v3_00_00�ȍ~)�́A�g�p�ł��܂���BhmGate.hpp���g�p���Ă��������B")
#		endif
#		if 1<=OUT_CHG_HMLIB && CHG_HMLIB_GATESTREAM<100
#			pragma message("chg_hmLib : # error : [gatestream.hpp] ��Ή��o�[�W�����ł��Bv1_00(v2_00_00)���O�́A�g�p�ł��܂���B")
#		endif
#	endif
#
#	/* hmStraemBuf�Ƃ̌݊����ɂ���*/
#	if 100<=CHG_HMLIB_GATESTREAM && CHG_HMLIB_GATTESTREAM<=100
#		ifndef CHG_HMLIB_HMSTREAMBUF
#			if 3<=OUT_CHG_HMLIB
#				pragma message("chg_hmLib : # info  : [gatestream.hpp] hmStreamBuf.hpp�Ɉˑ����Ă��܂��BCHG_HMLIB�p��hmStreamBuf.hpp��include���܂��B")
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
