#ifndef INC_HMLIB_DXKERNEL
#define INC_HMLIB_DXKERNEL 100
#
#ifndef INC_HMLIB_HMTASK
#	include "hmLib_v2/hmTask.hpp"
#endif
#include "hmLib_v2/DxLib.h"
#include <list>
#define DX_KERNEL_TASK 0x250
#define DX_PRE_KERNEL_TASK 0x210
#define DX_POST_KERNEL_TASK 0x290
namespace hmLib{
	namespace dx{
		class cKernel{
		private:
			unsigned int Cnt;
			bool IsOutputLog;
			bool CanRunMultiDxLib;
			bool IsRunAlways;
			bool IsCalcLowPrecise;
		private:
			class cTask:public hm::cTask{
				friend cKernel;
			protected://hmTask
				//�^�X�N��������
				virtual bool construct(){
					//���O�o�͂𖳌��ɂ���
					SetOutApplicationLogValidFlag(static_cast<int>(Ptr->IsOutputLog));

					//��d�N����e�F����
					SetDoubleStartValidFlag(static_cast<int>(Ptr->CanRunMultiDxLib));

					//Active�łȂ��Ă����삷��
					SetAlwaysRunFlag(static_cast<int>(Ptr->IsRunAlways));

					//double��float���x���܂ŗ��Ƃ��ĉ��Z���Ȃ�
					SetUseFPUPreserveFlag(static_cast<int>(Ptr->IsCalcLowPrecise));

					//DxLib�N��
					if( DxLib_Init() == -1 )return true;

					//�J�E���^������
					Ptr->Cnt=0;
					
					return false;
				}
				//�^�X�N�ʏ폈��
				virtual bool task(){
					// Windows �V�X�e�����炭�������������
					if( ProcessMessage() != 0 )return true;

					//�J�E���^��i�߂�
					++(Ptr->Cnt);

					return false;
				}
				//�^�X�N�I������
				virtual bool destruct(){
					//DxLib�I��
					DxLib_End();

					return false;
				}
			private:
				cKernel* Ptr;
			public:
				cTask():hm::cTask(DX_KERNEL_TASK){return;}
			};
		public:
			cTask Task;
		public:
			cKernel()
				:IsRunAlways(true)
				,IsCalcLowPrecise(true)
				,CanRunMultiDxLib(true)
				,IsOutputLog(true){
				Task.Ptr=this;
				return;
			}
			unsigned int getCount()const{return Cnt;}
			cKernel& operator()(bool IsRunAlways_=true,bool IsCalcLowPrecise_=true,bool CanRunMultiDxLib_=true,bool IsOutputLog_=false){
				IsOutputLog=IsOutputLog_;
				CanRunMultiDxLib=CanRunMultiDxLib_;
				IsCalcLowPrecise=IsCalcLowPrecise_;
				IsOutputLog=IsOutputLog_;
				return *this;
			}
		};
		extern cKernel Kernel;
	}
}
#
#endif
