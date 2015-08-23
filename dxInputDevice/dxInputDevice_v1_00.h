#ifndef INC_HMLIB_DXINPUTDEVICE
#define INC_HMLIB_DXINPUTDEVICE 100
#
#ifndef INC_HMLIB_DXKERNEL
#	include "hmLib_v2/dxKernel.hpp"
#endif
#ifndef INC_HMLIB_HMTASK
#	include "hmLib_v2/hmTask.hpp"
#endif
#ifndef INC_HMLIB_HMPOS
#	include "hmLib_v2/hmPos.hpp"
#endif
#include "hmLib_v2/DxLib.h"
#define DX_MOUSE_HMLIB_TASK DX_POST_KERNEL_TASK
#define DX_KEYS_TASK DX_POST_KERNEL_TASK
#define DX_JOYPAD_TASK DX_POST_KERNEL_TASK
namespace hmLib{
	namespace dx{
		class itfInputDevice{
		protected:
			static void changeKeySta(int& _sta,bool _onoff){
				if(_sta>0){
					if(_onoff)_sta=2;
					else _sta=-1;
				}else{
					if(_onoff)_sta=1;
					else _sta=0;
				}
			}
			static void changeTwoKeySta(int& _sta,int _sta1,int _sta2){
				if(_sta1==2 || _sta2==2)_sta=2;	//�����2
				else if(_sta1*_sta2==-1)_sta=2;		//�����1,�����-1
				else if(_sta1==1 || _sta2==1)_sta=1;
				else if(_sta1==-1|| _sta2==-1)_sta=-1;
				else _sta=0;
			}
		};
		class cMouse:public itfInputDevice{
		private:
			Pint Pos;
			Pint PPos;
			Pint LPos;
			Pint CPos;
			Pint RPos;
			int LSta;
			int RSta;
			int CSta;
			int Wheel;
		private:
			class cTask:public hm::cTask{
				friend class cMouse;
			public:
				cTask():hm::cTask(DX_MOUSE_HMLIB_TASK){return;}
			protected://hm::cTask
				//�^�X�N��������
				virtual bool construct(){
					Ptr->LSta=0;
					Ptr->RSta=0;
					Ptr->CSta=0;
					Ptr->Wheel=0;
					return false;
				}
				//�^�X�N�ʏ폈��
				virtual bool task(){
					changeKeySta(Ptr->LSta,(GetMouseInput() & MOUSE_HMLIB_INPUT_LEFT)!=0);
					changeKeySta(Ptr->RSta,(GetMouseInput() & MOUSE_HMLIB_INPUT_RIGHT)!=0);
					changeKeySta(Ptr->CSta,(GetMouseInput() & MOUSE_HMLIB_INPUT_MIDDLE)!=0);
					Ptr->Wheel=GetMouseWheelRotVol();
					Ptr->PPos=Ptr->Pos;
					GetMousePoint(&(Ptr->Pos.x),&(Ptr->Pos.y));
					if(Ptr->LSta==1)(Ptr->LPos)=(Ptr->Pos);
					if(Ptr->RSta==1)(Ptr->RPos)=(Ptr->Pos);
					if(Ptr->CSta==1)(Ptr->CPos)=(Ptr->Pos);

					return false;
				}
				//�^�X�N�I������
				virtual bool destruct(){return false;}
			private:
				cMouse* Ptr;
			};
		public:
			cTask Task;
		public:
			cMouse()
				:Pos(0,0),PPos(0,0),LPos(0,0),RPos(0,0),CPos(0,0)
				,LSta(0),RSta(0),CSta(0),Wheel(0){
				Task.Ptr=this;
			}
			int getL(){return LSta;}
			int getR(){return RSta;}
			int getC(){return CSta;}
			int getWheel(){return Wheel;}
			Pint getPos(){return Pos;}
			Pint getLPos(){return LPos;}
			Pint getRPos(){return RPos;}
			Pint getCPos(){return CPos;}
		};
		class cKeyboad:public itfInputDevice{
		private:
			int KeySta[269];//256+Num[10]+Shift,Ctrl,Alt
		public:
			enum KeyName{
				Back=KEY_INPUT_BACK, 	// �o�b�N�X�y�[�X�L�[
				Tab=KEY_INPUT_TAB, 	// �^�u�L�[
				Enter=KEY_INPUT_RETURN, 	// �G���^�[�L�[
				LShift=KEY_INPUT_LSHIFT, 	// ���V�t�g�L�[
				RShift=KEY_INPUT_RSHIFT,	// �E�V�t�g�L�[
				LCtrl=KEY_INPUT_LCONTROL,	// ���R���g���[���L�[
				RCtrl=KEY_INPUT_RCONTROL, 	// �E�R���g���[���L�[
				Esc=KEY_INPUT_ESCAPE, 	// �G�X�P�[�v�L�[
				Space=KEY_INPUT_SPACE, 	// �X�y�[�X�L�[
				PageUp=KEY_INPUT_PGUP,	// �o�������t�o�L�[
				PageDown=KEY_INPUT_PGDN, 	// �o�������c�������L�[
				End=KEY_INPUT_END, 	// �G���h�L�[
				Home=KEY_INPUT_HOME, 	// �z�[���L�[
				Left=KEY_INPUT_LEFT, 	// ���L�[
				Up=KEY_INPUT_UP, 	// ��L�[
				Right=KEY_INPUT_RIGHT, 	// �E�L�[
				Down=KEY_INPUT_DOWN,	// ���L�[
				Insert=KEY_INPUT_INSERT, 	// �C���T�[�g�L�[
				Delete=KEY_INPUT_DELETE,	// �f���[�g�L�[
				Minus=KEY_INPUT_MINUS, 	// �|�L�[
				Yen=KEY_INPUT_YEN, 	// ���L�[
				Hat=KEY_INPUT_PREVTRACK, 	// �O�L�[
				Period=KEY_INPUT_PERIOD, 	// �D�L�[
				Slash=KEY_INPUT_SLASH, 	// �^�L�[
				LAlt=KEY_INPUT_LALT, 	// ���`�k�s�L�[
				RAlt=KEY_INPUT_RALT, 	// �E�`�k�s�L�[
				Scroll=KEY_INPUT_SCROLL, 	// ScrollLock�L�[
				SemiColon=KEY_INPUT_SEMICOLON, 	// �G�L�[
				Colon=KEY_INPUT_COLON, 	// �F�L�[
				LBracket=KEY_INPUT_LBRACKET, 	// �m�L�[
				RBracket=KEY_INPUT_RBRACKET, 	// �n�L�[
				At=KEY_INPUT_AT, 	// ���L�[
				BackSlash=KEY_INPUT_BACKSLASH, 	// �_�L�[
				Comma=KEY_INPUT_COMMA, 	// �C�L�[
				CapLock=KEY_INPUT_CAPSLOCK, 	// CaspLock�L�[
				Pause=KEY_INPUT_PAUSE, 	// PauseBreak�L�[
				NumPad0=KEY_INPUT_NUMPAD0, 	// �e���L�[�O
				NumPad1=KEY_INPUT_NUMPAD1, 	// �e���L�[�P
				NumPad2=KEY_INPUT_NUMPAD2, 	// �e���L�[�Q
				NumPad3=KEY_INPUT_NUMPAD3, 	// �e���L�[�R
				NumPad4=KEY_INPUT_NUMPAD4, 	// �e���L�[�S
				NumPad5=KEY_INPUT_NUMPAD5, 	// �e���L�[�T
				NumPad6=KEY_INPUT_NUMPAD6, 	// �e���L�[�U
				NumPad7=KEY_INPUT_NUMPAD7, 	// �e���L�[�V
				NumPad8=KEY_INPUT_NUMPAD8, 	// �e���L�[�W
				NumPad9=KEY_INPUT_NUMPAD9, 	// �e���L�[�X
				NumPadMulti=KEY_INPUT_MULTIPLY, 	// �e���L�[���L�[
				NumPadAdd=KEY_INPUT_ADD, 	// �e���L�[�{�L�[
				NumPadSub=KEY_INPUT_SUBTRACT, 	// �e���L�[�|�L�[
				NumPadDot=KEY_INPUT_DECIMAL, 	// �e���L�[�D�L�[
				NumPadDiv=KEY_INPUT_DIVIDE, 	// �e���L�[�^�L�[
				NumPadEnter=KEY_INPUT_NUMPADENTER, 	// �e���L�[�̃G���^�[�L�[
				F1=KEY_INPUT_F1, 	// �e�P�L�[
				F2=KEY_INPUT_F2, 	// �e�Q�L�[
				F3=KEY_INPUT_F3, 	// �e�R�L�[
				F4=KEY_INPUT_F4, 	// �e�S�L�[
				F5=KEY_INPUT_F5, 	// �e�T�L�[
				F6=KEY_INPUT_F6, 	// �e�U�L�[
				F7=KEY_INPUT_F7, 	// �e�V�L�[
				F8=KEY_INPUT_F8, 	// �e�W�L�[
				F9=KEY_INPUT_F9, 	// �e�X�L�[
				F10=KEY_INPUT_F10, 	// �e�P�O�L�[
				F11=KEY_INPUT_F11, 	// �e�P�P�L�[
				F12=KEY_INPUT_F12, 	// �e�P�Q�L�[
				A=KEY_INPUT_A ,	// �`�L�[
				B=KEY_INPUT_B ,	// �a�L�[
				C=KEY_INPUT_C ,	// �b�L�[
				D=KEY_INPUT_D ,	// �c�L�[
				E=KEY_INPUT_E ,	// �d�L�[
				F=KEY_INPUT_F ,	// �e�L�[
				G=KEY_INPUT_G ,	// �f�L�[
				H=KEY_INPUT_H ,	// �g�L�[
				I=KEY_INPUT_I ,	// �h�L�[
				J=KEY_INPUT_J ,	// �i�L�[
				K=KEY_INPUT_K ,	// �j�L�[
				L=KEY_INPUT_L ,	// �k�L�[
				M=KEY_INPUT_M ,	// �l�L�[
				N=KEY_INPUT_N ,	// �m�L�[
				O=KEY_INPUT_O ,	// �n�L�[
				P=KEY_INPUT_P ,	// �o�L�[
				Q=KEY_INPUT_Q ,	// �p�L�[
				R=KEY_INPUT_R ,	// �q�L�[
				S=KEY_INPUT_S ,	// �r�L�[
				T=KEY_INPUT_T ,	// �s�L�[
				U=KEY_INPUT_U ,	// �t�L�[
				V=KEY_INPUT_V ,	// �u�L�[
				W=KEY_INPUT_W ,	// �v�L�[
				X=KEY_INPUT_X ,	// �w�L�[
				Y=KEY_INPUT_Y ,	// �x�L�[
				Z=KEY_INPUT_Z ,	// �y�L�[
				NumKey0=KEY_INPUT_0 ,	// �O�L�[
				NumKey1=KEY_INPUT_1 ,	// �P�L�[
				NumKey2=KEY_INPUT_2 ,	// �Q�L�[
				NumKey3=KEY_INPUT_3 ,	// �R�L�[
				NumKey4=KEY_INPUT_4 ,	// �S�L�[
				NumKey5=KEY_INPUT_5 ,	// �T�L�[
				NumKey6=KEY_INPUT_6 ,	// �U�L�[
				NumKey7=KEY_INPUT_7, 	// �V�L�[
				NumKey8=KEY_INPUT_8, 	// �W�L�[
				NumKey9=KEY_INPUT_9, 	// �X�L�[
				Num0=256,
				Num1=257,
				Num2=258,
				Num3=259,
				Num4=260,
				Num5=261,
				Num6=262,
				Num7=263,
				Num8=264,
				Num9=265,
				Shift=266,			//��Shift
				Ctrl=267,			//��CTRL
				Alt=268,			//��ALT
			};

