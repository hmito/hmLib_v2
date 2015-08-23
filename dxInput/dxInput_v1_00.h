#ifndef INC_HMLIB_DXINPUT
#define INC_HMLIB_DXINPUT 100
#
#ifndef INC_HMLIB_HMTASK
#	include "hmLib_v2/hmTask.hpp"
#endif
#ifndef INC_HMLIB_HMSTR
#	include "hmLib_v2/hmStr.hpp"
#endif
#ifndef INC_HMLIB_DXFONT
#	include "hmLib_v2/dxFont.hpp"
#endif
#ifndef INC_HMLIB_DXDRAWFUNC
#	include "hmLib_v2/dxDrawFunc.hpp"
#endif
#ifndef INC_HMLIB_DXDRAWCTRL
#	include "hmLib_v2/dxDrawCtrl.hpp"
#endif
#include "hmLib_v2/DxLib.h"
#define DX_INPUT_TASK 0x200
namespace hmLib{
	namespace dx{
		//cInput�N���X
		class cInput{
		public:
			//�`��W���֐�
			class itfInputDrawFn{
			/*	// �h�l�d���͕�����̕`��ɕK�v�ȏ��̓��̕��ߏ��
				typedef struct tagIMEINPUTCLAUSEDATA{
					int						Position ;				// ���o�C�g�ڂ���
					int						Length ;				// ���o�C�g��
				} IMEINPUTCLAUSEDATA, *LPIMEINPUTCLAUSEDATA ;

				// �h�l�d���͕�����̕`��ɕK�v�ȏ��
				typedef struct tagIMEINPUTDATA{
					const TCHAR *				InputString ;			// ���͒��̕�����
					int							CursorPosition ;		// �J�[�\���̓��͕����񒆂̈ʒu(�o�C�g�P��)
					const IMEINPUTCLAUSEDATA *	ClauseData ;			// ���ߏ��
					int							ClauseNum ;				// ���ߏ��̐�
					int							SelectClause ;			// �I�𒆂̕���( -1 �̏ꍇ�͂ǂ̕��߂ɂ������Ă��Ȃ�( �����ɃJ�[�\�������� ) )
					int							CandidateNum ;			// �ϊ����̐�( 0�̏ꍇ�͕ϊ����ł͂Ȃ� )
					const TCHAR **				CandidateList ;			// �ϊ���╶���񃊃X�g( ��F���Ԗڂ̌���`�悷��ꍇ  DrawString( 0, 0, data.CandidateList[ n ], GetColor(255,255,255) ); )
					int							SelectCandidate ;		// �I�𒆂̕ϊ����
				} IMEINPUTDATA, *LPIMEINPUTDATA ;*/
			public://basicInputDrawFn
				virtual void operator()(Pint Pos_,IMEINPUTDATA* pIME,const hm::cRGBClr& StrClr_,const dx::cFont& Font_,const hm::cRGBClr& StrEdgeClr_)=0;
				virtual void operator()(Pint Pos_,std::string Str_,const hm::cRGBClr& StrClr_,const dx::cFont& Font_,const hm::cRGBClr& StrEdgeClr_)=0;
				virtual unsigned int getSize(IMEINPUTDATA* pIME,const dx::cFont& Font_){
					if(pIME==0)return 0;
					return dx::getDrawStringWidth(std::string(pIME->InputString),Font_);
				}
				virtual unsigned int getSize(std::string Str_,const dx::cFont& Font_){
					return dx::getDrawStringWidth(Str_,Font_);
				}
			};
		private:
			static int ActiveHandle;
		public:
			static hm::cPublicTask Task;
			static IMEINPUTDATA* getIMEPtr();
		private:
			int Handle;
		public:
			cInput(){Handle=-1;}
			~cInput(){release();}
			void release(){
				if(Handle>0)DeleteKeyInput(Handle);
				Handle=-1;
			}
			void create(int MaxStrLength=256,int CancelValidFlag=0,int SingleCharOnlyFlag=0,int NumCharOnlyFlag=0,std::string IniStr=""){
				inactive();
				release();
				Handle=MakeKeyInput(MaxStrLength,CancelValidFlag,SingleCharOnlyFlag,NumCharOnlyFlag);
				SetKeyInputString(IniStr.c_str(),Handle);
			}
			void setStr(std::string IniStr){SetKeyInputString(IniStr.c_str(),Handle);}
			void active(){
				if(ActiveHandle==Handle){
					ReStartKeyInput(Handle);
				}else{
					SetActiveKeyInput(Handle);
					ActiveHandle=Handle;
				}
			}
			void inactive(){
				if(ActiveHandle==Handle){
					SetActiveKeyInput(-1);
					ActiveHandle=-1;
				}
			}
			int status()const{
				//����͒�:0
				//���͓r��:1
				//���͊���:2
				//���͏I��:3
				if(ActiveHandle!=Handle)return 0;
				else{
					int ans=CheckKeyInput(Handle);
					if(ans<0)return -1;
					return ans+1;
				}
			}
			int getHandle()const{return Handle;}
			const char* getCStr()const{
				GetKeyInputString(hm::getTmpStrAdress(),Handle);
				return hm::getTmpStrAdress();
			}
			std::string getStr()const{
				GetKeyInputString(hm::getTmpStrAdress(),Handle);
				return std::string(hm::getTmpStrAdress());
			}
			int getNum()const{return GetKeyInputNumber(Handle);}
			double getFloatNum()const{return (double)GetKeyInputNumberToFloat(Handle);}
			int getCursorPos()const{return GetKeyInputCursorPosition(Handle);}
			void setCursorPos(int Pos_)const{SetKeyInputCursorPosition(Pos_,Handle);}
			void getSelectArea(int* pStart_,int* pEnd_)const{
				GetKeyInputSelectArea(pStart_,pEnd_,Handle);
				if(*pStart_<0){
					*pStart_ = getCursorPos();
					*pEnd_=*pStart_;
				}else if(*pStart_>*pEnd_){
					int tmp=*pStart_;
					*pStart_=*pEnd_;
					*pEnd_=tmp;
				}
			}
			void setSelectArea(int Start_,int End_)const{
				if(Start_==End_){
					Start_=-1;
					End_=-1;
				}
				SetKeyInputSelectArea(Start_,End_,Handle);
			}
		};
		//�W��InputDrawFn�N���X
		class cInputDrawFn:public cInput::itfInputDrawFn{
			class:public hm::cTask{
			public:
				bool ReserveFlag;
				cInputDrawFn* This;
			protected://hmTask
				//�^�X�N��������
				virtual bool construct(){return false;}
				//�^�X�N�ʏ폈��
				virtual bool task(){
					if(!ReserveFlag){
						exit();
						return false;
					}
					dx::cArea Ar;
					dx::cBlend Bl;
					dx::cBright Br;
					dx::cArea::scoped_active TmpArea(Ar);
					dx::cBlend::scoped_active TmpBlend(Bl);
					dx::cBright::scoped_active TmpBright(Br);
					//IME�\��
					if(This->pIME){
						std::string IMEStr=std::string(This->pIME->InputString);
						Pint Pos(0,0);
						//�e���ߕ\��
						for(int i=0;i< This->pIME->ClauseNum; ++i){
							std::string Tmp=IMEStr.substr(This->pIME->ClauseData[i].Position,This->pIME->ClauseData[i].Length);
							//�I�𒆂̕���
							if(i==This->pIME->SelectClause){
								//�ϊ���₪����
								if(This->pIME->CandidateNum){
									//�\���ʒu�����P��
									Pint Adj;
									if(dx::cFont::getVertical(*(This->pFont)))Adj.set(dx::cFont::getSize(*(This->pFont)),0);
									else Adj.set(0,dx::cFont::getSize(*(This->pFont)));

									//�㉺�ɕϊ����\��
									for(int i=0; i < This->pIME->CandidateNum; ++i){
										if( i < This->pIME->SelectCandidate - This->UpNum || i > This->pIME->SelectCandidate + This->DwNum )continue;
										//�Ԋ|�������ŕ\��
 										This->drawStr_withBox(This->Pos+Pos+Adj*(i-This->pIME->SelectCandidate),std::string(This->pIME->CandidateList[i]));
									}
								}//�ϊ����Ȃ�
								else{
									This->drawStr_withBox(This->Pos+Pos,Tmp);
								}
							}//�I������Ă��Ȃ�����
							else{
								//���t�����ŕ\��
								This->drawStr_withLine(This->Pos+Pos,Tmp);
							}
							if(This->pFont->getVertical())Pos+=Pint(0,dx::getDrawStringWidth(Tmp,*(This->pFont)));
							else Pos+=Pint(dx::getDrawStringWidth(Tmp,*(This->pFont)),0);
						}
					}

					ReserveFlag=false;

					return false;
				}
				//�^�X�N�I������
				virtual bool destruct(){return false;}
			}Task;
		protected:
			void drawStr_withLine(Pint Pos_,const std::string& Str_){
				if(dx::cFont::getVertical(*pFont))	dx::drawLine(Pos_+Pint(dx::cFont::getSize(*pFont),dx::cFont::getSize(*pFont)/8),Pos_+Pint(dx::cFont::getSize(*pFont),dx::getDrawStringWidth(Str_,*pFont)-dx::cFont::getSize(*pFont)/8),hm::cRGBClr(255-StrClr.r,255-StrClr.g,255-StrClr.b));
				else							dx::drawLine(Pos_+Pint(dx::cFont::getSize(*pFont)/8,dx::cFont::getSize(*pFont)),Pos_+Pint(dx::getDrawStringWidth(Str_,*pFont)-dx::cFont::getSize(*pFont)/8,dx::cFont::getSize(*pFont)),hm::cRGBClr(255-StrClr.r,255-StrClr.g,255-StrClr.b));
				dx::drawStr(Pos_,Str_,StrClr,*pFont,StrEdgeClr);
			}
			void drawStr_withBox(Pint Pos_,const std::string& Str_){
				if(dx::cFont::getVertical(*pFont))	dx::drawBox(Pos_,Pos_+Pint(dx::cFont::getSize(*pFont),dx::getDrawStringWidth(Str_,*pFont)),hm::cRGBClr(255-StrClr.r,255-StrClr.g,255-StrClr.b));
				else							dx::drawBox(Pos_,Pos_+Pint(dx::getDrawStringWidth(Str_,*pFont),dx::cFont::getSize(*pFont)),hm::cRGBClr(255-StrClr.r,255-StrClr.g,255-StrClr.b));
				dx::drawStr(Pos_,Str_,StrClr,*pFont,StrEdgeClr);
			}
		private:
			int UpNum;
			int DwNum;
		private:
			Pint Pos;
			IMEINPUTDATA* pIME;
			hm::cRGBClr StrClr;
			hm::cRGBClr StrEdgeClr;
			const dx::cFont* pFont;
			std::string Str;
		public://basicInputDrawFn
			virtual void operator()(Pint Pos_,IMEINPUTDATA* pIME_,const hm::cRGBClr& StrClr_,const dx::cFont& Font_,const hm::cRGBClr& StrEdgeClr_){
				Pos=Pos_;
				pIME=pIME_;
				StrClr=StrClr_;
				StrEdgeClr=StrEdgeClr_;
				pFont=&Font_;
				Task.ReserveFlag=true;
				if(!Task.is_run())cInput::Task.insertChild(Task);
			}
			virtual void operator()(Pint Pos_,std::string Str_,const hm::cRGBClr& StrClr_,const dx::cFont& Font_,const hm::cRGBClr& StrEdgeClr_){
				Pos=Pos_;
				pIME=0;
				Str=Str_;
				StrClr=StrClr_;
				StrEdgeClr=StrEdgeClr_;
				pFont=&Font_;
				drawStr_withBox(Pos,Str);
			}
		public:
			cInputDrawFn(int UpNum_,int DwNum_):UpNum(UpNum_),DwNum(DwNum_){Task.This=this;}
		};
		extern cInputDrawFn InputDrawFn;
		inline int drawInpStr(const Pint& Pos,const cInput& Inp,
			const hm::cRGBClr& StrClr,const dx::cFont& Font=dx::cFont::getDefault(false),
			const hm::cRGBClr& StrEdgeClr=hm::cRGBClr(0,0,0),cInputDrawFn& InputDrawFn=dx::InputDrawFn){
			//���͒��̕�����
			std::string str=Inp.getStr();

			//���͒��łȂ��ꍇ
			if(Inp.status()!=1){
				//���ʂɕ�����`��
				dx::drawStr(Pos,str,StrClr,Font,StrEdgeClr);
				return Inp.status();
			}

			//IME�`��ɕK�v�ȃT�C�Y���擾
			IMEINPUTDATA* pIME=cInput::getIMEPtr();

			//�ϊ�����IME�����񂪑��݂��Ȃ��ꍇ
			if(pIME==0){
				//�J�[�\���ʒu���擾
				int Cur=Inp.getCursorPos();
				int CurPos;

				//�I��͈͂��擾
				int Begin,End;
				Inp.getSelectArea(&Begin,&End);
				
				//�I��͈͂����݂����ꍇ
				if(Begin!=End){
					//�I��͈͂̕`��ɕK�v�Ȕ͈͂��v�Z
					unsigned int AreaSize=InputDrawFn.getSize(str.substr(Begin,End-Begin),Font);

					//�O���̕�����`��ɕK�v�Ȕ͈͂��v�Z
					unsigned int FirstSize=dx::getDrawStringWidth(str.substr(0,Begin),Font);
					
					//�O���̕�����`��
					dx::drawStr(Pos,str.substr(0,Begin),StrClr,Font,StrEdgeClr);

					//�㔼�̕�����`��
					if(dx::cFont::getVertical(Font))	dx::drawStr(Pos+Pint(0,FirstSize+AreaSize),str.substr(End,str.size()-End),StrClr,Font,StrEdgeClr);
					else							dx::drawStr(Pos+Pint(FirstSize+AreaSize,0),str.substr(End,str.size()-End),StrClr,Font,StrEdgeClr);

					//�J�[�\���ʒu�ݒ�
					if(Begin==Cur)CurPos=FirstSize;
					else CurPos=FirstSize+AreaSize;

					//�I��͈͕`��
					if(dx::cFont::getVertical(Font))	InputDrawFn(Pos+Pint(0,FirstSize),str.substr(Begin,End-Begin),StrClr,Font,StrEdgeClr);
					else							InputDrawFn(Pos+Pint(FirstSize,0),str.substr(Begin,End-Begin),StrClr,Font,StrEdgeClr);
				}//�I��͈͂����݂��Ȃ��Ƃ�
				else{
					//���ʂɕ�����`��
					dx::drawStr(Pos,str,StrClr,Font,StrEdgeClr);

					//�J�[�\���ʒu�ݒ�
					CurPos=dx::getDrawStringWidth(str.substr(0,Inp.getCursorPos()),Font);
				}

				//�J�[�\���\��
				if(dx::cFont::getVertical(Font))	dx::drawLine(Pos+Pint(-1,CurPos-1),Pos+Pint(dx::cFont::getSize(Font)+1,CurPos-1),StrClr,1);
				else							dx::drawLine(Pos+Pint(CurPos-1,-1),Pos+Pint(CurPos-1,dx::cFont::getSize(Font)+1),StrClr,1);

			}//IME���N�����Ă���ꍇ
			else{
				//�I��͈͂��擾
				int Begin,End;
				Inp.getSelectArea(&Begin,&End);

				//�I��͈͂̕`��ɕK�v�Ȕ͈͂��v�Z
				unsigned int AreaSize=InputDrawFn.getSize(pIME,Font);

				//�O���̕�����`��ɕK�v�Ȕ͈͂��v�Z
				unsigned int FirstSize=dx::getDrawStringWidth(str.substr(0,Begin),Font);

				//�O���̕�����`��
				dx::drawStr(Pos,str.substr(0,Begin),StrClr,Font,StrEdgeClr);

				//�㔼�̕�����`��
				if(dx::cFont::getVertical(Font))	dx::drawStr(Pos+Pint(0,FirstSize+AreaSize),str.substr(End,str.size()-End),StrClr,Font,StrEdgeClr);
				else							dx::drawStr(Pos+Pint(FirstSize+AreaSize,0),str.substr(End,str.size()-End),StrClr,Font,StrEdgeClr);

				//IME�`��
				if(dx::cFont::getVertical(Font))	InputDrawFn(Pos+Pint(0,FirstSize),pIME,StrClr,Font,StrEdgeClr);
				else							InputDrawFn(Pos+Pint(FirstSize,0),pIME,StrClr,Font,StrEdgeClr);
			}

			return Inp.status();
		}
		inline int drawInpStrArea(const Pint& Pos,const Pint& size,const cInput& Inp,align_quad DrawPos=aliq::center,
			const hm::cRGBClr& StrClr=hm::cRGBClr(255,255,255),const dx::cFont& Font=dx::cFont::getDefault(false),
			const hm::cRGBClr& StrEdgeClr=hm::cRGBClr(0,0,0),cInputDrawFn& InputDrawFn=dx::InputDrawFn){
			//�`��͈͊m��
			Pint strsize;

			//IME�`��ɕK�v�ȃT�C�Y���擾
			IMEINPUTDATA* pIME=cInput::getIMEPtr();

			//�ϊ�����IME�����񂪑��݂��Ȃ��ꍇ
			if(pIME==0){
				//�I��͈͂��擾
				int Begin,End;
				Inp.getSelectArea(&Begin,&End);
				
				//�I��͈͂����݂����ꍇ
				if(Begin!=End){
					std::string str=Inp.getStr();

					//Area�̕`��͈́{Area���������`��͈�+
					if(dx::cFont::getVertical(Font)){
						strsize.x=dx::cFont::getSize(Font);
						strsize.y=dx::getDrawStringWidth(str.substr(0,Begin),Font)+InputDrawFn.getSize(str.substr(Begin,End-Begin),Font)+dx::getDrawStringWidth(str.substr(End,str.size()-End),Font);
					}else{
						strsize.x=dx::getDrawStringWidth(str.substr(0,Begin),Font)+InputDrawFn.getSize(str.substr(Begin,End-Begin),Font)+dx::getDrawStringWidth(str.substr(End,str.size()-End),Font);
						strsize.y=dx::cFont::getSize(Font);
					}

				}//�I��͈͂����݂��Ȃ��Ƃ�
				else{
					//�ʏ�̕`��͈�
					if(dx::cFont::getVertical(Font)){
						strsize.x=dx::cFont::getSize(Font);
						strsize.y=dx::getDrawStringWidth(Inp.getStr(),Font);
					}else{
						strsize.x=dx::getDrawStringWidth(Inp.getStr(),Font);
						strsize.y=dx::cFont::getSize(Font);
					}
				}
			}//IME���N�����Ă���ꍇ
			else{
				//�I��͈͂��擾
				int Begin,End;
				Inp.getSelectArea(&Begin,&End);

				//�I��͈͂����݂����ꍇ
				if(Begin!=End){
					std::string str=Inp.getStr();

					//IME�̕`��͈́{�I������Ă��Ȃ�Str�`��͈�
					if(dx::cFont::getVertical(Font)){
						strsize.x=dx::cFont::getSize(Font);
						strsize.y=dx::getDrawStringWidth(str.substr(0,Begin),Font)+InputDrawFn.getSize(pIME,Font)+dx::getDrawStringWidth(str.substr(End,str.size()-End),Font);
					}else{
						strsize.x=dx::getDrawStringWidth(str.substr(0,Begin),Font)+InputDrawFn.getSize(pIME,Font)+dx::getDrawStringWidth(str.substr(End,str.size()-End),Font);
						strsize.y=dx::cFont::getSize(Font);
					}
				}//�I��͈͂����݂��Ȃ��Ƃ�
				else{
					//IME�̕`��͈́{Str�`��͈�
					if(dx::cFont::getVertical(Font)){
						strsize.x=dx::cFont::getSize(Font);
						strsize.y=dx::getDrawStringWidth(Inp.getStr(),Font)+InputDrawFn.getSize(pIME,Font);
					}else{
						strsize.x=dx::getDrawStringWidth(Inp.getStr(),Font)+InputDrawFn.getSize(pIME,Font);
						strsize.y=dx::cFont::getSize(Font);
					}
				}
			}

			//�`��ʒu�����Y�o
			Pint adj;
			//x��������
			if(aliq::left&DrawPos)adj.x=0;
			else if(aliq::right&DrawPos)adj.x=size.x-strsize.x;
			else adj.x=(size.x-strsize.x)/2;
			//y��������
			if(aliq::top&DrawPos)adj.y=0;
			else if(aliq::bottom&DrawPos)adj.y=size.y-strsize.y;
			else adj.y=(size.y-strsize.y)/2;

			//�`��
			return drawInpStr(Pos+adj,Inp,StrClr,Font,StrEdgeClr,InputDrawFn);
		}
	}
}
#
#endif
