//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class Tdm : public TDataModule
{
__published:	// IDE-managed Components
	TADOConnection *ADOConnection1;
	TADOTable *ADOT_Products;
	TADOTable *ADOT_Producer;
private:	// User declarations
public:		// User declarations
	__fastcall Tdm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tdm *dm;
//---------------------------------------------------------------------------
#endif
