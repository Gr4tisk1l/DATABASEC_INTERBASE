//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
Form3->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	float wagaChlopcow, wagaDziewczat, lDziewczat;
	int iCh=0;
	int iD=0;
	String coto;
	wagaChlopcow=0;
	wagaDziewczat=0;
	DataModule2->IBTable1->First();
		while(!DataModule2->IBTable1->Eof){
		if ((DataModule2->IBTable1->Fields->Fields[3]->AsString=='M') && (DataModule2->IBTable1->Fields->Fields[4]->AsInteger>StrToInt(Form1->Edit1->Text))) {
		 wagaChlopcow=wagaChlopcow+DataModule2->IBTable1->Fields->Fields[5]->AsInteger;
		 iCh=iCh+1;
		}
		if ((DataModule2->IBTable1->Fields->Fields[3]->AsString=='K') && (DataModule2->IBTable1->Fields->Fields[4]->AsInteger>StrToInt(Form1->Edit1->Text))) {
		   wagaDziewczat=wagaDziewczat+DataModule2->IBTable1->Fields->Fields[5]->AsInteger;
		   iD=iD+1;
		}
		DataModule2->IBTable1->Next();
		}
	srWagaChlopcow=wagaChlopcow/iCh;
	srWagaDziewczat=wagaDziewczat/iD;
	Form4->Label3->Caption=srWagaChlopcow;
	Form4->Label4->Caption=srWagaDziewczat;
	Form4->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
	int i;
	String s;
	TLocateOptions Opts;
	Opts.Clear();
	Form5->Memo1->Clear();
	DataModule2->IBTable1->First();
	s="";
	while (! DataModule2->IBTable1->Eof){
		if ((DataModule2->IBTable1->Fields->Fields[5]->AsInteger<srWagaChlopcow) && (DataModule2->IBTable1->Fields->Fields[3]->AsString=='M')) {
			s=DataModule2->IBTable1->Fields->Fields[0]->AsString + " " + DataModule2->IBTable1->Fields->Fields[1]->AsString + " " + DataModule2->IBTable1->Fields->Fields[2]->AsString + " " + DataModule2->IBTable1->Fields->Fields[3]->AsString + " " + DataModule2->IBTable1->Fields->Fields[4]->AsString + " " + DataModule2->IBTable1->Fields->Fields[5]->AsString;
			Form5->Memo1->Lines->Add(s);
		}
		if ((DataModule2->IBTable1->Fields->Fields[5]->AsInteger<srWagaDziewczat) && (DataModule2->IBTable1->Fields->Fields[3]->AsString=='K')) {
			s=DataModule2->IBTable1->Fields->Fields[0]->AsString + " " + DataModule2->IBTable1->Fields->Fields[1]->AsString + " " + DataModule2->IBTable1->Fields->Fields[2]->AsString + " " + DataModule2->IBTable1->Fields->Fields[3]->AsString + " " + DataModule2->IBTable1->Fields->Fields[4]->AsString + " " + DataModule2->IBTable1->Fields->Fields[5]->AsString;
			Form5->Memo1->Lines->Add(s);
		}


	DataModule2->IBTable1->Next();
	}

	Form5->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Edit1Exit(TObject *Sender)
{
try
{
	StrToFloat(Edit1->Text);
}   catch(...)
{
	ShowMessage("Wpisz liczbe.");
	Form1->Edit1->SetFocus();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
DataModule2->IBTable1->Insert();
Form6->ShowModal();
}
//---------------------------------------------------------------------------
