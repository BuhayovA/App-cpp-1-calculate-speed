//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
	double d = StrToFloat(Edit1->Text);
	double t = StrToFloat(Edit2->Text);


	double v;

	if(d > 0 && t > 0) {
		v = d / t;
		Label4->Caption = L"�������� =" + FloatToStr(v) + L"�/c";
	}else if (d < 0 || t < 0){
		Label4->Caption = L"Speed or way cannot be negative";
	}else {
		Label4->Caption = L"Speed or way cannot be zero";
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button2Click(TObject *Sender)
{
    Close();
}
//---------------------------------------------------------------------------