		private:
			class cTask:public hm::cTask{
				friend class cKeyboad;
			public:
				cTask():hm::cTask(DX_MOUSE_HMLIB_TASK){return;}
			protected://hm::cTask
				//�^�X�N��������
				virtual bool construct(){
					for(int i=0;i<269;++i)Ptr->KeySta[i]=0;
					return false;
				}
				//�^�X�N�ʏ폈��
				virtual bool task(){
					char buf[256];

					GetHitKeyStateAll(buf);

					for(int i=0;i<256;++i)changeKeySta(Ptr->KeySta[i],buf[i]!=0);
					changeTwoKeySta(Ptr->KeySta[Num0],Ptr->KeySta[NumKey0],Ptr->KeySta[NumPad0]);
					changeTwoKeySta(Ptr->KeySta[Num1],Ptr->KeySta[NumKey1],Ptr->KeySta[NumPad1]);
					changeTwoKeySta(Ptr->KeySta[Num2],Ptr->KeySta[NumKey2],Ptr->KeySta[NumPad2]);
					changeTwoKeySta(Ptr->KeySta[Num3],Ptr->KeySta[NumKey3],Ptr->KeySta[NumPad3]);
					changeTwoKeySta(Ptr->KeySta[Num4],Ptr->KeySta[NumKey4],Ptr->KeySta[NumPad4]);
					changeTwoKeySta(Ptr->KeySta[Num5],Ptr->KeySta[NumKey5],Ptr->KeySta[NumPad5]);
					changeTwoKeySta(Ptr->KeySta[Num6],Ptr->KeySta[NumKey6],Ptr->KeySta[NumPad6]);
					changeTwoKeySta(Ptr->KeySta[Num7],Ptr->KeySta[NumKey7],Ptr->KeySta[NumPad7]);
					changeTwoKeySta(Ptr->KeySta[Num8],Ptr->KeySta[NumKey8],Ptr->KeySta[NumPad8]);
					changeTwoKeySta(Ptr->KeySta[Num9],Ptr->KeySta[NumKey9],Ptr->KeySta[NumPad9]);
					changeTwoKeySta(Ptr->KeySta[Shift],Ptr->KeySta[LShift],Ptr->KeySta[RShift]);
					changeTwoKeySta(Ptr->KeySta[Ctrl],Ptr->KeySta[LCtrl],Ptr->KeySta[RCtrl]);
					changeTwoKeySta(Ptr->KeySta[Alt],Ptr->KeySta[LAlt],Ptr->KeySta[RAlt]);

					return false;
				}
				//�^�X�N�I������
				virtual bool destruct(){return false;}
			private:
				cKeyboad* Ptr;
			};
		public:
			cTask Task;
		public:
			cKeyboad(){Task.Ptr=this;}
			int get(KeyName Name_)const{return KeySta[Name_];}
			int getUp()const{return KeySta[Up];}
			int getDw()const{return KeySta[Down];}
			int getLf()const{return KeySta[Left];}
			int getRi()const{return KeySta[Right];}
		};
		//JoyPad����
		class cJoypadCtrl:public itfInputDevice{
		private:
			int ButSta[16];
			int PButSta[16];
		public:
			void connect(){ReSetupJoypad();}
			int getNum(){return GetJoypadNum();}
		private:
			class cTask:public hm::cTask{
				friend class cJoypadCtrl;
			protected://hm::cTask
				//�^�X�N��������
				virtual bool construct(){
					for(int i=0;i<16;++i){
						Ptr->PButSta[i]=0;
						Ptr->ButSta[i]=0;
					}
					return 0;
					return false;
				}
				//�^�X�N�ʏ폈��
				virtual bool task(){
					for(int i=0;i<Ptr->getNum();++i){
						Ptr->PButSta[i]=Ptr->ButSta[i];
						Ptr->ButSta[i]=GetJoypadInputState(i);
					}
					return false;
				}
				//�^�X�N�I������
				virtual bool destruct(){return false;}
			private:
				cJoypadCtrl* Ptr;
			};
		public:
			cTask Task;
		public:
			class cJoypad{
			private:
				cJoypadCtrl* Ptr;
				int ch;
			public:
				cJoypad(cJoypadCtrl* Ptr_,int ch_):Ptr(Ptr_),ch(ch_){return;}
				~cJoypad(){stopVibration();}
				int get(int _no){
					if((Ptr->ButSta[ch]&(1<<_no))!=0 && (Ptr->PButSta[ch]&(1<<_no))!=0)return 2;
					else if((Ptr->ButSta[ch]&(1<<_no))!=0)return 1;
					else if((Ptr->PButSta[ch]&(1<<_no))!=0)return -1;
					else return 0;
				}
				//�E����+�A���オ-
				Pint getLStick(){
					Pint tmp;
					GetJoypadAnalogInput(&(tmp.x),&(tmp.y),ch);
					return tmp;
				}
				//�E����+�A���オ-
				Pint getRStick(){
					Pint tmp;
					GetJoypadAnalogInputRight(&(tmp.x),&(tmp.y),ch);
					return tmp;
				}
				void startVibration(int Power,int mSec=0){StartJoypadVibration(ch,Power,mSec);}
				void stopVibration(){StopJoypadVibration(ch);}
			};
		};
		extern cMouse Mouse;
		extern cKeyboad Keyboad;
		extern cJoypadCtrl JoypadCtrl;
	}
}
#
#endif
