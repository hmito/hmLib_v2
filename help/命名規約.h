namespace /*===�����K��===*/c1{
	namespace /***** �錾 �萔 �񋓌^ *****/s1{
		//�S�啶���A�A���_�[�o�[��؂�
		#define DEVICE_NUM 29

		//"USE_","VER_","CHG_","INC_"��hmLib�\�񕶎�
	}
	namespace /***** �ϐ� *****/s2{
		//���ϐ��͑啶���X�^�[�g�A�啶����؂�
		int MainStream;
		char GetStr;	

		//�Ǐ��ϐ��͏����������X�^�[�g�A�啶����؂�
		int i;
		char modeType;

		//const�ϐ��͑S�啶���A�A���_�[�o�[��؂�
		const double PI=3.1415;
		const int NAME_NUM 300;

		//�Ӗ��I�ɑ傫�ȋ�؂肪����ꍇ�́A�A���_�[�o�[�ŋ�؂�
		//�iC++�ł͔񐄏��A�N���X/���O��Ԑ����j
		const bool MainModeFlag_Jpeg;

		//�N���X�����o�֐��̈�������"x_"�ŃX�^�[�g
		void setPos(char x_Pos){Pos=x_Pos;}

		//�|�C���^�͕K�v�ɉ�����'p'�A�Q�Ƃ͕K�v�ɉ�����'r'�X�^�[�g
		char* pBuf;
		string& rName;
	}
	namespace /***** �֐� *****/s3{
		//�����������X�^�[�g�A�啶����؂�
		int getPos();
		char changeModeType();

		//�����A�������������ꍇ�́A�A���_�[�o�[�ŋ�؂�
		int check_openDoor();
		bool can_getSize();

		//���炩�ȏꍇ�́A�����̓��������p���\
		string str();
		size_type size();

		//�Ӗ��I�ɑ傫�ȋ�؂肪����ꍇ�́A�A���_�[�o�[�ŋ�؂�
		//�iC++�ł͔񐄏��A�N���X/���O��Ԑ����j
		void setSize_Jpeg();
	
		//�^�ϊ��֐��̏ꍇ��"to_","_to_"
		hmr::gps to_gps();
		hmr::double gps_to_f();

		//bool�֐��ɂ́A����"is_",�\"can_",����"has_"�̎g�p
		bool can_recv();
		bool is_err();
		bool has_changed();
	}
	namespace /***** ���O��� *****/s4{
		//���������x�̏�����
		namespace srt{
		};
	}
	namespace /***** �N���X *****/s5{
		//STL�^�AC++���C�N�^�́A�������X�^�[�g�A�A���_�[�o�[��؂�
		class csv_file;
		class dxstream;

		//�ʏ�N���X�͑啶���X�^�[�g�A�啶����؂�
		class ImGraph;
		class DrawMode;

		//�����̐l�̌^���g�p
		class BmpCreater;
		class GraphViewer;

		//��{�N���X�̏ꍇ��"basic"
		class basicGraph;
		class basic_dxstream;

		//���ۃN���X�̏ꍇ��"itf"
		class itfObject;
		class itf_filetr;

		//��O�N���X�̏ꍇ��"except"
		class except_overrange;
	}
	namespace /***** �P��g�p *****/s6{
		//set:get
			//�l�̕ύX�A�擾
			//�ێ����Ă���p�����[�^�̕ύX�A�ݒ莞
		//put:get
			//�l�̒u���A�擾
			//�ێ����Ă���f�[�^�̕ύX
		//make
			//�߂�l�Ƃ��āA����ݒ�̃I�u�W�F�N�g��Ԃ�
		//create:release
			//�I�u�W�F�N�g���g�̍쐬�A���
		//read:write
			//�f�[�^��ǂݍ��݁A�����o��
		//load:save
			//�ݒ�̓ǂݍ��݁A�����o��
		//open:save:close
			//�t�@�C���I�u�W�F�N�g���J���A�ۑ��A����
	}
}
namespace /*===hmLib�\��===*/c2{
	namespace /***** �t�@�C�� *****/s1{
		//�t�@�C���`��
		//.hpp=�W��include�p�t�@�C��
		//_vX_XX.hpp=�����p�o�[�W�����t�@�C���@�P��
		//_vX_XX.h=�����p�o�[�W�����t�@�C���@cpp�ƃZ�b�g
		//_vX_XX.cpp=�����p�o�[�W�����t�@�C���@h�ƃZ�b�g

		//�\���`��
		//VER_XXXX = ���ݎg�p�\�ȃt�@�C���o�[�W����
		//USE_XXXX = �g�p��錾����t�@�C���o�[�W����
		//CHG_XXXX = �g�p�ύX�\��̃t�@�C���o�[�W����
		//INC_XXXX = ���ێg�p���ꂽ�t�@�C���o�[�W����
		#define USE_HMLIB 20904		//��{�I��v2_09_04���g�p
		#define USE_HMBASIC 107		//��O�I��hmBasic�̂�v1_07���g�p
		#define CHG_HMLIB 20904		//hmLib��ύX�\��(���̏ꍇ�́A��{�͌���̂܂�v2_09_04�g�p)
		#define CHG_HMOBJECT 103	//hmObject�ɂ��Ă�v1_03�֕ύX�\��
	}
	//�p���t�@�C���́A��苭����������^���������p��

	//���\�������o��lib/sub�t�H���_���ɂ���

	//percial include���\�ƂȂ�
}