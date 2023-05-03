//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Quiz.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TZ *Z;
//---------------------------------------------------------------------------
__fastcall TZ::TZ(TComponent* Owner)
	: TForm(Owner)
{
	queslist=questions();
	currques=queslist.front();

	Question->Text=currques.ques;
	opt1->Text=currques.opt1;
	opt2->Text=currques.opt2;
	opt3->Text=currques.opt3;
	opt4->Text=currques.opt4;

	points->Text="0";
	queslist.pop();
}
//---------------------------------------------------------------------------
void __fastcall TZ::opt1Change(TObject *Sender)
{
	slt=1;
}
//---------------------------------------------------------------------------
void __fastcall TZ::opt2Change(TObject *Sender)
{
	slt=2;
}
//---------------------------------------------------------------------------
void __fastcall TZ::opt3Change(TObject *Sender)
{
	slt=3;
}
//---------------------------------------------------------------------------
void __fastcall TZ::opt4Change(TObject *Sender)
{
	slt=4;
}
//---------------------------------------------------------------------------
void __fastcall TZ::submitClick(TObject *Sender)
{
	if(slt==currques.ans){
		scr++;
		points->Text=scr;
	}
	if(!queslist.empty()){
		currques=queslist.front();
		Question->Text=currques.ques;
		opt1->Text=currques.opt1;
		opt2->Text=currques.opt2;
		opt3->Text=currques.opt3;
		opt4->Text=currques.opt4;
		queslist.pop();

		opt1->IsChecked=false;
		opt2->IsChecked=false;
		opt3->IsChecked=false;
		opt4->IsChecked=false;
	}
	else{
		submit->Enabled=false;
		submit->Text="End";
	}

}
//---------------------------------------------------------------------------
