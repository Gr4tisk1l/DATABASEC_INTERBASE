//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit6.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button1Click(TObject *Sender)
{
	if ((DBEdit1->Field->AsString=="")) {
		ShowMessage("Podaj nazwisko!");
		DBEdit1->SetFocus();
		return;
	}
	if ((DBEdit2->Field->AsString=="")) {
		ShowMessage("Podaj imie!");
		DBEdit2->SetFocus();
		return;
	}
	if ((DBEdit3->Field->AsString=="")) {
		ShowMessage("Podaj klase!");
		DBEdit3->SetFocus();
		return;
	}
	if ((DBEdit4->Field->AsString!='K' && DBEdit4->Field->AsString!='M')) {
		ShowMessage("Podaj p³eæ!(M/K)");
		DBEdit4->SetFocus();
		return;
	}
	if ((DBEdit5->Field->AsString=="")||(StrToFloat(DBEdit5->Field->AsString)<0)) {
		ShowMessage("Podaj wzrost! Musi byc wiekszy od 0");
		DBEdit5->SetFocus();
		return;
	}
	if ((DBEdit6->Field->AsString=="")||(StrToFloat(DBEdit5->Field->AsString)<0)) {
		ShowMessage("Podaj wage! Musi byc wieksza od 0");
		DBEdit6->SetFocus();
		return;
	}
	try
	{
		DataModule2->IBTable1->Post();
	}
	catch (...){
		ShowMessage("Dane nie zosta³y zapisane!");
		DBEdit1->SetFocus();
		return;
	}
    DataModule2->IBTable1->Refresh();
	Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm6::DBEdit1Exit(TObject *Sender)
{
      	try {
		DBEdit1->Field->AsString;
	} catch (...) {
	ShowMessage("b³¹d");
    DBEdit1->SetFocus();
	}
}
//---------------------------------------------------------------------------
