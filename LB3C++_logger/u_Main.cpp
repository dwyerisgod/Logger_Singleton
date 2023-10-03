//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "u_Main.h"
#include "u_DM.h"
#include "LoggerSingleton.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

Logger& logger = Logger::getInstance();

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender) //first
{
	DBNavigator1 -> DataSource -> DataSet -> First();
	ShowData();

	logger.log("������������ ������� � ������ ������.");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender) //next
{
	DBNavigator1 -> DataSource -> DataSet -> Next();
	ShowData();

	logger.log("������������ ������� ��-������ ������.");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender) //products_activate
{
	logger.log("������������ ����������� ������� ���������.");

	DBGrid1 -> DataSource = dm -> DSProducts;
	DBNavigator1 -> DataSource = dm -> DSProducts;

	dm->ADOT_Products->First();

	Edit1 -> Visible = true;
	Edit2 -> Visible = true;
	Edit3 -> Visible = true;
	Edit4 -> Visible = true;
	Edit5 -> Visible = true;
	Edit6 -> Visible = true;
	Edit7 -> Visible = true;
	Edit8 -> Visible = true;
	Edit9 -> Visible = true;
	Edit10 -> Visible = true;
	Edit11 -> Visible = true;
	Edit12 -> Visible = true;
    Button1 -> Visible = true;
	Button2 -> Visible = true;
	Button9 -> Visible = true;
	Button10 -> Visible = true;

	//lb3
	DBEdit1 -> Visible = true;
	DBEdit2 -> Visible = true;
	DBEdit3 -> Visible = true;
	DBEdit4 -> Visible = true;
	DBEdit5 -> Visible = true;
	DBEdit6 -> Visible = true;
	DBEdit7 -> Visible = true;
	DBEdit8 -> Visible = true;
	DBEdit9 -> Visible = true;
	DBMemo1 -> Visible = true;
	DBMemo2 -> Visible = true;
	DBCheckBox1 -> Visible = true;

    Edit1->Text = dm->ADOT_Products->FieldByName("���")->AsString;
	Edit2->Text = dm->ADOT_Products->FieldByName("���������")->AsString;
	Edit3->Text = dm->ADOT_Products->FieldByName("�����")->AsString;
	Edit4->Text = dm->ADOT_Products->FieldByName("��������")->AsString;
	Edit5->Text = dm->ADOT_Products->FieldByName("�����")->AsString;
	Edit6->Text = dm->ADOT_Products->FieldByName("��������")->AsString;
	Edit7->Text = dm->ADOT_Products->FieldByName("��������")->AsString;
	Edit8->Text = dm->ADOT_Products->FieldByName("ʳ������")->AsString;
	Edit9->Text = dm->ADOT_Products->FieldByName("����")->AsString;
	Edit10->Text = dm->ADOT_Products->FieldByName("����������")->AsString;
	Edit11->Text = dm->ADOT_Products->FieldByName("�����")->AsString;
	Edit12->Text = dm->ADOT_Products->FieldByName("������������")->AsString;

	//lb3
	DBEdit1->Text = dm->ADOT_Products->FieldByName("���")->AsString;
	DBEdit2->Text = dm->ADOT_Products->FieldByName("���������")->AsString;
	DBEdit3->Text = dm->ADOT_Products->FieldByName("�����")->AsString;
	DBEdit4->Text = dm->ADOT_Products->FieldByName("�����")->AsString;
	DBEdit5->Text = dm->ADOT_Products->FieldByName("��������")->AsString;
	DBEdit6->Text = dm->ADOT_Products->FieldByName("��������")->AsString;
	DBEdit7->Text = dm->ADOT_Products->FieldByName("ʳ������")->AsString;
	DBEdit8->Text = dm->ADOT_Products->FieldByName("����")->AsString;
	DBMemo1->Text = dm->ADOT_Products->FieldByName("����������")->AsString;
	DBMemo2->Text = dm->ADOT_Products->FieldByName("�����")->AsString;
	DBEdit9->Text = dm->ADOT_Products->FieldByName("������������")->AsString;
	DBCheckBox1->DataField = "��������";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender) //producer_activate
{
	logger.log("������������ ����������� ������� ��������������.");

	DBGrid1 -> DataSource = dm -> DSProducer;
	DBNavigator1 -> DataSource = dm -> DSProducer;

	dm->ADOT_Producer->First();

	Edit1 -> Visible = true;
	Edit2 -> Visible = true;
	Edit3 -> Visible = true;
	Edit4 -> Visible = true;
	Edit5 -> Visible = false;
	Edit6 -> Visible = false;
	Edit7 -> Visible = false;
	Edit8 -> Visible = false;
	Edit9 -> Visible = false;
	Edit10 -> Visible = false;
	Edit11 -> Visible = false;
	Edit12 -> Visible = false;
	Button1 -> Visible = true;
	Button2 -> Visible = true;
	Button9 -> Visible = true;
	Button10 -> Visible = true;

	//lb3
	DBEdit1 -> Visible = true;
	DBEdit2 -> Visible = true;
	DBEdit3 -> Visible = true;
	DBEdit4 -> Visible = true;
	DBEdit5 -> Visible = false;
	DBEdit6 -> Visible = false;
	DBEdit7 -> Visible = false;
	DBEdit8 -> Visible = false;
	DBEdit9 -> Visible = false;
	DBMemo1 -> Visible = false;
	DBMemo2 -> Visible = false;
	DBCheckBox1 -> Visible = false;

	Edit1->Text = dm->ADOT_Producer->FieldByName("���")->AsString;
	Edit2->Text = dm->ADOT_Producer->FieldByName("�����")->AsString;
	Edit3->Text = dm->ADOT_Producer->FieldByName("�������� ������")->AsString;
	Edit4->Text = dm->ADOT_Producer->FieldByName("�����")->AsString;

	//lb3
	DBEdit1->Text = dm->ADOT_Producer->FieldByName("���")->AsString;
	DBEdit2->Text = dm->ADOT_Producer->FieldByName("�����")->AsString;
	DBEdit3->Text = dm->ADOT_Producer->FieldByName("�������� ������")->AsString;
	DBEdit4->Text = dm->ADOT_Producer->FieldByName("�����")->AsString;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender) //consistence_activate
{
	logger.log("������������ ����������� ������� ������������.");

	DBGrid1 -> DataSource = dm -> DSConsistence;
	DBNavigator1 -> DataSource = dm -> DSConsistence;

	dm->ADOT_Consistence->First();

	Edit1 -> Visible = true;
	Edit2 -> Visible = true;
	Edit3 -> Visible = true;
	Edit4 -> Visible = false;
	Edit5 -> Visible = false;
	Edit6 -> Visible = false;
	Edit7 -> Visible = false;
	Edit8 -> Visible = false;
	Edit9 -> Visible = false;
	Edit10 -> Visible = false;
	Edit11 -> Visible = false;
	Edit12 -> Visible = false;
    Button1 -> Visible = true;
	Button2 -> Visible = true;
	Button9 -> Visible = true;
	Button10 -> Visible = true;

	//lb3
    DBEdit1 -> Visible = true;
	DBEdit2 -> Visible = true;
	DBEdit3 -> Visible = true;
	DBEdit4 -> Visible = false;
	DBEdit5 -> Visible = false;
	DBEdit6 -> Visible = false;
	DBEdit7 -> Visible = false;
	DBEdit8 -> Visible = false;
	DBEdit9 -> Visible = false;
	DBMemo1 -> Visible = false;
	DBMemo2 -> Visible = false;
	DBCheckBox1 -> Visible = false;

	Edit1->Text = dm->ADOT_Consistence->FieldByName("���")->AsString;
	Edit2->Text = dm->ADOT_Consistence->FieldByName("�����")->AsString;
	Edit3->Text = dm->ADOT_Consistence->FieldByName("����")->AsString;

	//lb3
	DBEdit1->Text = dm->ADOT_Consistence->FieldByName("���")->AsString;
	DBEdit2->Text = dm->ADOT_Consistence->FieldByName("�����")->AsString;
	DBEdit3->Text = dm->ADOT_Consistence->FieldByName("����")->AsString;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender) //country_activate
{
	logger.log("������������ ����������� ������� �����.");

	DBGrid1 -> DataSource = dm -> DSCountry;
	DBNavigator1 -> DataSource = dm -> DSCountry;

	dm->ADOT_Country->First();

    Edit1 -> Visible = true;
	Edit2 -> Visible = true;
	Edit3 -> Visible = false;
	Edit4 -> Visible = false;
	Edit5 -> Visible = false;
	Edit6 -> Visible = false;
	Edit7 -> Visible = false;
	Edit8 -> Visible = false;
	Edit9 -> Visible = false;
	Edit10 -> Visible = false;
	Edit11 -> Visible = false;
	Edit12 -> Visible = false;
    Button1 -> Visible = true;
	Button2 -> Visible = true;
	Button9 -> Visible = true;
	Button10 -> Visible = true;

	//lb3
    DBEdit1 -> Visible = true;
	DBEdit2 -> Visible = true;
	DBEdit3 -> Visible = false;
	DBEdit4 -> Visible = false;
	DBEdit5 -> Visible = false;
	DBEdit6 -> Visible = false;
	DBEdit7 -> Visible = false;
	DBEdit8 -> Visible = false;
	DBEdit9 -> Visible = false;
	DBMemo1 -> Visible = false;
	DBMemo2 -> Visible = false;
	DBCheckBox1 -> Visible = false;

	Edit1->Text = dm->ADOT_Country->FieldByName("���")->AsString;
	Edit2->Text = dm->ADOT_Country->FieldByName("�����")->AsString;

	//lb3
	DBEdit1->Text = dm->ADOT_Country->FieldByName("���")->AsString;
	DBEdit2->Text = dm->ADOT_Country->FieldByName("�����")->AsString;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender) //category_activate
{
	logger.log("������������ ����������� ������� ���������.");

	DBGrid1 -> DataSource = dm -> DSCategory;
	DBNavigator1 -> DataSource = dm -> DSCategory;

	dm->ADOT_Category->First();

	Edit1 -> Visible = true;
	Edit2 -> Visible = true;
	Edit3 -> Visible = true;
	Edit4 -> Visible = false;
	Edit5 -> Visible = false;
	Edit6 -> Visible = false;
	Edit7 -> Visible = false;
	Edit8 -> Visible = false;
	Edit9 -> Visible = false;
	Edit10 -> Visible = false;
	Edit11 -> Visible = false;
	Edit12 -> Visible = false;
    Button1 -> Visible = true;
	Button2 -> Visible = true;
	Button9 -> Visible = true;
	Button10 -> Visible = true;

	//lb3
	DBEdit1 -> Visible = true;
	DBEdit2 -> Visible = true;
	DBEdit3 -> Visible = true;
	DBEdit4 -> Visible = false;
	DBEdit5 -> Visible = false;
	DBEdit6 -> Visible = false;
	DBEdit7 -> Visible = false;
	DBEdit8 -> Visible = false;
	DBEdit9 -> Visible = false;
	DBMemo1 -> Visible = false;
	DBMemo2 -> Visible = false;
	DBCheckBox1 -> Visible = false;

	Edit1->Text = dm->ADOT_Category->FieldByName("���")->AsString;
	Edit2->Text = dm->ADOT_Category->FieldByName("�����")->AsString;
	Edit3->Text = dm->ADOT_Category->FieldByName("����")->AsString;

	//lb3
	DBEdit1->Text = dm->ADOT_Category->FieldByName("���")->AsString;
	DBEdit2->Text = dm->ADOT_Category->FieldByName("�����")->AsString;
	DBEdit3->Text = dm->ADOT_Category->FieldByName("����")->AsString;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button8Click(TObject *Sender) //package_activate
{
	logger.log("������������ ����������� ������� ��������.");

	DBGrid1 -> DataSource = dm -> DSPackage;
	DBNavigator1 -> DataSource = dm -> DSPackage;

	dm->ADOT_Package->First();

    Edit1 -> Visible = true;
	Edit2 -> Visible = true;
	Edit3 -> Visible = true;
	Edit4 -> Visible = true;
	Edit5 -> Visible = true;
	Edit6 -> Visible = false;
	Edit7 -> Visible = false;
	Edit8 -> Visible = false;
	Edit9 -> Visible = false;
	Edit10 -> Visible = false;
	Edit11 -> Visible = false;
	Edit12 -> Visible = false;
	Button1 -> Visible = true;
	Button2 -> Visible = true;
	Button9 -> Visible = true;
	Button10 -> Visible = true;

	//lb3
    DBEdit1 -> Visible = true;
	DBEdit2 -> Visible = true;
	DBEdit3 -> Visible = true;
	DBEdit4 -> Visible = true;
	DBEdit5 -> Visible = true;
	DBEdit6 -> Visible = false;
	DBEdit7 -> Visible = false;
	DBEdit8 -> Visible = false;
	DBEdit9 -> Visible = false;
	DBMemo1 -> Visible = false;
	DBMemo2 -> Visible = false;
	DBCheckBox1 -> Visible = false;

	Edit1->Text = dm->ADOT_Package->FieldByName("���")->AsString;
	Edit2->Text = dm->ADOT_Package->FieldByName("��� ��������")->AsString;
	Edit3->Text = dm->ADOT_Package->FieldByName("����")->AsString;
	Edit4->Text = dm->ADOT_Package->FieldByName("�������")->AsString;
	Edit5->Text = dm->ADOT_Package->FieldByName("���������� ���������")->AsString;

	//lb3
	DBEdit1->Text = dm->ADOT_Package->FieldByName("���")->AsString;
	DBEdit2->Text = dm->ADOT_Package->FieldByName("��� ��������")->AsString;
	DBEdit3->Text = dm->ADOT_Package->FieldByName("����")->AsString;
	DBEdit4->Text = dm->ADOT_Package->FieldByName("�������")->AsString;
	DBEdit5->Text = dm->ADOT_Package->FieldByName("���������� ���������")->AsString;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ShowData()
{
	if(DBNavigator1 -> DataSource == dm -> DSProducts)
	{
		Edit1->Text = dm->ADOT_Products->FieldByName("���")->AsString;
		Edit2->Text = dm->ADOT_Products->FieldByName("���������")->AsString;
		Edit3->Text = dm->ADOT_Products->FieldByName("�����")->AsString;
		Edit4->Text = dm->ADOT_Products->FieldByName("��������")->AsString;
		Edit5->Text = dm->ADOT_Products->FieldByName("�����")->AsString;
		Edit6->Text = dm->ADOT_Products->FieldByName("��������")->AsString;
		Edit7->Text = dm->ADOT_Products->FieldByName("��������")->AsString;
		Edit8->Text = dm->ADOT_Products->FieldByName("ʳ������")->AsString;
		Edit9->Text = dm->ADOT_Products->FieldByName("����")->AsString;
		Edit10->Text = dm->ADOT_Products->FieldByName("����������")->AsString;
		Edit11->Text = dm->ADOT_Products->FieldByName("�����")->AsString;
		Edit12->Text = dm->ADOT_Products->FieldByName("������������")->AsString;

		//LB3
        DBEdit1->Text = dm->ADOT_Products->FieldByName("���")->AsString;
		DBEdit2->Text = dm->ADOT_Products->FieldByName("���������")->AsString;
		DBEdit3->Text = dm->ADOT_Products->FieldByName("�����")->AsString;
		DBEdit4->Text = dm->ADOT_Products->FieldByName("�����")->AsString;
		DBEdit5->Text = dm->ADOT_Products->FieldByName("��������")->AsString;
		DBEdit6->Text = dm->ADOT_Products->FieldByName("��������")->AsString;
		DBEdit7->Text = dm->ADOT_Products->FieldByName("ʳ������")->AsString;
		DBEdit8->Text = dm->ADOT_Products->FieldByName("����")->AsString;
		DBMemo1->Text = dm->ADOT_Products->FieldByName("����������")->AsString;
		DBMemo2->Text = dm->ADOT_Products->FieldByName("�����")->AsString;
		DBEdit9->Text = dm->ADOT_Products->FieldByName("������������")->AsString;
		DBCheckBox1->DataField = "��������";
	}

	if(DBNavigator1 -> DataSource == dm -> DSProducer)
	{
		Edit1->Text = dm->ADOT_Producer->FieldByName("���")->AsString;
		Edit2->Text = dm->ADOT_Producer->FieldByName("�����")->AsString;
		Edit3->Text = dm->ADOT_Producer->FieldByName("�������� ������")->AsString;
		Edit4->Text = dm->ADOT_Producer->FieldByName("�����")->AsString;

		//LB3
        DBEdit1->Text = dm->ADOT_Producer->FieldByName("���")->AsString;
		DBEdit2->Text = dm->ADOT_Producer->FieldByName("�����")->AsString;
		DBEdit3->Text = dm->ADOT_Producer->FieldByName("�������� ������")->AsString;
		DBEdit4->Text = dm->ADOT_Producer->FieldByName("�����")->AsString;
	}

	if(DBNavigator1 -> DataSource == dm -> DSCategory)
	{
		Edit1->Text = dm->ADOT_Category->FieldByName("���")->AsString;
		Edit2->Text = dm->ADOT_Category->FieldByName("�����")->AsString;
		Edit3->Text = dm->ADOT_Category->FieldByName("����")->AsString;

		//LB3
		DBEdit1->Text = dm->ADOT_Category->FieldByName("���")->AsString;
		DBEdit2->Text = dm->ADOT_Category->FieldByName("�����")->AsString;
		DBEdit3->Text = dm->ADOT_Category->FieldByName("����")->AsString;
	}

	if(DBNavigator1 -> DataSource == dm -> DSConsistence)
	{
		Edit1->Text = dm->ADOT_Consistence->FieldByName("���")->AsString;
		Edit2->Text = dm->ADOT_Consistence->FieldByName("�����")->AsString;
		Edit3->Text = dm->ADOT_Consistence->FieldByName("����")->AsString;

		//LB3
		DBEdit1->Text = dm->ADOT_Consistence->FieldByName("���")->AsString;
		DBEdit2->Text = dm->ADOT_Consistence->FieldByName("�����")->AsString;
		DBEdit3->Text = dm->ADOT_Consistence->FieldByName("����")->AsString;
	}

	if(DBNavigator1 -> DataSource == dm -> DSCountry)
	{
		Edit1->Text = dm->ADOT_Country->FieldByName("���")->AsString;
		Edit2->Text = dm->ADOT_Country->FieldByName("�����")->AsString;

		//LB3
		DBEdit1->Text = dm->ADOT_Country->FieldByName("���")->AsString;
		DBEdit2->Text = dm->ADOT_Country->FieldByName("�����")->AsString;
	}

	if(DBNavigator1 -> DataSource == dm -> DSPackage)
	{
		Edit1->Text = dm->ADOT_Package->FieldByName("���")->AsString;
		Edit2->Text = dm->ADOT_Package->FieldByName("��� ��������")->AsString;
		Edit3->Text = dm->ADOT_Package->FieldByName("����")->AsString;
		Edit4->Text = dm->ADOT_Package->FieldByName("�������")->AsString;
		Edit5->Text = dm->ADOT_Package->FieldByName("���������� ���������")->AsString;

		//LB3
		DBEdit1->Text = dm->ADOT_Package->FieldByName("���")->AsString;
		DBEdit2->Text = dm->ADOT_Package->FieldByName("��� ��������")->AsString;
		DBEdit3->Text = dm->ADOT_Package->FieldByName("����")->AsString;
		DBEdit4->Text = dm->ADOT_Package->FieldByName("�������")->AsString;
		DBEdit5->Text = dm->ADOT_Package->FieldByName("���������� ���������")->AsString;
	}
}
void __fastcall TForm1::Button9Click(TObject *Sender)
{
	logger.log("������������ ������� ����������");
	DBNavigator1 -> DataSource -> DataSet -> Insert();

	if(DBNavigator1 -> DataSource == dm -> DSProducts)
	{
		dm -> ADOT_Products -> FieldByName("���") -> AsString = Edit1 -> Text;
		dm -> ADOT_Products -> FieldByName("���������") -> AsString = Edit2 -> Text;
		dm -> ADOT_Products -> FieldByName("�����") -> AsString = Edit3 -> Text;
		dm -> ADOT_Products -> FieldByName("��������") -> AsString = Edit4 -> Text;
		dm -> ADOT_Products -> FieldByName("�����") -> AsString = Edit5 -> Text;
		dm -> ADOT_Products -> FieldByName("��������") -> AsString = Edit6 -> Text;
		dm -> ADOT_Products -> FieldByName("��������") -> AsString = Edit7 -> Text;
		dm -> ADOT_Products -> FieldByName("ʳ������") -> AsString = Edit8 -> Text;
		dm -> ADOT_Products -> FieldByName("����") -> AsString = Edit9 -> Text;
		dm -> ADOT_Products -> FieldByName("����������") -> AsString = Edit10 -> Text;
		dm -> ADOT_Products -> FieldByName("�����") -> AsString = Edit11 -> Text;
		dm -> ADOT_Products -> FieldByName("������������") -> AsString = Edit12 -> Text;

		//LB3
		dm -> ADOT_Products -> FieldByName("���") -> AsString = DBEdit1 -> Text;
		dm -> ADOT_Products -> FieldByName("���������") -> AsString = DBEdit2 -> Text;
		dm -> ADOT_Products -> FieldByName("�����") -> AsString = DBEdit3 -> Text;
		dm->ADOT_Products->FieldByName("��������")->AsBoolean = DBCheckBox1->Checked;
		dm -> ADOT_Products -> FieldByName("�����") -> AsString = DBEdit4 -> Text;
		dm -> ADOT_Products -> FieldByName("��������") -> AsString = DBEdit5 -> Text;
		dm -> ADOT_Products -> FieldByName("��������") -> AsString = DBEdit6 -> Text;
		dm -> ADOT_Products -> FieldByName("ʳ������") -> AsString = DBEdit7 -> Text;
		dm -> ADOT_Products -> FieldByName("����") -> AsString = DBEdit8 -> Text;
		dm -> ADOT_Products -> FieldByName("����������") -> AsString = DBMemo1 -> Text;
		dm -> ADOT_Products -> FieldByName("�����") -> AsString = DBMemo2 -> Text;
		dm -> ADOT_Products -> FieldByName("������������") -> AsString = DBEdit9 -> Text;
	}

	if(DBNavigator1 -> DataSource == dm -> DSProducer)
	{
		dm -> ADOT_Producer -> FieldByName("���") -> AsString = Edit1 -> Text;
		dm -> ADOT_Producer -> FieldByName("�����") -> AsString = Edit2 -> Text;
		dm -> ADOT_Producer -> FieldByName("�������� ������") -> AsString = Edit3 -> Text;
		dm -> ADOT_Producer -> FieldByName("�����") -> AsString = Edit4 -> Text;

		//LB3
		dm -> ADOT_Producer -> FieldByName("���") -> AsString = DBEdit1 -> Text;
		dm -> ADOT_Producer -> FieldByName("�����") -> AsString = DBEdit2 -> Text;
		dm -> ADOT_Producer -> FieldByName("�������� ������") -> AsString = DBEdit3 -> Text;
		dm -> ADOT_Producer -> FieldByName("�����") -> AsString = DBEdit4 -> Text;
	}

	if(DBNavigator1 -> DataSource == dm -> DSCategory)
	{
		dm -> ADOT_Category -> FieldByName("���") -> AsString = Edit1 -> Text;
		dm -> ADOT_Category -> FieldByName("�����") -> AsString = Edit2 -> Text;
		dm -> ADOT_Category -> FieldByName("����") -> AsString = Edit3 -> Text;

		//LB3
		dm -> ADOT_Category -> FieldByName("���") -> AsString = DBEdit1 -> Text;
		dm -> ADOT_Category -> FieldByName("�����") -> AsString = DBEdit2 -> Text;
		dm -> ADOT_Category -> FieldByName("����") -> AsString = DBEdit3 -> Text;
	}

	if(DBNavigator1 -> DataSource == dm -> DSConsistence)
	{
		dm -> ADOT_Consistence -> FieldByName("���") -> AsString = Edit1 -> Text;
		dm -> ADOT_Consistence -> FieldByName("�����") -> AsString = Edit2 -> Text;
		dm -> ADOT_Consistence -> FieldByName("����") -> AsString = Edit3 -> Text;

		//LB3
		dm -> ADOT_Consistence -> FieldByName("���") -> AsString = DBEdit1 -> Text;
		dm -> ADOT_Consistence -> FieldByName("�����") -> AsString = DBEdit2 -> Text;
		dm -> ADOT_Consistence -> FieldByName("����") -> AsString = DBEdit3 -> Text;
	}

	if(DBNavigator1 -> DataSource == dm -> DSCountry)
	{
		dm -> ADOT_Country -> FieldByName("���") -> AsString = Edit1 -> Text;
		dm -> ADOT_Country -> FieldByName("�����") -> AsString = Edit2 -> Text;

		//LB3
		dm -> ADOT_Country -> FieldByName("���") -> AsString = DBEdit1 -> Text;
		dm -> ADOT_Country -> FieldByName("�����") -> AsString = DBEdit2 -> Text;
	}

	if(DBNavigator1 -> DataSource == dm -> DSPackage)
	{
		dm -> ADOT_Package -> FieldByName("���") -> AsString = Edit1 -> Text;
		dm -> ADOT_Package -> FieldByName("��� ��������") -> AsString = Edit2 -> Text;
		dm -> ADOT_Package -> FieldByName("����") -> AsString = Edit3 -> Text;
		dm -> ADOT_Package -> FieldByName("�������") -> AsString = Edit4 -> Text;
		dm -> ADOT_Package -> FieldByName("���������� ���������") -> AsString = Edit5 -> Text;

		//LB3
		dm -> ADOT_Package -> FieldByName("���") -> AsString = DBEdit1 -> Text;
		dm -> ADOT_Package -> FieldByName("��� ��������") -> AsString = DBEdit2 -> Text;
		dm -> ADOT_Package -> FieldByName("����") -> AsString = DBEdit3 -> Text;
		dm -> ADOT_Package -> FieldByName("�������") -> AsString = DBEdit4 -> Text;
		dm -> ADOT_Package -> FieldByName("���������� ���������") -> AsString = DBEdit5 -> Text;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button10Click(TObject *Sender)
{
	logger.log("������������ ������ ����������");

	DBNavigator1 -> DataSource -> DataSet -> Delete();
	ShowData();
}
//---------------------------------------------------------------------------



void __fastcall TForm1::FormActivate(TObject *Sender)
{
	Edit1 -> Visible = false;
	Edit2 -> Visible = false;
	Edit3 -> Visible = false;
	Edit4 -> Visible = false;
	Edit5 -> Visible = false;
	Edit6 -> Visible = false;
	Edit7 -> Visible = false;
	Edit8 -> Visible = false;
	Edit9 -> Visible = false;
	Edit10 -> Visible = false;
	Edit11 -> Visible = false;
	Edit12 -> Visible = false;
	Button1 -> Visible = false;
	Button2 -> Visible = false;
	Button9 -> Visible = false;
	Button10 -> Visible = false;

	DBEdit1 -> Visible = false;
	DBEdit2 -> Visible = false;
	DBEdit3 -> Visible = false;
	DBEdit4 -> Visible = false;
	DBEdit5 -> Visible = false;
	DBEdit6 -> Visible = false;
	DBEdit7 -> Visible = false;
	DBEdit8 -> Visible = false;
	DBEdit9 -> Visible = false;
	DBMemo1 -> Visible = false;
	DBMemo2 -> Visible = false;
	DBCheckBox1 -> Visible = false;
}
//---------------------------------------------------------------------------

