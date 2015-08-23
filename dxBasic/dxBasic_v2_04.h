#ifndef INC_HMLIB_DXBASIC
#define INC_HMLIB_DXBASIC 204
#
#include "hmLib_v2/DxLib.h"
#ifndef INC_HMLIB_DXCOLOR
#	include "hmLib_v2/dxColor.hpp"
#endif
#ifndef INC_HMLIB_HMRECT
#	include "hmLib_v2/hmRect.hpp"
#endif
#ifndef INC_HMLIB_HMALIGN
#	include "hmLib_v2/hmAlign.hpp"
#endif
#include <deque>
#include <list>
//namespace�Q
namespace KEY{
	enum KEYNAME{
		BACK=KEY_INPUT_BACK, 	// �o�b�N�X�y�[�X�L�[
		TAB=KEY_INPUT_TAB, 	// �^�u�L�[
		ENTER=KEY_INPUT_RETURN, 	// �G���^�[�L�[
		LSHIFT=KEY_INPUT_LSHIFT, 	// ���V�t�g�L�[
		RSHIFT=KEY_INPUT_RSHIFT,	// �E�V�t�g�L�[
		LCTRL=KEY_INPUT_LCONTROL,	// ���R���g���[���L�[
		RCTRL=KEY_INPUT_RCONTROL, 	// �E�R���g���[���L�[
		ESC=KEY_INPUT_ESCAPE, 	// �G�X�P�[�v�L�[
		SPACE=KEY_INPUT_SPACE, 	// �X�y�[�X�L�[
		PGUP=KEY_INPUT_PGUP,	// �o�������t�o�L�[
		PGDN=KEY_INPUT_PGDN, 	// �o�������c�������L�[
		END=KEY_INPUT_END, 	// �G���h�L�[
		HOME=KEY_INPUT_HOME, 	// �z�[���L�[
		LEFT=KEY_INPUT_LEFT, 	// ���L�[
		UP=KEY_INPUT_UP, 	// ��L�[
		RIGHT=KEY_INPUT_RIGHT, 	// �E�L�[
		DOWN=KEY_INPUT_DOWN,	// ���L�[
		INS=KEY_INPUT_INSERT, 	// �C���T�[�g�L�[
		DEL=KEY_INPUT_DELETE,	// �f���[�g�L�[
		MINUS=KEY_INPUT_MINUS, 	// �|�L�[
		INPUT=KEY_INPUT_YEN, 	// ���L�[
		PREVTRACK=KEY_INPUT_PREVTRACK, 	// �O�L�[
		PERIOD=KEY_INPUT_PERIOD, 	// �D�L�[
		SLASH=KEY_INPUT_SLASH, 	// �^�L�[
		LALT=KEY_INPUT_LALT, 	// ���`�k�s�L�[
		RALT=KEY_INPUT_RALT, 	// �E�`�k�s�L�[
		SCROLL=KEY_INPUT_SCROLL, 	// ScrollLock�L�[
		SEMICOLON=KEY_INPUT_SEMICOLON, 	// �G�L�[
		COLON=KEY_INPUT_COLON, 	// �F�L�[
		LBRACKET=KEY_INPUT_LBRACKET, 	// �m�L�[
		RBRACKET=KEY_INPUT_RBRACKET, 	// �n�L�[
		AT=KEY_INPUT_AT, 	// ���L�[
		BACKSLASH=KEY_INPUT_BACKSLASH, 	// �_�L�[
		COMMA=KEY_INPUT_COMMA, 	// �C�L�[
		CAPLOCK=KEY_INPUT_CAPSLOCK, 	// CaspLock�L�[
		PAUSE=KEY_INPUT_PAUSE, 	// PauseBreak�L�[
		NUMPAD0=KEY_INPUT_NUMPAD0, 	// �e���L�[�O
		NUMPAD1=KEY_INPUT_NUMPAD1, 	// �e���L�[�P
		NUMPAD2=KEY_INPUT_NUMPAD2, 	// �e���L�[�Q
		NUMPAD3=KEY_INPUT_NUMPAD3, 	// �e���L�[�R
		NUMPAD4=KEY_INPUT_NUMPAD4, 	// �e���L�[�S
		NUMPAD5=KEY_INPUT_NUMPAD5, 	// �e���L�[�T
		NUMPAD6=KEY_INPUT_NUMPAD6, 	// �e���L�[�U
		NUMPAD7=KEY_INPUT_NUMPAD7, 	// �e���L�[�V
		NUMPAD8=KEY_INPUT_NUMPAD8, 	// �e���L�[�W
		NUMPAD9=KEY_INPUT_NUMPAD9, 	// �e���L�[�X
		NUMPADMLT=KEY_INPUT_MULTIPLY, 	// �e���L�[���L�[
		NUMPADADD=KEY_INPUT_ADD, 	// �e���L�[�{�L�[
		NUMPADSUB=KEY_INPUT_SUBTRACT, 	// �e���L�[�|�L�[
		NUMPADDOT=KEY_INPUT_DECIMAL, 	// �e���L�[�D�L�[
		NUMPADDIV=KEY_INPUT_DIVIDE, 	// �e���L�[�^�L�[
		NUMPADENTER=KEY_INPUT_NUMPADENTER, 	// �e���L�[�̃G���^�[�L�[
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
		NUM0=KEY_INPUT_0 ,	// �O�L�[
		NUM1=KEY_INPUT_1 ,	// �P�L�[
		NUM2=KEY_INPUT_2 ,	// �Q�L�[
		NUM3=KEY_INPUT_3 ,	// �R�L�[
		NUM4=KEY_INPUT_4 ,	// �S�L�[
		NUM5=KEY_INPUT_5 ,	// �T�L�[
		NUM6=KEY_INPUT_6 ,	// �U�L�[
		NUM7=KEY_INPUT_7, 	// �V�L�[
		NUM8=KEY_INPUT_8, 	// �W�L�[
		NUM9=KEY_INPUT_9, 	// �X�L�[
		SHIFT=256,			//��Shift
		CTRL=257,			//��CTRL
		ALT=258,			//��ALT
		MOSL=259,
		MOSR=260,
		MOSC=261
	};
}
namespace BLEND{
	enum BlendMode{Normal=DX_BLENDMODE_NOBLEND,Alpha=DX_BLENDMODE_ALPHA,Add=DX_BLENDMODE_ADD,Sub=DX_BLENDMODE_SUB,Mula=DX_BLENDMODE_MULA,Invsrc=DX_BLENDMODE_INVSRC};
}
namespace FONTTYPE{
	enum FontTypeName{Normal=DX_FONTTYPE_NORMAL,Edge=DX_FONTTYPE_EDGE,Aalia=DX_FONTTYPE_ANTIALIASING,EdgeAalia=DX_FONTTYPE_ANTIALIASING_EDGE};
};
class dxDMode;
class dxDArea;
class dxFont;
class dxInput;
class dxBasicGraph;
class dxGrpah;
class dxBasicScreen;
class dxScreen;
class dxGraphs;
class dxImGraph;
//dxnamespace
namespace dx{
//��{�֐�
	int ini(std::string _WindowName="dxBasic",int _ScreenX=800,int _ScreenY=600,int _ScreenClrBit=32,int _HighPreciseFlag=0,int _AlwaysRunFlag=1,int _WindowModeFlag=1,int _WindowExtendFlag=0);
	int work(int _DrawIntervalTime);
	int end();
//Screen�֘A
	int getScreenX();
	int getScreenY();
	Pint getScreenSize();
	int getScreenClrBit();
//Font�֘A
	std::string getFontName(int FontHandle=-1);
	int getFontSize(int FontHandle=-1);
	int getFontThick(int FontHandle=-1);
	FONTTYPE::FontTypeName getFontType();
	void setFont(const std::string& _FontName,const int& _Size,const int& _Thick,FONTTYPE::FontTypeName _Type=FONTTYPE::Normal);
	const dxFont& getStdFont();
	const dxFont& getStdVFont();
	int getDrawStringWidth(const std::string& str,int strlen,int FontHandle=-1,int VFlag=0);
//KeyGet�֐�
	int getKey(KEY::KEYNAME KeyName);
	int getNum(int i);
	int getKeyUp();
	int getKeyDown();
	int getKeyLeft();
	int getKeyRight();
	int getMosL();
	int getMosR();
	int getMosC();
	int getMosH();
	Pint getMosPos();
	Pint getMosPPos();
	Pint getMosLPos();
	Pint getMosRPos();
	Pint getMosCPos();
//Time�֘A
	double getFPS();
	int getFrameTime();
	int getFrameCnt();
//Input�֘A
	bool checkStdInp(const std::string& InpName);
	void setStdInp(const std::string& InpName);
	int checkStdInpSta();
	dxInput& getStdInp(const std::string& InpName);
//�`��֘A
	void setDrawInpCandiNum(uint minNo,uint maxNo);
//�W���֐�
	bool getKeyActive();
	void setKeyActive(bool _KeyActiveFlag);
	void resetKeyActive();
	class TmpKeyActive;
	Pint getGlobalStd();
	void setGlobalStd(const Pint& _gstd);
	void resetGlobalStd();
	class TmpGlobalStd;
	const dxDMode& getDrawMode();
	void setDrawMode(const dxDMode& _dmode);
	void resetDrawMode();
	class TmpDrawMode;
	const dxDArea& getDrawArea();
	void setDrawArea(const dxDArea& _darea);
	void resetDrawArea();
	class TmpDrawArea;
	dxBasicScreen getDrawScreen();
	void setDrawScreen(const dxBasicScreen& _dxgrp);
	void resetDrawScreen();
	class TmpDrawScreen;
	inline Pint GtoS(const Pint& pos);
	inline Pint StoG(const Pint& pos);
}
//dxDMode�N���X
class dxDMode{
public:
	int Blend;
	BLEND::BlendMode bmode;
	dxRGB Bright;
	dxDMode():Bright(255,255,255){
		Blend=255;
		bmode=BLEND::Alpha;
	}
	dxDMode(int _Blend,BLEND::BlendMode _bmode=BLEND::Alpha,dxRGB _Bright=dxRGB(255,255,255)){
		Blend=_Blend;
		bmode=_bmode;
		Bright=_Bright;
	}
	dxDMode(dxRGB _Bright,int _Blend=255,BLEND::BlendMode _bmode=BLEND::Alpha){
		Blend=_Blend;
		bmode=_bmode;
		Bright=_Bright;
	}
	dxDMode operator+(const dxDMode& dmode){
		dxDMode tmp;
		tmp.Bright.r=((int)Bright.r*(int)dmode.Bright.r)/255;
		tmp.Bright.g=((int)Bright.g*(int)dmode.Bright.g)/255;
		tmp.Bright.b=((int)Bright.b*(int)dmode.Bright.b)/255;

		if(bmode==dmode.bmode){
			if(bmode==BLEND::Alpha){
				tmp.bmode=bmode;
				tmp.Blend=((int)Blend*(int)dmode.Blend)/255;
			}else{
				tmp.bmode=bmode;
				tmp.Blend=min((int)Blend+(int)dmode.Blend,255);
			}
		}else if(bmode==BLEND::Alpha){
			if(Blend==255){
				tmp.bmode=dmode.bmode;
				tmp.Blend=dmode.Blend;
			}else{
				tmp.bmode=bmode;
				tmp.Blend=Blend;
			}
		}else if(dmode.bmode==BLEND::Alpha){
			if(dmode.Blend==255){
				tmp.bmode=bmode;
				tmp.Blend=Blend;
			}else{
				tmp.bmode=dmode.bmode;
				tmp.Blend=dmode.Blend;
			}
		}
		return tmp;
	}
	dxDMode& operator+=(const dxDMode& dmode){
		*this=*this+dmode;
		return *this;
	}
};
//dxDArea�N���X
class dxDArea{
public:
	Pint pos1,pos2;
	bool activeF;
	dxDArea(){
		activeF=false;
	}
	dxDArea(const Rint& _rec){
		activeF=true;
		pos1=_rec.pos1;
		pos2=_rec.pos2;
	}
	void set(){activeF=false;}
	void set(const Rint& _rec){
		pos1=_rec.pos1;
		pos2=_rec.pos2;
		activeF=true;
	}
	Rint getRect()const{return Rint(pos1,pos2);}
	dxDArea operator&(const dxDArea& _darea)const{
		if(!activeF)return _darea;
		if(!_darea.activeF)return *this;
		return dxDArea(this->getRect()&_darea.getRect());
	}
};
//dxFont�N���X
class dxFont{
private:
	std::string Name;
	int Handle;
	int VFlag;
	int Size;
	int Thick;
	FONTTYPE::FontTypeName Type;
public:
	dxFont(){
		Name="�l�r �S�V�b�N";
		Handle=-1;
		VFlag=0;
		Size=16;
		Thick=6;
		Type=FONTTYPE::Normal;
	}
	bool make(int _Size=16,int _Thick=6,std::string _Name="�l�r �S�V�b�N",int _VFlag=0,FONTTYPE::FontTypeName _Type=FONTTYPE::Normal){
		del();
		if(_VFlag!=0){
			VFlag=1;
			Handle=CreateFontToHandle(hmstd::fCharp("@%s",_Name.c_str()),_Size,_Thick,_Type);
		}else{
			VFlag=0;
			Handle=CreateFontToHandle(_Name.c_str(),_Size,_Thick,_Type);
		}
		if(Handle>0){
			Name=_Name;
			Size=_Size;
			Thick=_Thick;
			Type=_Type;
			return false;
		}else{
			Name=dx::getFontName();
			Size=dx::getFontSize();
			Thick=dx::getFontThick();
			Type=dx::getFontType();
			return true;
		}
	}
	~dxFont(){del();}
	void del(){
		if(Handle>=0){
			DeleteFontToHandle(Handle);
			Handle=-1;
		}
	}
	bool empty()const{return Handle<0;}
	std::string getName()const{
		if(Handle>=0)return Name;
		return dx::getFontName();
	}
	int getHandle()const{return Handle;}
	int getVFlag()const{
		if(Handle>=0)return VFlag;
		return 0;
	}
	int getSize()const{
		if(Handle>=0)return Size;
		return dx::getFontSize();
	}
	int getThick()const{
		if(Handle>=0)return Thick;
		return dx::getFontThick();
	}
	FONTTYPE::FontTypeName getType()const{
		if(Handle>=0)return Type;
		return dx::getFontType();
	}
	friend void dx::setFont(const std::string& _FontName,const int& _Size,const int& _Thick,FONTTYPE::FontTypeName _Type);
	friend int dx::getFontSize(int FontHandle);
	friend int dx::getFontThick(int FontHandle);
	friend FONTTYPE::FontTypeName dx::getFontType();
	friend std::string dx::getFontName(int FontHandle);
};
//dxInput�N���X
class dxInput{
private:
	int Handle;
	static int activeHandle;
	static dxInput defaultInp;
public:
	dxInput(){Handle=-1;}
	~dxInput(){del();}
	void del(){
		if(Handle>0)DeleteKeyInput(Handle);
		Handle=-1;
	}
	void make(int MaxStrLength=256,int CancelValidFlag=0,int SingleCharOnlyFlag=0,int NumCharOnlyFlag=0,std::string IniStr=""){
		inactive();
		del();
		Handle=MakeKeyInput(MaxStrLength,CancelValidFlag,SingleCharOnlyFlag,NumCharOnlyFlag);
		SetKeyInputString(IniStr.c_str(),Handle);
	}
	void setStr(std::string IniStr){SetKeyInputString(IniStr.c_str(),Handle);}
	void active(){
		if(activeHandle==Handle){
			ReStartKeyInput(Handle);
		}else{
			SetActiveKeyInput(Handle);
			activeHandle=Handle;
		}
	}
	void inactive(){
		if(activeHandle==Handle)defaultInp.active();
//		if(activeHandle==Handle)SetActiveKeyInput(-1);
	}
	int check()const{
		//����͒�:0
		//���͓r��:1
		//���͊���:2
		//���͏I��:3
		if(activeHandle!=Handle)return 0;
		else{
			int ans=CheckKeyInput(Handle);
			if(ans<0)return -1;
			return ans+1;
		}
	}
	int getHandle()const{return Handle;}
	std::string getInpStr()const{
		if(GetIMEInputData()==0)return "";
		return hmstd::fStr("%s",GetIMEInputData()->InputString);
	}
	std::string getStr()const{
		GetKeyInputString(hm::getTmpStrAdress(),Handle);
		return std::string(hm::getTmpStrAdress());
	}
	int getNum()const{return GetKeyInputNumber(Handle);}
	double getDNum()const{return (double)GetKeyInputNumberToFloat(Handle);}
	friend int dx::ini(std::string _WindowName,int _ScreenX,int _ScreenY,int _ScreenClrBit,int _HighPreciseFlag,int _AlwaysRunFlag,int _WindowModeFlag,int _WindowExtendFlag);
	friend int dx::work(int _DrawIntervalTime);
};
//dxBasicGraph�N���X
class dxBasicGraph{
protected:
	int Handle;
public:
	dxBasicGraph(){Handle=-1;}
	dxBasicGraph(int _Handle){Handle=_Handle;}
	dxBasicGraph(const dxBasicGraph& _grp){Handle=_grp.Handle;}
	virtual bool open(const std::string& _filename){
		del();
		Handle=LoadGraph(_filename.c_str());
		return fail();
	}
	virtual bool make(const Pint& _size){
		del();
		Handle=MakeGraph(_size.x,_size.y);
		return fail();
	}
	virtual bool load(void* _mem,const int& _memsize){
		del();
		Handle=CreateGraphFromMem(_mem,_memsize);
		return fail();
	}
	virtual bool load(const dxImGraph& _imgra);
	virtual void save(const std::string& _filename)const;
	virtual void copy(const dxBasicGraph& _gra);
	void get(const Pint& _pos){
		Pint size=getSize();
		GetDrawScreenGraph(_pos.x,_pos.y,_pos.x+size.x,_pos.y+size.y,Handle);
	}
	bool get(const Pint& _pos,const Pint& _size){
		if(make(_size))return true;
		get(_pos);
		return false;
	}
	void del(){
		if(Handle>0)DeleteGraph(Handle);
		Handle=-1;
	}
	bool fail()const{return (Handle<=0);}
	const dxBasicGraph& operator=(const dxBasicGraph& _grp){
		if(this!=&_grp)Handle=_grp.Handle;
		return *this;
	}
	Pint getSize()const{
		Pint tmp;
		GetGraphSize(Handle,&(tmp.x),&(tmp.y));
		return tmp;
	}
	int getHandle()const{return Handle;}
	void inactive(){Handle=-1;}
};
//dxBasicGraphs�N���X
class dxGraph:public dxBasicGraph{
public:
	dxGraph():dxBasicGraph(){return;}
	dxGraph(const dxBasicGraph& _grp){throw "dxGraph::dxGraph(const dxBasicGraph& _grp) Unable to use this function";}
	dxGraph(const dxGraph& _grp){throw "dxBasic.h","dxGraph::dxGraph(const dxGraph& _grp) Unable to use this function";}
	~dxGraph(){del();}
	const dxGraph& operator=(const dxBasicGraph& _grp){throw "const dxGraph& dxGraph::operator=(const dxGraph& _grp) Unable to use this function";}
	const dxGraph& operator=(const dxGraph& _grp){throw "const dxGraph& Graph::operator=(const dxGraph& _grp) Unable to use this function";}
	void inactive(){throw "void dxGraph::inactive() Unable to use this function";}
};
//dxBasicScreen�N���X
class dxBasicScreen:public dxBasicGraph{
public:
	dxBasicScreen():dxBasicGraph(){return;}
	dxBasicScreen(int _Handle):dxBasicGraph(_Handle){return;}
	dxBasicScreen(const dxBasicGraph& _grp):dxBasicGraph(_grp){return;}
	dxBasicScreen(const dxBasicScreen& _grp):dxBasicGraph(_grp){return;}
	const dxBasicScreen& operator=(const dxBasicScreen& _grp){
		if(this!=&_grp)Handle=_grp.Handle;
		return *this;
	}
	virtual bool open(const std::string& _filename){
		del();
		SetDrawValidGraphCreateFlag( TRUE );
		Handle=LoadGraph(_filename.c_str());
		SetDrawValidGraphCreateFlag( FALSE );
		return fail();
	}
	virtual bool make(const Pint& _size){
		del();
		SetDrawValidGraphCreateFlag( TRUE );
		Handle=MakeGraph(_size.x,_size.y);
		SetDrawValidGraphCreateFlag( FALSE );
		return fail();
	}
	virtual bool load(void* _mem,const int& _memsize){
		del();
		SetDrawValidGraphCreateFlag( TRUE );
		Handle=CreateGraphFromMem(_mem,_memsize);
		SetDrawValidGraphCreateFlag( FALSE );
		return fail();
	}
	virtual bool load(const dxImGraph& _imgra);
	virtual void save(const std::string& _filename)const;
	virtual void copy(const dxBasicGraph& _gra);
};
//dxScreen�N���X
class dxScreen:public dxBasicScreen{
public:
	dxScreen():dxBasicScreen(){return;}
	dxScreen(const dxBasicGraph& _grp){throw "dxScreen::dxScreen(const dxBasicScreen& _grp) Unable to use this function";}
	dxScreen(const dxScreen& _grp){throw "dxScreen::dxScreen(const dxScreen& _grp) Unable to use this function";}
	~dxScreen(){del();}
	const dxScreen& operator=(const dxBasicGraph& _grp){throw "const dxScreen& dxScreen::operator=(const dxScreen& _grp) Unable to use this function";}
	const dxScreen& operator=(const dxScreen& _grp){throw "const dxScreen& Screen::operator=(const dxScreen& _grp) Unable to use this function";}
	void inactive(){throw "void dxScreen::inactive() Unable to use this function";}
};
//dxImGraph�N���X
class dxImGraph{
private:
	int Handle;
	bool AlphaFlag;
	bool PaletFlag;
public:
	dxImGraph(){Handle=-1;}
	dxImGraph(const dxImGraph& _imgra){throw "dxImGraph::dxImGraph(const dxImGraph& _imgra) Unable to use this function";}
	~dxImGraph(){del();}
	bool open(const std::string& _filename){
		del();
		Handle=LoadSoftImage(_filename.c_str());
		AlphaFlag=(CheckAlphaSoftImage(Handle)!=0);
		PaletFlag=(CheckPaletteSoftImage(Handle)!=0);
		return fail();
	}
	bool open(const std::string& _filename,bool _AlphaFlag,bool _PaletFlag=false){
		dxImGraph tmpim;
		tmpim.open(_filename);
		make(tmpim.getSize(),_AlphaFlag,_PaletFlag);
		copy(Pint(0,0),tmpim.getSize(),tmpim,Pint(0,0));
		return fail();
	}
	bool make(const Pint& _size,bool _AlphaFlag=false,bool _PaletFlag=false){
		del();
		if(_AlphaFlag){
			Handle=MakeARGB8ColorSoftImage(_size.x,_size.y);
			AlphaFlag=true;
			PaletFlag=false;
		}else if(_PaletFlag){
			Handle=MakePAL8ColorSoftImage(_size.x,_size.y);
			AlphaFlag=false;
			PaletFlag=true;
		}else{
			Handle=MakeXRGB8ColorSoftImage(_size.x,_size.y);
			AlphaFlag=false;
			PaletFlag=false;
		}
		return fail();
	}
	bool load(void* _mem,const int& _memsize){
		del();
		Handle=LoadSoftImageToMem(_mem,_memsize);
		AlphaFlag=(CheckAlphaSoftImage(Handle)!=0);
		PaletFlag=(CheckPaletteSoftImage(Handle)!=0);
		return fail();
	}
	bool load(void* _mem,const int& _memsize,bool _AlphaFlag,bool _PaletFlag=false){
		dxImGraph tmpim;
		tmpim.load(_mem,_memsize);
		make(tmpim.getSize(),_AlphaFlag,_PaletFlag);
		copy(Pint(0,0),tmpim.getSize(),tmpim,Pint(0,0));
		return fail();
	}
	bool load(const dxBasicGraph& _grph,bool _AlphaFlag=false,bool _PaletFlag=false);
	void copy(const dxImGraph& _imgrp){
		if(this==&_imgrp)return;
		Pint size=_imgrp.getSize();
		make(size,_imgrp.AlphaFlag,_imgrp.PaletFlag);
		copy(Pint(0,0),size,_imgrp,Pint(0,0));
	}
	void copy(const Pint& _pos,const Pint& _size,const dxImGraph& _imgrp,const Pint _orgpos){
		if(this==&_imgrp)return;
		BltSoftImage(_orgpos.x,_orgpos.y,_size.x,_size.y,_imgrp.getHandle(),_pos.x,_pos.y,Handle);
	}
	const dxImGraph& operator=(const dxImGraph& _imgrp){throw "const dxImGraph& dxImGraph::operator=(const dxImGraph& _imgrp) Unable to use this function";}
	void save(const std::string& _filename){
		Pint size=getSize();
		dxGraph tmpGrp;
		tmpGrp.load(*this);
		tmpGrp.save(_filename);
	}
	void del(){
		if(Handle>0)DeleteSoftImage(Handle);
		Handle=-1;
	}
	bool fail(){return (Handle<=0);}
	Pint getSize()const{
		Pint tmp;
		GetSoftImageSize(Handle,&(tmp.x),&(tmp.y));
		return tmp;
	}
	int getHandle()const{return Handle;}
	bool getAlphaFlag(){return AlphaFlag;}
	bool getPaletFlag(){return PaletFlag;}
	void fill(const dxRGB& _dxclr,uchar _alpha){
		Pint size=getSize();
		for(int x=0;x<size.x;x++){
			for(int y=0;y<size.y;y++){
				put(Pint(x,y),_dxclr,_alpha);
			}
		}
	}
	void fillClr(const dxRGB& _dxclr){
		Pint size=getSize();
		for(int x=0;x<size.x;x++){
			for(int y=0;y<size.y;y++){
				putClr(Pint(x,y),_dxclr);
			}
		}
	}
	void fillAlpha(uchar _alpha){
		Pint size=getSize();
		for(int x=0;x<size.x;x++){
			for(int y=0;y<size.y;y++){
				putAlpha(Pint(x,y),_alpha);
			}
		}
	}
	void put(const Pint& _pos,const dxRGB& _dxclr,uchar _alpha){
		DrawPixelSoftImage(Handle,_pos.x,_pos.y,_dxclr.r,_dxclr.g,_dxclr.b,(int)_alpha);
	}
	void putClr(const Pint& _pos,const dxRGB& _dxclr){
		uchar a;
		dxRGB dxclr;
		get(_pos,dxclr,a);
		put(_pos,_dxclr,a);
	}
	void putAlpha(const Pint& _pos,uchar _alpha){
		put(_pos,getClr(_pos),_alpha);
	}
	void setTrans(const dxRGB& _orgdxclr,uchar _alpha){
		Pint size=getSize();
		for(int x=0;x<size.x;x++){
			for(int y=0;y<size.y;y++){
				if(getClr(Pint(x,y))!=_orgdxclr)continue;
				put(Pint(x,y),_orgdxclr,_alpha);
			}
		}
	}
	void rotClr(const Pint& _pos,int addhue){
		dxHLS hls(getClr(_pos));
		hls.hue=(hls.hue+addhue)%360;
		putClr(_pos,dxRGB(hls));
	}
	void rotClr(int addhue){
		Pint size=getSize();
		for(int x=0;x<size.x;x++){
			for(int y=0;y<size.y;y++){
				rotClr(Pint(x,y),addhue);
			}
		}
	}
	void get(const Pint& _pos,dxRGB& _rgb,uchar& _alpha){
		int r,g,b,a;
		GetPixelSoftImage(Handle,_pos.x,_pos.y,&r,&g,&b,&a);
		_rgb.set(itouc(r),itouc(g),itouc(b));
		_alpha=itouc(a);
	}
	dxRGB getClr(const Pint& _pos){
		uchar alpha;
		dxRGB clr;
		get(_pos,clr,alpha);
		return clr;
	}
	uchar getAlpha(const Pint& _pos){
		uchar alpha;
		dxRGB clr;
		get(_pos,clr,alpha);
		return alpha;
	}
};
//dxGraphs�N���X
class dxGraphs{
private:
	dxBasicGraph mstrgrp;
	std::deque<dxBasicGraph> grps;
public:
	~dxGraphs(){clear();}
	int open(const std::string& _filename,int xsize,int ysize){
		clear();
		dxGraph grp;
		grp.open(_filename);
		Pint tmpp=grp.getSize();
		int tmpi=(tmpp.x/xsize)*(tmpp.y/ysize);

		if(tmpi){
			int* tmpis;
			tmpis=new int[tmpi];

			LoadDivGraph(_filename.c_str(),tmpi,tmpp.x/xsize,tmpp.y/ysize,xsize,ysize,tmpis);
			for(int i=0;i<tmpi;i++)grps.push_back(dxBasicGraph(tmpis[i]));

			delete[] tmpis;
		}

		return tmpi;
	}
	int load(dxBasicGraph& _grp,int xsize,int ysize){
		clear();
		mstrgrp=_grp;
		_grp.inactive();
		Pint tmpp=mstrgrp.getSize();
		int tmpi=(tmpp.x/xsize)*(tmpp.y/ysize);

		if(tmpi){
			for(int y=0;y<tmpp.y/ysize;y++){
				for(int x=0;x<tmpp.x/xsize;x++){
					int tmp=DerivationGraph(x*xsize,y*ysize,xsize,ysize,mstrgrp.getHandle());
					if(tmp>0)grps.push_back(dxBasicGraph(tmp));
				}
			}
		}else{
			_grp=mstrgrp;
			mstrgrp.inactive();
		}

		return tmpi;
	}
	int load(dxImGraph& _imgrp,int xsize,int ysize){
		dxGraph tmp;
		tmp.load(_imgrp);
		return load(tmp,xsize,ysize);
	}
	uint size(){return grps.size();}
	dxBasicGraph& at(int i){
		if(i<0 || i>=(int)grps.size())throw "dxBasicGraph& dxGraphs::at(int i) out of range";
		return grps[i];
	}
	dxBasicGraph& operator[](int i){
		if(i<0 || i>=(int)grps.size())throw "dxBasicGraph& dxGraphs::operator[](int i) out of range";
		return grps[i];
	}
	dxBasicGraph& back(){return grps.back();}
	dxBasicGraph& front(){return grps.front();}
	void push_back(dxBasicGraph& grp){
		grps.push_back(grp);
		grp.inactive();
	}
	void push_front(dxBasicGraph& grp){
		grps.push_front(grp);
		grp.inactive();
	}
	void push_back(dxImGraph& imgrp){
		dxGraph tmp;
		tmp.load(imgrp);
		push_back(tmp);
	}
	void push_front(dxImGraph& imgrp){
		dxGraph tmp;
		tmp.load(imgrp);
		push_front(tmp);
	}
	void pop_back(){
		grps.back().del();
		grps.pop_back();
	}
	void pop_front(){
		grps.front().del();
		grps.pop_front();
	}
	void clear(){
		for(int i=0;i<(int)grps.size();i++)grps[i].del();
		grps.clear();
		mstrgrp.del();
	}
	bool add(uint pos,dxBasicGraph& grp){
		if(pos>grps.size())return true;
		grps.insert(grps.begin()+pos,grp);
		grp.inactive();
		return false;
	}
	bool add(uint pos,dxImGraph& imgrp){
		dxGraph tmp;
		tmp.load(imgrp);
		return add(pos,tmp);
	}
	bool del(uint pos){
		if(pos>=grps.size())return true;
		grps.at(pos).del();
		grps.erase(grps.begin()+pos);
		return false;
	}
};
namespace dx{
	//DxClr�֐��Q
	void drawBox(const Pint& pos1,const Pint& pos2,const dxColor& clr,int FillFlag=1,dxDMode dmode=dxDMode());
	void drawTriangle(const Pint& pos1,const Pint& pos2,const Pint& pos3,const dxColor& clr,int FillFlag=1,dxDMode dmode=dxDMode());
	void drawCircle(const Pint& pos,const int& r,const dxColor& clr,int FillFlag=1,dxDMode dmode=dxDMode());
	void drawOval(const Pint& pos,const Pint& r,const dxColor& clr,int FillFlag=1,dxDMode dmode=dxDMode());
	void drawPixel(const Pint& pos,const dxColor& clr,dxDMode dmode=dxDMode());
	void drawLine(const Pint& pos1,const Pint& pos2,const dxColor& clr,int Thick=1,dxDMode dmode=dxDMode());
	int drawStr(const Pint& pos,const std::string Str,const dxColor& sclr,dxDMode dmode=dxDMode(),int VFlag=0,int FontHandle=-1,const dxColor& seclr=dxRGB(0,0,0));
	int drawStr(const Pint& pos,const std::string Str,const dxColor& sclr,const dxFont& font,dxDMode dmode=dxDMode(),const dxColor& seclr=dxRGB(0,0,0));
	int drawStrP(const Pint& pos,const Pint& size,const std::string Str,const dxColor& sclr,ALI::ALIGN DrawPos=ALI::center,dxDMode dmode=dxDMode(),int VFlag=0,int FontHandle=-1,int FontSize=dx::getFontSize(),const dxColor& seclr=dxRGB(0,0,0));
	int drawStrP(const Pint& pos,const Pint& size,const std::string Str,const dxColor& sclr,const dxFont& font,ALI::ALIGN DrawPos=ALI::center,dxDMode dmode=dxDMode(),const dxColor& seclr=dxRGB(0,0,0));
	int drawInpStr(const Pint& pos,const dxInput& inp,const dxColor& sclr,const dxColor& imeclr=dxRGB(0x00,0x00,0x8b),dxDMode dmode=dxDMode(),int VFlag=0,int FontHandle=-1,int FontSize=dx::getFontSize(),const dxColor& seclr=dxRGB(0,0,0));
	int drawInpStr(const Pint& pos,const dxInput& inp,const dxColor& sclr,const dxColor& imeclr,const dxFont& font,dxDMode dmode=dxDMode(),const dxColor& seclr=dxRGB(0,0,0));
	int drawInpStrP(const Pint& pos,const Pint& size,const dxInput& inp,const dxColor& sclr,const dxColor& imeclr=dxRGB(0x00,0x00,0x8b),ALI::ALIGN DrawPos=ALI::left,dxDMode dmode=dxDMode(),int VFlag=0,int FontHandle=-1,int FontSize=dx::getFontSize(),const dxColor& seclr=dxRGB(0,0,0));
	int drawInpStrP(const Pint& pos,const Pint& size,const dxInput& inp,const dxColor& sclr,const dxColor& imeclr,const dxFont& font,ALI::ALIGN DrawPos=ALI::left,dxDMode dmode=dxDMode(),const dxColor& seclr=dxRGB(0,0,0));
	void drawGraph(const Pint& pos,const dxBasicGraph& grp,int TransFlag=1,int TurnFlag=0,dxDMode dmode=dxDMode());
	void drawGraph(const Pint& pos,const dxBasicGraph& grp,const Pint& size,int TransFlag=1,dxDMode dmode=dxDMode());
	void drawGraph(const Pint& pos,const dxBasicGraph& grp,const Pint& grppos,const Pint& grpsize,int TransFlag=1,int TurnFlag=0,dxDMode dmode=dxDMode());
	void drawGraph(const Pint& pos,const dxBasicGraph& grp,const double& rate,const double& angle,int TransFlag=1,int TurnFlag=0,dxDMode dmode=dxDMode());
	void drawGraph(const Pint& pos,const dxBasicGraph& grp,const double& rate,const double& angle,const Pint& cpos,int TransFlag=1,int TurnFlag=0,dxDMode dmode=dxDMode());
	void drawImGraph(const Pint& pos,const dxImGraph& imgrp,dxDMode dmode=dxDMode());
}
namespace dx{
	class TmpKeyActive{
		bool tmp;
	public:
		TmpKeyActive(const bool keyactive){
			tmp=getKeyActive();
			setKeyActive(keyactive);
		}
		~TmpKeyActive(){
			setKeyActive(tmp);
		}
	};
	class TmpDrawMode{
		dxDMode dmode;
	public:
		TmpDrawMode(const dxDMode& _dmode){
			dmode=getDrawMode();
			setDrawMode(_dmode);
		}
		~TmpDrawMode(){
			setDrawMode(dmode);
		}
	};
	class TmpDrawArea{
		dxDArea darea;
	public:
		TmpDrawArea(const dxDArea& _darea){
			darea=getDrawArea();
			setDrawArea(_darea);
		}
		~TmpDrawArea(){
			setDrawArea(darea);
		}
	};
	class TmpGlobalStd{
		Pint gstd;
	public:
		TmpGlobalStd(const Pint& _gstd){
			gstd=getGlobalStd();
			setGlobalStd(_gstd);
		}
		~TmpGlobalStd(){
			setGlobalStd(gstd);
		}
	};
	class TmpDrawScreen{
		dxBasicScreen dgrp;
	public:
		TmpDrawScreen(const dxBasicScreen& _dgrp){
			dgrp=getDrawScreen();
			setDrawScreen(_dgrp);
		}
		~TmpDrawScreen(){
			setDrawScreen(dgrp);
		}
	};
}
#
#endif
