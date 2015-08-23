#ifndef INC_HMLIB_DXDISPLAY
#define INC_HMLIB_DXDISPLAY 100
#
#ifndef INC_HMLIB_HMPOS
#	include "hmLib_v2/hmPos.hpp"
#endif
#ifndef INC_HMLIB_HMTASK
#	include "hmLib_v2/hmTask.hpp"
#endif
#ifndef INC_HMLIB_DXGRAPH
#	include "hmLib_v2/dxImage.hpp"
#endif
#include "hmLib_v2/DxLib.h"
#define DX_DISPLAY_TASK 0x240
#define DX_DISPLAY_SUBTASK 0x260
namespace hmLib{
	namespace dx{
		class cDisplay{
		private:
			class cTask:public hm::cTask{
				friend class cDisplay;
			private:
				//�`���w��p�T�u�^�X�N
				class:public hm::cTask{
				private:
					int Handle;
				protected://hm::cTask
					//�^�X�N��������
					virtual bool construct(){
						// �`����ʂ𗠉�ʂɂ���
						SetDrawScreen(Handle);
						//�I����v��
						exit();

						return false;
					}
					//�^�X�N�ʏ폈��
					virtual bool work(){return false;}
					//�^�X�N�I������
					virtual bool destruct(){return false;}
				public:
					void setHandle(int Handle_){Handle=Handle_;}
				}SubTask;
			private:
				const cDisplay* Ptr;
			protected://hm::cTask
				//�^�X�N��������
				virtual bool construct(){
					//�T�u�^�X�N�ɕ`����������
					SubTask.setHandle(dx::cScreen::DefaultBackScreen.getHandle());
					//�`���w��T�u�^�X�N
					hm::cTask::createSister(SubTask,DX_DISPLAY_SUBTASK);
					//�E�B���h�E�A�C�R���ύX
					SetWindowIconID(1) ;

					return false;
				}
				//�^�X�N�ʏ폈��
				virtual bool task(){
					// ����ʂ̓��e��\��ʂɔ��f������
					ScreenFlip();
					//�������MainDisplay�֕ύX
					dx::cScreen::scoped_active TmpScr(dx::cScreen::DefaultBackScreen);
					//��ʕ`����e����
					ClearDrawScreen() ;

					return false;
				}
				//�^�X�N�I������
				virtual bool destruct(){return false;}
			public:
				cTask():hm::cTask(DX_DISPLAY_TASK){return;}
			};
		private:
			Pint Size;
			int ClrBit;
			bool IsWindowMode;
			std::string Name;
			bool CanWindowExtend;
		public:
			cTask Task;
		public:
			cDisplay()
				:Size(Pint(800,600))
				,ClrBit(32)
				,CanWindowExtend(false){
				Name="";
				CanWindowExtend=false;
			}
			cDisplay& operator()(bool WindowMode_=false,const std::string& Name_="",Pint DisplaySize_=Pint(800,600),int DisplayClrBit_=32){
				setSize(DisplaySize_,DisplayClrBit_);
				setWindowMode(WindowMode_);
				setName(Name_);
				return *this;
			}
			bool setSize(Pint Size_,int ClrBit_){
				//�`���ʂ�ݒ�
				SetGraphMode(Size_.x,Size_.y,ClrBit_);
				Size=Size_;
				ClrBit=ClrBit_;
				return false;
			}
			Pint getSize()const{return Size;}
			int getClrBit()const{return ClrBit;}
			bool setName(const std::string& Name_){
				//�E�B���h�E����ύX
				SetMainWindowText(Name_.c_str());
				Name=Name_;
				return false;
			}
			std::string getName()const{return Name;}
			bool enableWindowExtend(){
				SetWindowSizeChangeEnableFlag(true);
				CanWindowExtend=true;
				return false;
			}
			bool disableWindowExtend(){
				SetWindowSizeChangeEnableFlag(false);
				CanWindowExtend=false;
			}
			bool canWindowExtend()const{return CanWindowExtend;}
			bool setWindowMode(bool IsWindowMode_){
				//�E�B���h�E���[�h
				ChangeWindowMode(static_cast<int>(IsWindowMode));
				IsWindowMode=IsWindowMode_;
				return false;
			}
			bool isWindowMode()const{return IsWindowMode;}
		};
		extern  cDisplay Display;
	}
}
#
#endif
