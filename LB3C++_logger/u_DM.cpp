//---------------------------------------------------------------------------


#pragma hdrstop

#include "u_Main.h"
#include "u_DM.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma classgroup "Vcl.Controls.TControl"
#pragma resource "*.dfm"
Tdm *dm;
//---------------------------------------------------------------------------
__fastcall Tdm::Tdm(TComponent* Owner)
	: TDataModule(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tdm::DataModuleCreate(TObject *Sender)
{
	ADOConnection1->Connected = true;
	ADOT_Products -> Open();
	ADOT_Producer -> Open();
	ADOT_Package -> Open();
	ADOT_Category -> Open();
	ADOT_Consistence -> Open();
	ADOT_Country -> Open();
}
//---------------------------------------------------------------------------
void __fastcall Tdm::DataModuleDestroy(TObject *Sender)
{
	ADOConnection1->Connected = false;
}
//---------------------------------------------------------------------------



