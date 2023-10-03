//---------------------------------------------------------------------------

#ifndef u_DMH
#define u_DMH
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
	TWordField *ADOT_Products���;
	TWordField *ADOT_Products���������;
	TWideStringField *ADOT_Products�����;
	TBooleanField *ADOT_Products���������;
	TWordField *ADOT_Products�����;
	TWordField *ADOT_Products��������;
	TWordField *ADOT_Products��������;
	TSmallintField *ADOT_Productsʳ������;
	TWideStringField *ADOT_Products����;
	TWideMemoField *ADOT_Products����������;
	TWideMemoField *ADOT_Products�����;
	TWordField *ADOT_Products������������;
	TBlobField *ADOT_Products����;
	TDataSource *DSProducts;
	TDataSource *DSProducer;
	TWordField *ADOT_Producer���;
	TWideStringField *ADOT_Producer�����;
	TWideMemoField *ADOT_Producer��������������;
	TWordField *ADOT_Producer�����;
	TADOTable *ADOT_Category;
	TADOTable *ADOT_Consistence;
	TADOTable *ADOT_Country;
	TADOTable *ADOT_Package;
	TDataSource *DSCategory;
	TDataSource *DSConsistence;
	TDataSource *DSCountry;
	TDataSource *DSPackage;
	TWordField *ADOT_Category���;
	TWideStringField *ADOT_Category�����;
	TWideMemoField *ADOT_Category����;
	TWordField *ADOT_Consistence���;
	TWideStringField *ADOT_Consistence�����;
	TWideMemoField *ADOT_Consistence����;
	TWordField *ADOT_Country���;
	TWideStringField *ADOT_Country�����;
	TWordField *ADOT_Package���;
	TWideStringField *ADOT_Package�����������;
	TWideMemoField *ADOT_Package����;
	TWideMemoField *ADOT_Package�������;
	TWideMemoField *ADOT_Package�������������������;
	void __fastcall DataModuleCreate(TObject *Sender);
	void __fastcall DataModuleDestroy(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall Tdm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tdm *dm;
//---------------------------------------------------------------------------
#endif
