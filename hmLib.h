/*
////////////////////////
        hmLib        
////////////////////////
v3_00_00
	���C�u�����K��ύX
		percial_include�@�\�ǉ�
			hmLib�o�[�W�������قȂ�t�@�C���������C���N���[�h�\��
			#define USE_XXX VerNo �ƋL�q���邱�ƂŁAXXX�t�@�C���̃o�[�W�������w��\
			�v���O�������Â�hmLib�Ɉˑ����Ă��邪�A��v���ɉe���̂Ȃ��ǉ��@�\/�o�O�C����K�p�������ꍇ�Ɏg�p
		�o�͕\���ύX
			hmLib����̃��b�Z�[�W�o�͂̃O���[�h��ύX�\
			#include OUT_USE_HMLIB Lv ���邢�� OUT_CHG_HMLIB Lv �ƋL�q���邱�ƂŁA�o�͐ݒ�
			Lv	0:�����o�͂��Ȃ�(fatal error�͋����I�ɕ\��)
				1:error���x���܂ŕ\���@�傽�铮�삪�\�����ʓ����������A�[���ȏC�������݂���ꍇ�B
				2:warning���x���܂ŕ\���@�傽�铮��ɉe���͂Ȃ����󋵂ɉ����Ė��ƂȂ�A�ʏ�̏C�������݂���ꍇ�B
				3:info���x���܂ŕ\���@����ɖ��͂Ȃ����A�C�������݂���ꍇ�B
		upgrade_check�@�\�̕ύX
			�t�@�C���̃o�[�W�����A�b�v�̍ۂ̕\�����A�V���ɓ���
			#define CHG_HMLIB VerNo �ƋL�q���邱�ƂŁAhmLib�S�̂̃o�[�W�����ύX
			#define CHG_XXXXX VerNo �ƋL�q���邱�ƂŁAXXXXX�t�@�C���݂̂̃o�[�W�����ύX���w��\ �����ɕ����L�ډ\/CHG_HMLIB�Ƃ̕��p���\
	hmBasic.hpp�p�~
		��{�ƂȂ�t�@�C���𓝍����Ă��܂��ƁA�ꕔ�̕ύX�����C�u�����S�̂ɋy�ڂ��e�����傫������
		�񋟂���Ă����啔���̋@�\�́A�����̌�p�t�@�C���֌p�������
			hmStr ������֘A
			hmAlgorithm ���l�����֘A
			hmType �^�֘A
			hmPrcTime ���Ԋ֘A
			hmBit bit�����֘A
	hmStreamBuf_v1_02.hpp 
		hmLib_v3�ɑΉ�
			namespace hmLib�ɑΉ�
		class����ύX
			basic_buf_streambuf : �o�b�t�@�t�X�g���[���o�b�t�@���N���X
			basic_nonbuf_streambuf : �o�b�t�@���X�g���[���o�b�t�@���N���X
		string�n�֐���char�ɕύX
	hmType_v1_00.hpp
		hmBasic��p�t�@�C���̈��
		����ˑ��̃^�C�v���g�p�\
			�v���t�B�b�N�X
				s signed
				u unsigned
				f float
			typename
				byte 8bit
				short 16bit
				int 32bit
				long 64bit
				llong 128bit
				float 32bit
				double 64bit
				ldouble 128bit
		PI�̐錾
		�g�p�ɂ́A���̌^�T�C�Y���L�^����hmTypeSize.hpp���K�v
			make_hmTypeSize.c(exe�t�@�C���L)�̎��s�Ŏ��������\
	hmRand_v2_05.h/cpp
		include�t�@�C����v3_00_00�֓K��
		�N���X����hm::Rand�ɕύX
		�W��Rand�C���X�^���X�AGlbRand��ǉ�
			getGlbRand�͔p�~
	hmStr_v1_00.h/cpp
		hmBasic��p�t�@�C���̈��
		������ϊ��֐��Q
			����������𕶎���ɕϊ�����toStr,toCStr
			�I�u�W�F�N�g�𕶎���ɕϊ�����cast_str,cast_cstr
	hmPrcTime_v1_00.hpp
		hmBasic��p�t�@�C���̈��
		���Ԑ���֐��Q
			�v���Z�X�^�C�����擾
			inline u_int prctime();
			�X�g�b�v�E�H�b�`�𓮂��� Buf��ς��邱�ƂŁA�قȂ�X�g�b�v�E�H�b�`�ƂȂ�B
			inline u_int stopwatch(u_int &Buf);
			�ꎞ��~�p�֐�
			inline void delay(u_int ms);
	hmGate_v1_00.hpp
		gatestream�̌�p�t�@�C��
		itfGate��basic_nonbuf_streambuf����
			Gate��������΁A�ȒP��stream���\
	hmBit_v1_00.hpp
		hmBasic��p�t�@�C���̈��
		bit���Z�p�֐��Q
			bittest:�w��bit�̒l�擾
			bitput:�w��bit���w��̒l��
			bitset:�w��bit��on
			bitclear:�w��bit��off
			bitxor:�w��bit��xor
	hmAlgorithm_v1_00.hpp
		hmBasic��p�t�@�C���̈��
		���lalgorithm�֐��Q
			sort_2,sort_3 2,3�ϐ��̃\�[�g
			max_3,med_3,min_3 3�ϐ��̊e���ʎ��o��
			positive_mod �����o���Ȃ��]�� �����̊ԂŃ��[�v
			sel �������̐^�U�Ŗ߂�l���ς��֐�
			hm::rourette weight_acs�ŏd�݂Â��������[���b�g�I��
	basic_operator_v1_01.hpp
		hmLib_v3�d�l�ɑΉ�
		class basic_operator���ɂ��ׂẴN���X���ȍ~
		�ꕔ��operator�̎�����basic_operator�N���X�̌p�������ŁA������operator���g�p�\
		�ȉ��A�g�p�\operator []���́A�����ł̎������e
			++X & incriment = X++
			--X & decriment = X--
			X+=Y & forward_add = X+Y
			X+=Y & bi_add = X+Y,Y+X
			X+=X & add = X+X
			X-=Y & forward_sub = X-Y
			X-=Y & -X & bi_sub = X-Y,Y-X[-(X-Y)]
			X-=X & sub = X-X
			X==Y & forward_equal = X!=Y
			X==Y & bi_equal = X!=Y,Y==X,Y!=X
			X==X & equal = X!=X
			X<Y & forward_compare = X>Y
			X<Y & bi_compare = X>Y,Y<X,Y>X
			X<X & compare = X>X
			X<Y & X==Y & forward_equalcompare = X>Y,X!=Y,X<=Y,X>=Y
			X<Y & X==Y & bi_equalcompare = X>Y,Y<X,Y>X,X!=Y,Y==X,Y!=X,X<=Y,X>=Y,Y<=X,Y>=X
			X<X & X==X & equalcompare =  X>X,X!=Y,X<=X,X>=X
	basic_iterator_v1_01.hpp
		iterator��{�Z�b�g��啝�ȗ����Bbasic_operator�ˑ��t�@�C�����B
		�@�\�𐮗�
			iterator�^�O�𒲂ׂ�Ahm::iterator_tag_discriminater
			�K�v��typedef,basic_operator�����łɒ�`���Ă���Abasic_iterator�Q
				��������A�p�����Ďg�p�@�Ǝ��֐��A�ϐ��͈�؂Ȃ�
				�O����iterator basic_forward_iterator
				������iterator basic_bidirectional_iterator
				�����_��iterator basic_random_access_iterator
	algorithm.hpp �p�~
		��p��hmAlgorithm.hpp��hmFuncIterator.hpp�Ɉڍs
	hmFuncIterator_v1_00.hpp
		algorithm.hpp�̌�p�t�@�C��
			self_iteraotr
				�Q�Ƃ����g(itretor�Ƃ���)��Ԃ�iterator
			acs_iterator
				Accessor��ʂ��āAiterator�̒��g�̂����v�f�ɃA�N�Z�X����iterator
				Accessor�́A����N���X�������ɁA���̃����o�ϐ���߂�l�Ƃ���悤�ȃt�@���N�^
	array_v1_04
		hmLib_v3�ɑΉ��@���O��Ԃ�hmstd����shm�ɕύX
		hmstd::basic_iterator.hpp�̎d�l�ύX�ɑΉ�
		assign=>create,clear=>release�ւƊ֐����ύX
	arraydeque�p�~
		deque�̖�������������Aarrayloop�̋@�\������circular.hpp���o�������߁A�p�~�B
		circular.hpp��bicircular�����l�̋@�\�����B
	circular_v1_00.hpp
		�z�o�b�t�@�p�R���e�i
			bicircular
				�O�ォ��}���A�폜���ł���^�C�v
			circular
				�㍞�߁A��o�����z�o�b�t�@
			circular_stack
				�捞�߁A��o�����z�o�b�t�@
	arrayloop �p�~
		��p��circular.hpp��circular
	arraylist_v1_04.hpp
		list��f�[�^�������Ŋm�ہA�폜�\�ȌŒ蒷�z��
			�����ł́Aarray�Ńf�[�^�z����Adeque�Ŗ��g�p�f�[�^���Ǘ�
		�ϒ��́Avectorlist.hpp���g�p
	vectorlist_v1_02.hpp
		hmLib_v3�ɏ���
		�����Ń������m�ۉ\��list�B
			vector�`���ł̃������m�ہAlist�`���ł̎d�l
			���p�x�ł̑}���A�폜�p�N���X
	hmPos_v3_02.hpp
		�񎟌���̈ʒux,y�փA�N�Z�X�\�ȃN���X
		hmLib_v3�ɑΉ�
		�N���X����hmPoint����hm::PPosition�֕ύX
			Point�̖��`�́Apointor�ƕ���킵������
			hm::SPosition��3�����p�Ƃ���\��
		default��std::ostream�p�o�͌`�����`"(x,y)"
	hmRSGate_v1_03.hpp
		hmLib_v3�ɑΉ�
		RS232c�`����Com�ڑ��p�N���X
	hmDir_v1_02
		�f�B���N�g������p�N���X hm::Directory
			�t�H���_�̐����A�폜��A�ړ����ȒP�ɉ\
			���݂̍�Əꏊ��setCurrentDirectory,getCurrentDirectory�Őݒ�\
	hmTime_v1_02.hpp
		hmLib_v3�ɑΉ�
		ms�P�ʂ܂ŕێ�����V�X�e�����ԗp�N���Xhm::Time
		hm::Time������^�ւɕϊ�������t�N���Xhm::Date
	hmColor_v1_01.hpp
		�F�֌W����p�N���X
			class RGBClr;	//RGB�^�J���[	r:�ԋ��x g:�΋��x b:���x ���w��
			class HSVClr;	//HSV�^�J���[	hue:�F�� sat:�ʓx vlu:���x ���w��
			class HLSClr;	//HLS�^�J���[	hue:�F�� lgt:�ʓx sat:���x ���w��
			class RGBAClr;//RGB�^�J���[	r:�ԋ��x g:�΋��x b:���x a:���ߓx ���w��
			class HSVAClr;//HSV�^�J���[	hue:�F�� sat:�ʓx vlu:���x a:���ߓx ���w��
			class HLSAClr;//HLS�^�J���[	hue:�F�� lgt:�ʓx sat:���x a:���ߓx ���w��
	hmBufGate_v1_03
		����Gate�̃o�b�t�@�Ƃ��ċ@�\����Gate
			�L���o�b�t�@�N���X BufGate
			�����o�b�t�@�N���X InfBufGate
	hmRect_v1_02
		��_��ێ�����A�����`�^�N���X
			&,|�ŁA�͈͂̋��ʕ������o�����Ƃ��\
	hmAlign_v1_01.hpp
		�����������N���X�Ahm::AlignQuad
		hm::aliq���̕ϐ����g���āA�ʒu�w��\
	hmDebug_v1_01.h/cpp
		debug���p�֗��c�[��
			debug���ɏo�͂���ostream hm::debugout
			debug���̂ݏo�͂���flow hm::debugflow
			debug���̂ݏo�͂���cout hm::debug_cout
			debug���̂ݏo�͂���fstream hm::debug_fout
	hmObject�p�~
		Object�̊T�O�ύX�̂��߁i�����ɕ`��\�ȕ��́A�Ƃ��čĒ�`�j
		��p��hmBody.hpp
v2_09_05
	hmRand_v2_04
		randNorm�̈�������var����sd�ւƕύX
	basic_iterator_v1_00�ǉ�
		iterator��{�쐬�L�b�g
	basic_operator_v1_00�ǉ�
		operator��{�쐬�L�b�g
	algorithm_v1_02
		iterator�����p�N���X�Q��basic_iterator�ɓ��ꂵ�Abasic_iterator.hpp�ւƈړ�
	array_v1_03
		iterator��hmstd::basic_iterator���g�p
	arraydeque_v1_03
		iterator��hmstd::basic_iterator���g�p
	arraylist_v1_03
		iterator��hmstd::basic_iterator���g�p
	diarray_v1_00�ǉ�
		�񎟌�iterator�쐬
v2_09_04
	algorithm_v1_01�ǉ�
		basic_random_access_iterator��distance��ǉ�
v2_09_03
	hmDir_v1_01
		str()��operator()�𓝍�
	hmBasic_v1_07
		system�֐���ǉ�
v2_09_02
	algorithm_v1_00�ǉ�
		STL�n�p��algorithm
	array_v1_02
		iterator��hm::basic_random_access_iterator���g�p
	arraydeque_v1_02
		iterator��hm::basic_random_access_iterator���g�p
		iterator���o�b�t�@��̃f�[�^�̐擪�̃A�h���X��ێ�����悤�ɕύX
	arraylist_v1_02
		iterator��hm::basic_bidirectional_iterator���g�p
	hmRand_v2_03
		hmRand���֐��I�u�W�F�N�g�Ƃ��Ďg�p�\�ɕύX
		hm::getGlobalRand�ǉ�
	vectprlist_v1_01
		�������m�ۂ̂ӂ�܂����Avector�ɏ���(�ǉ��m�ۂ͍s�����A����͎����ōs��Ȃ�)
	hmDebug_v1_00�ǉ�
		debug���ɏo�͂���ostream hm::dout
		debug���̂ݏo�͂���flow hm::debugflow
		debug���̂ݏo�͂���cout hm::d_cout
v2_09_01
	dxObject_v2_06
		dxO��Object�A�N�Z�X�N���X����accessor�ɕύX
		dxO::accessor�̃A�N�Z�X���Z�q��iterator�ɏ���
	arraylist_v1_01
		iterator��STL�^�ɏ���
	arraydeque_v1_01
		iterator��STL�^�ɏ���
	array_v1_01
		iterator��STL�^�ɏ���
v2_09_00
	array_v1_00�ǉ�
		STL�����̌Œ蒷�z��N���X
	arraydeque_v1_00�ǉ�
		STL������deque�^�Œ蒷�z��N���X
		�������̎��Ȋm�ۂ��s��Ȃ����߁A����
	arrayloop_v1_00�ǉ�
		STL������loop�^�Œ蒷�z��N���X
		�`�\���������A�ɗv�f��ǉ�����^�C�v
	arraylist_v1_00�ǉ�
		STL������list�^�Œ蒷�z��N���X
		���񃁃����m�ۂ��s�킸�A�Œ�z���Ƀf�[�^��u��
		�C�ӂ̈ʒu�̗v�f�̑}��/�폜������
	vectorlist_v1_00�ǉ�
		STL������list�^vector�N���X
		����v�f���̒������s��arraylist
		�C�ӂ̈ʒu�̗v�f�̑}��/�폜������
v2_08_07
	hmRand_v2_02
		hmRand::gen_randNorm��ǉ��B���K����������{�����B
	hmBasic_v1_6
		mod�̒v���I�ȃo�O���C��
	dideque_v1_01
		�֐������ꕔ�ύX
v2_08_06
	bufgate_v1_02
		ibufcltrgate������N���X�ɒǉ�
v2_08_05
	hmBasic_v1_5
		str,c_str��hm�ɒǉ�
	hmRect_v1_01
		check�֐���ǉ�
	dxPad_v1_00�ǉ�
v2_08_04
	dxArea_v2_04
		dxArea���`��͈͂𐧌����Ă��Ȃ����������C��
	dxObject_v2_05
		dxArObject���`��͈͂𐧌����Ă��������C��
v2_08_03
	dxArea_v2_03
		dxArObject���p������`�ɏC��
			dxObject�̍X�V�ɏ���
	dxObject_v2_04
		dxFn��`��֐��I�u�W�F�N�g�Ƃ��ē���
		dxFnObject��dxFn�ɓ���
		dxArObject��ǉ�
v2_08_02
	hmLib.cpp
		RSgate�֘A�̃C���N���[�h�o�O���C��
	csvflow_v1_01
		ocsvflow,icsvflow�̃R���X�g���N�^�̋L�q�o�O���C��
	dxArea_v2_02
		dxObject��hmoBox���p������`�ɏC��
			dxBasicObject���ڌp���ł́AdxSubObject��dxObject�ɂ����Ή����Ȃ�dxo.draw���g�p�ł��Ȃ�����
		basic_dxMoveAreaType::AtoF,FtoA,setViewPos�Ƀo�O���������̂��C��
	dxObject_v2_03
		dxReObject��ǉ�
v2_08_01
	hmTime_v1_01.hpp
		hmTime::set��ǉ�
		hmDate::set��ǉ�
	include_ver�ɂ����āA�e�X�g��(_vX.hpp)��TEST_HMLIB�ŃC���N���[�h�\�ɕύX
v2_08_00
	dxObject_v2_02
		�֐��|�C���^�p�֐��I�u�W�F�N�gdxFn�ǉ�
		dxFnObject���֐��I�u�W�F�N�g�p�ɉ���
	dxArea_v2_01
		�֐��I�u�W�F�N�g�ɑΉ�
v2_07_02
	dideque.hpp v1_0
		�V�K�ǉ�
	include_ver�ɂ����āAUSE_��VER_�ɏC��
	�S�Ẵ��b�p�[�C���N���[�h�t�@�C���̊g���q��hpp�ɕύX
	hmBasic_v1_4
		mod�ǉ�
	hmTime_v1_00.hpp
		winTime���p������`�ŐV�K�ǉ�
	winTime��񐄏��łɕύX
	dxBasic_v2_05
		winTime.hpp��p�~���AhmTime.hpp�ɑΉ�
v2_07_01
	hmstreambuf.hpp v1_1
		NB��stream���g�p����ƁA�G���[�ɂȂ�o�O���C��
	iologgate.hpp v1_0
		�V�K�ǉ�
v2_07_00
	include_ver�K�[�h���d�l�ύX�@��̃��C�u�����ŕ����o�[�W�������Ǘ��\��
v2_06_00
	hmDir��ǉ�
	dxBasic v2_4
		hmBasic.h v1_3�ɑΉ�
v2_05_02
	RSgate.hpp v1_1
		namespace hmstd�ɉ���
	hmBasic v1_3
		char* getTmpStrAdress()��hm�Ɉړ�
		int getTmpStrAdressSize()��ǉ�
v2_05_01
	dxBasic.h v2_3
		dx::resetDrawScreen���s����NowScreen���ύX����Ȃ������o�O���C��
	dxColorSet.h v1_1
		dxHLS�^�ŐV�K�ɍ쐬
v2_05_00
	hmBasic.h v1_2
		bitxor�̒ǉ�
	hmAlign.hpp��hmAlign.h��hmAlign.cpp�ɕ���
v2_04_00
	include_ver�K�[�h��ǉ�
v2_03_02
	hmBasic.h v1_1
		min3,max3,med3�̒ǉ�
	dxBasic.h v2_2
		dxFont::make(...)������ɋ@�\���Ȃ������o�O���C��
	tool��makeFontNameList.exe��ǉ�
v2_03_01
	hmAlign.hpp v1_1
		PintVec��ǉ�
			Ali��Pint�x�N�g����Ԃ�
		ALI::all��ǉ�
		�C���N���[�h�K�[�h��ǉ�
	hmRand.h v2_1
		hm::rand(int min,int max)�Ő���ɕ\������Ȃ��o�O���C��
v2_03_00
	hmRand.h v2_0
		���������֐���ǉ�
			�ŏ��A�ő���w��ł��闐��
			32bit,64bit���ґΉ��̐��̗���
			�ŏ��A�ő���w��ł��镂������
			���K����
		�����o�֐����琳�K�������폜
		hmRand hm::rand���폜
v2_02_00
	dxBasic.h v2_1
		dxGraph���摜�ۑ��ł��Ȃ��o�O���C��
		�`��\�ȃO���t�B�b�N�n���h�������		dxBasicScreen,dxScreen�̒ǉ�
		dx::setDrawScreen�̈�����dxBasicScreen�ɕύX
v2_01_00
	dxObject.hpp v2_0
		draw�֐���active�t���O�̈ʒu��dxDMode�̑O�ɏC��
	dxArea.hpp v2_0
		dxObject.hpp v2.0�ɑΉ�����悤�ɏC��
v2_00_02
	hmBuffer.hpp->bufgate.hpp�֕ύX
	bufgate.hpp v1_1
		getc()���s���Ƀf�[�^���Ȃ���΁A�f�[�^������܂őҋ@����悤�ɕύX
		buf��size�擾�n�֐��̒ǉ�
v2_00_01
	dxObject.hpp
		dxoProgress�ǉ�
		dxoBasicBut��active�łȂ������������o�O���C��
	hmBuffer.hpp�ǉ�
	RSgate.hpp�ǉ�
		winRS�t�H���_�������ɒǉ�
		winrs.cpp�̎���Include�@�\�ǉ�
	tool/resource.rc��ǉ�
v2_00_00
	�����[�X
*/
#ifndef INC_HMLIB
#	define INC_HMLIB 30000
#	define VER_HMLIB INC_HMLIB
#
#	ifndef OUT_USE_HMLIB
#		define OUT_USE_HMLIB 1
#	endif
#
#	ifndef OUT_CHG_HMLIB
#		define OUT_CHG_HMLIB 1
#	endif
#
#	if 1<=OUT_USE_HMLIB
#		pragma message("=== hmLib(v3_00_00) ===")
#	endif
#
#	ifdef USE_HMLIB
#		if USE_HMLIB>30000
#			error hmLib : ��Ή��̃o�[�W�����ł��Bv3_00_00����́A�g�p�ł��܂���B
#		elif USE_HMLIB==30000
#			if 1<=OUT_USE_HMLIB
#				pragma message("hmLib : v3_00_00")
#			endif
#		elif USE_HMLIB==20905
#			if 1<=OUT_USE_HMLIB
#				pragma message("hmLib : v2_09_05")
#			endif
#		elif USE_HMLIB==20904
#			if 1<=OUT_USE_HMLIB
#				pragma message("hmLib : v2_09_04")
#			endif
#		elif USE_HMLIB==20903
#			if 1<=OUT_USE_HMLIB
#				pragma message("hmLib : v2_09_03")
#			endif
#		elif USE_HMLIB==20902
#			if 1<=OUT_USE_HMLIB
#				pragma message("hmLib : v2_09_02")
#			endif
#		elif USE_HMLIB==20901
#			if 1<=OUT_USE_HMLIB
#				pragma message("hmLib : v2_09_01")
#			endif
#		elif USE_HMLIB==20900
#			if 1<=OUT_USE_HMLIB
#				pragma message("hmLib : v2_09_00")
#			endif
#		elif USE_HMLIB==20807
#			if 1<=OUT_USE_HMLIB
#				pragma message("hmLib : v2_08_07")
#			endif
#		elif USE_HMLIB==20806
#			if 1<=OUT_USE_HMLIB
#				pragma message("hmLib : v2_08_06")
#			endif
#		elif USE_HMLIB==20805
#			if 1<=OUT_USE_HMLIB
#				pragma message("hmLib : v2_08_05")
#			endif
#		elif USE_HMLIB==20804
#			if 1<=OUT_USE_HMLIB
#				pragma message("hmLib : v2_08_04")
#			endif
#		elif USE_HMLIB==20803
#			if 1<=OUT_USE_HMLIB
#				pragma message("hmLib : v2_08_03")
#			endif
#		elif USE_HMLIB==20802
#			if 1<=OUT_USE_HMLIB
#				pragma message("hmLib : v2_08_02")
#			endif
#		elif USE_HMLIB==20801
#			if 1<=OUT_USE_HMLIB
#				pragma message("hmLib : v2_08_01")
#			endif
#		elif USE_HMLIB==20800
#			if 1<=OUT_USE_HMLIB
#				pragma message("hmLib : v2_08_00")
#			endif
#		elif USE_HMLIB==20702
#			if 1<=OUT_USE_HMLIB
#				pragma message("hmLib : v2_07_02")
#			endif
#		elif USE_HMLIB==20701
#			if 1<=OUT_USE_HMLIB
#				pragma message("hmLib : v2_07_01")
#			endif
#		elif USE_HMLIB==20700
#			if 1<=OUT_USE_HMLIB
#				pragma message("hmLib : v2_07_00")
#			endif
#		elif USE_HMLIB==20600
#			if 1<=OUT_USE_HMLIB
#				pragma message("hmLib : v2_06_00")
#			endif
#		elif USE_HMLIB==20502
#			if 1<=OUT_USE_HMLIB
#				pragma message("hmLib : v2_05_02")
#			endif
#		elif USE_HMLIB==20501
#			if 1<=OUT_USE_HMLIB
#				pragma message("hmLib : v2_05_01")
#			endif
#		elif USE_HMLIB==20500
#			if 1<=OUT_USE_HMLIB
#				pragma message("hmLib : v2_05_00")
#			endif
#		elif USE_HMLIB==20400
#			if 1<=OUT_USE_HMLIB
#				pragma message("hmLib : v2_04_00")
#			endif
#		elif USE_HMLIB==20302
#			if 1<=OUT_USE_HMLIB
#				pragma message("hmLib : v2_03_02")
#			endif
#		elif USE_HMLIB==20301
#			if 1<=OUT_USE_HMLIB
#				pragma message("hmLib : v2_03_01")
#			endif
#		elif USE_HMLIB==20300
#			if 1<=OUT_USE_HMLIB
#				pragma message("hmLib : v2_03_00")
#			endif
#		elif USE_HMLIB==20200
#			if 1<=OUT_USE_HMLIB
#				pragma message("hmLib : v2_02_00")
#			endif
#		elif USE_HMLIB==20100
#			if 1<=OUT_USE_HMLIB
#				pragma message("hmLib : v2_01_00")
#			endif
#		elif USE_HMLIB==20002
#			if 1<=OUT_USE_HMLIB
#				pragma message("hmLib : v2_00_02")
#			endif
#		elif USE_HMLIB==20001
#			if 1<=OUT_USE_HMLIB
#				pragma message("hmLib : v2_00_01")
#			endif
#		elif USE_HMLIB==20000
#			if 1<=OUT_USE_HMLIB
#				pragma message("hmLib : v2_00_00")
#			endif
#		elif USE_HMLIB<20000
#			error hmLib : ��Ή��̃o�[�W�����ł��Bv2_00_00���O�́A�g�p�ł��܂���B
#		else
#			error hmLib : ���`�̃o�[�W�����ł��B���̂悤�ȃo�[�W�����͑��݂��܂���B
#		endif
#
#		define CAN_USE_HMLIB
#	else
#		error hmLib : hmLibVer.hpp���C���N���[�h����Ă��܂���
#	endif
#	
#	ifdef CHG_HMLIB
#		if 1<=OUT_CHG_HMLIB
#			pragma message("chg_hmLib : ########: hmLib�̌݊������e�X�g���܂��B")
#		endif
#		define CAN_CHG_HMLIB
#	endif
#	//windows.h��min,max���g�킹�Ȃ�
#	ifndef NOMINMAX
#		define NOMINMAX
#	endif
#	//�Â�unsafe�Ȋ֐��Q�g�p�ɂ��x�����
#	ifndef _CRT_SECURE_NO_DEPRECATE
#		define _CRT_SECURE_NO_DEPRECATE 1
#	endif
#endif
