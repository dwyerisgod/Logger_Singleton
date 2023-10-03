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

	logger.log("Пользователь перешел к первой записи.");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender) //next
{
	DBNavigator1 -> DataSource -> DataSet -> Next();
	ShowData();

	logger.log("Пользователь перешел ко-второй записи.");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender) //products_activate
{
	logger.log("Пользователь активировал каталог продуктов.");

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

    Edit1->Text = dm->ADOT_Products->FieldByName("Код")->AsString;
	Edit2->Text = dm->ADOT_Products->FieldByName("Категория")->AsString;
	Edit3->Text = dm->ADOT_Products->FieldByName("Назва")->AsString;
	Edit4->Text = dm->ADOT_Products->FieldByName("Наявність")->AsString;
	Edit5->Text = dm->ADOT_Products->FieldByName("Країна")->AsString;
	Edit6->Text = dm->ADOT_Products->FieldByName("Виробник")->AsString;
	Edit7->Text = dm->ADOT_Products->FieldByName("Упаковка")->AsString;
	Edit8->Text = dm->ADOT_Products->FieldByName("Кількість")->AsString;
	Edit9->Text = dm->ADOT_Products->FieldByName("Вага")->AsString;
	Edit10->Text = dm->ADOT_Products->FieldByName("Особливості")->AsString;
	Edit11->Text = dm->ADOT_Products->FieldByName("Склад")->AsString;
	Edit12->Text = dm->ADOT_Products->FieldByName("Консистенція")->AsString;

	//lb3
	DBEdit1->Text = dm->ADOT_Products->FieldByName("Код")->AsString;
	DBEdit2->Text = dm->ADOT_Products->FieldByName("Категория")->AsString;
	DBEdit3->Text = dm->ADOT_Products->FieldByName("Назва")->AsString;
	DBEdit4->Text = dm->ADOT_Products->FieldByName("Країна")->AsString;
	DBEdit5->Text = dm->ADOT_Products->FieldByName("Виробник")->AsString;
	DBEdit6->Text = dm->ADOT_Products->FieldByName("Упаковка")->AsString;
	DBEdit7->Text = dm->ADOT_Products->FieldByName("Кількість")->AsString;
	DBEdit8->Text = dm->ADOT_Products->FieldByName("Вага")->AsString;
	DBMemo1->Text = dm->ADOT_Products->FieldByName("Особливості")->AsString;
	DBMemo2->Text = dm->ADOT_Products->FieldByName("Склад")->AsString;
	DBEdit9->Text = dm->ADOT_Products->FieldByName("Консистенція")->AsString;
	DBCheckBox1->DataField = "Наявність";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender) //producer_activate
{
	logger.log("Пользователь активировал каталог производителей.");

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

	Edit1->Text = dm->ADOT_Producer->FieldByName("Код")->AsString;
	Edit2->Text = dm->ADOT_Producer->FieldByName("Назва")->AsString;
	Edit3->Text = dm->ADOT_Producer->FieldByName("Юридична адреса")->AsString;
	Edit4->Text = dm->ADOT_Producer->FieldByName("Країна")->AsString;

	//lb3
	DBEdit1->Text = dm->ADOT_Producer->FieldByName("Код")->AsString;
	DBEdit2->Text = dm->ADOT_Producer->FieldByName("Назва")->AsString;
	DBEdit3->Text = dm->ADOT_Producer->FieldByName("Юридична адреса")->AsString;
	DBEdit4->Text = dm->ADOT_Producer->FieldByName("Країна")->AsString;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender) //consistence_activate
{
	logger.log("Пользователь активировал каталог консистенции.");

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

	Edit1->Text = dm->ADOT_Consistence->FieldByName("Код")->AsString;
	Edit2->Text = dm->ADOT_Consistence->FieldByName("Назва")->AsString;
	Edit3->Text = dm->ADOT_Consistence->FieldByName("Опис")->AsString;

	//lb3
	DBEdit1->Text = dm->ADOT_Consistence->FieldByName("Код")->AsString;
	DBEdit2->Text = dm->ADOT_Consistence->FieldByName("Назва")->AsString;
	DBEdit3->Text = dm->ADOT_Consistence->FieldByName("Опис")->AsString;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender) //country_activate
{
	logger.log("Пользователь активировал каталог стран.");

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

	Edit1->Text = dm->ADOT_Country->FieldByName("Код")->AsString;
	Edit2->Text = dm->ADOT_Country->FieldByName("Назва")->AsString;

	//lb3
	DBEdit1->Text = dm->ADOT_Country->FieldByName("Код")->AsString;
	DBEdit2->Text = dm->ADOT_Country->FieldByName("Назва")->AsString;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender) //category_activate
{
	logger.log("Пользователь активировал каталог категорий.");

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

	Edit1->Text = dm->ADOT_Category->FieldByName("Код")->AsString;
	Edit2->Text = dm->ADOT_Category->FieldByName("Назва")->AsString;
	Edit3->Text = dm->ADOT_Category->FieldByName("Опис")->AsString;

	//lb3
	DBEdit1->Text = dm->ADOT_Category->FieldByName("Код")->AsString;
	DBEdit2->Text = dm->ADOT_Category->FieldByName("Назва")->AsString;
	DBEdit3->Text = dm->ADOT_Category->FieldByName("Опис")->AsString;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button8Click(TObject *Sender) //package_activate
{
	logger.log("Пользователь активировал каталог упаковок.");

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

	Edit1->Text = dm->ADOT_Package->FieldByName("Код")->AsString;
	Edit2->Text = dm->ADOT_Package->FieldByName("Вид упаоквки")->AsString;
	Edit3->Text = dm->ADOT_Package->FieldByName("Опис")->AsString;
	Edit4->Text = dm->ADOT_Package->FieldByName("Матеріал")->AsString;
	Edit5->Text = dm->ADOT_Package->FieldByName("Особливості зберігання")->AsString;

	//lb3
	DBEdit1->Text = dm->ADOT_Package->FieldByName("Код")->AsString;
	DBEdit2->Text = dm->ADOT_Package->FieldByName("Вид упаоквки")->AsString;
	DBEdit3->Text = dm->ADOT_Package->FieldByName("Опис")->AsString;
	DBEdit4->Text = dm->ADOT_Package->FieldByName("Матеріал")->AsString;
	DBEdit5->Text = dm->ADOT_Package->FieldByName("Особливості зберігання")->AsString;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ShowData()
{
	if(DBNavigator1 -> DataSource == dm -> DSProducts)
	{
		Edit1->Text = dm->ADOT_Products->FieldByName("Код")->AsString;
		Edit2->Text = dm->ADOT_Products->FieldByName("Категория")->AsString;
		Edit3->Text = dm->ADOT_Products->FieldByName("Назва")->AsString;
		Edit4->Text = dm->ADOT_Products->FieldByName("Наявність")->AsString;
		Edit5->Text = dm->ADOT_Products->FieldByName("Країна")->AsString;
		Edit6->Text = dm->ADOT_Products->FieldByName("Виробник")->AsString;
		Edit7->Text = dm->ADOT_Products->FieldByName("Упаковка")->AsString;
		Edit8->Text = dm->ADOT_Products->FieldByName("Кількість")->AsString;
		Edit9->Text = dm->ADOT_Products->FieldByName("Вага")->AsString;
		Edit10->Text = dm->ADOT_Products->FieldByName("Особливості")->AsString;
		Edit11->Text = dm->ADOT_Products->FieldByName("Склад")->AsString;
		Edit12->Text = dm->ADOT_Products->FieldByName("Консистенція")->AsString;

		//LB3
        DBEdit1->Text = dm->ADOT_Products->FieldByName("Код")->AsString;
		DBEdit2->Text = dm->ADOT_Products->FieldByName("Категория")->AsString;
		DBEdit3->Text = dm->ADOT_Products->FieldByName("Назва")->AsString;
		DBEdit4->Text = dm->ADOT_Products->FieldByName("Країна")->AsString;
		DBEdit5->Text = dm->ADOT_Products->FieldByName("Виробник")->AsString;
		DBEdit6->Text = dm->ADOT_Products->FieldByName("Упаковка")->AsString;
		DBEdit7->Text = dm->ADOT_Products->FieldByName("Кількість")->AsString;
		DBEdit8->Text = dm->ADOT_Products->FieldByName("Вага")->AsString;
		DBMemo1->Text = dm->ADOT_Products->FieldByName("Особливості")->AsString;
		DBMemo2->Text = dm->ADOT_Products->FieldByName("Склад")->AsString;
		DBEdit9->Text = dm->ADOT_Products->FieldByName("Консистенція")->AsString;
		DBCheckBox1->DataField = "Наявність";
	}

	if(DBNavigator1 -> DataSource == dm -> DSProducer)
	{
		Edit1->Text = dm->ADOT_Producer->FieldByName("Код")->AsString;
		Edit2->Text = dm->ADOT_Producer->FieldByName("Назва")->AsString;
		Edit3->Text = dm->ADOT_Producer->FieldByName("Юридична адреса")->AsString;
		Edit4->Text = dm->ADOT_Producer->FieldByName("Країна")->AsString;

		//LB3
        DBEdit1->Text = dm->ADOT_Producer->FieldByName("Код")->AsString;
		DBEdit2->Text = dm->ADOT_Producer->FieldByName("Назва")->AsString;
		DBEdit3->Text = dm->ADOT_Producer->FieldByName("Юридична адреса")->AsString;
		DBEdit4->Text = dm->ADOT_Producer->FieldByName("Країна")->AsString;
	}

	if(DBNavigator1 -> DataSource == dm -> DSCategory)
	{
		Edit1->Text = dm->ADOT_Category->FieldByName("Код")->AsString;
		Edit2->Text = dm->ADOT_Category->FieldByName("Назва")->AsString;
		Edit3->Text = dm->ADOT_Category->FieldByName("Опис")->AsString;

		//LB3
		DBEdit1->Text = dm->ADOT_Category->FieldByName("Код")->AsString;
		DBEdit2->Text = dm->ADOT_Category->FieldByName("Назва")->AsString;
		DBEdit3->Text = dm->ADOT_Category->FieldByName("Опис")->AsString;
	}

	if(DBNavigator1 -> DataSource == dm -> DSConsistence)
	{
		Edit1->Text = dm->ADOT_Consistence->FieldByName("Код")->AsString;
		Edit2->Text = dm->ADOT_Consistence->FieldByName("Назва")->AsString;
		Edit3->Text = dm->ADOT_Consistence->FieldByName("Опис")->AsString;

		//LB3
		DBEdit1->Text = dm->ADOT_Consistence->FieldByName("Код")->AsString;
		DBEdit2->Text = dm->ADOT_Consistence->FieldByName("Назва")->AsString;
		DBEdit3->Text = dm->ADOT_Consistence->FieldByName("Опис")->AsString;
	}

	if(DBNavigator1 -> DataSource == dm -> DSCountry)
	{
		Edit1->Text = dm->ADOT_Country->FieldByName("Код")->AsString;
		Edit2->Text = dm->ADOT_Country->FieldByName("Назва")->AsString;

		//LB3
		DBEdit1->Text = dm->ADOT_Country->FieldByName("Код")->AsString;
		DBEdit2->Text = dm->ADOT_Country->FieldByName("Назва")->AsString;
	}

	if(DBNavigator1 -> DataSource == dm -> DSPackage)
	{
		Edit1->Text = dm->ADOT_Package->FieldByName("Код")->AsString;
		Edit2->Text = dm->ADOT_Package->FieldByName("Вид упаоквки")->AsString;
		Edit3->Text = dm->ADOT_Package->FieldByName("Опис")->AsString;
		Edit4->Text = dm->ADOT_Package->FieldByName("Матеріал")->AsString;
		Edit5->Text = dm->ADOT_Package->FieldByName("Особливості зберігання")->AsString;

		//LB3
		DBEdit1->Text = dm->ADOT_Package->FieldByName("Код")->AsString;
		DBEdit2->Text = dm->ADOT_Package->FieldByName("Вид упаоквки")->AsString;
		DBEdit3->Text = dm->ADOT_Package->FieldByName("Опис")->AsString;
		DBEdit4->Text = dm->ADOT_Package->FieldByName("Матеріал")->AsString;
		DBEdit5->Text = dm->ADOT_Package->FieldByName("Особливості зберігання")->AsString;
	}
}
void __fastcall TForm1::Button9Click(TObject *Sender)
{
	logger.log("Пользователь добавил информацию");
	DBNavigator1 -> DataSource -> DataSet -> Insert();

	if(DBNavigator1 -> DataSource == dm -> DSProducts)
	{
		dm -> ADOT_Products -> FieldByName("Код") -> AsString = Edit1 -> Text;
		dm -> ADOT_Products -> FieldByName("Категория") -> AsString = Edit2 -> Text;
		dm -> ADOT_Products -> FieldByName("Назва") -> AsString = Edit3 -> Text;
		dm -> ADOT_Products -> FieldByName("Наявність") -> AsString = Edit4 -> Text;
		dm -> ADOT_Products -> FieldByName("Країна") -> AsString = Edit5 -> Text;
		dm -> ADOT_Products -> FieldByName("Виробник") -> AsString = Edit6 -> Text;
		dm -> ADOT_Products -> FieldByName("Упаковка") -> AsString = Edit7 -> Text;
		dm -> ADOT_Products -> FieldByName("Кількість") -> AsString = Edit8 -> Text;
		dm -> ADOT_Products -> FieldByName("Вага") -> AsString = Edit9 -> Text;
		dm -> ADOT_Products -> FieldByName("Особливості") -> AsString = Edit10 -> Text;
		dm -> ADOT_Products -> FieldByName("Склад") -> AsString = Edit11 -> Text;
		dm -> ADOT_Products -> FieldByName("Консистенція") -> AsString = Edit12 -> Text;

		//LB3
		dm -> ADOT_Products -> FieldByName("Код") -> AsString = DBEdit1 -> Text;
		dm -> ADOT_Products -> FieldByName("Категория") -> AsString = DBEdit2 -> Text;
		dm -> ADOT_Products -> FieldByName("Назва") -> AsString = DBEdit3 -> Text;
		dm->ADOT_Products->FieldByName("Наявність")->AsBoolean = DBCheckBox1->Checked;
		dm -> ADOT_Products -> FieldByName("Країна") -> AsString = DBEdit4 -> Text;
		dm -> ADOT_Products -> FieldByName("Виробник") -> AsString = DBEdit5 -> Text;
		dm -> ADOT_Products -> FieldByName("Упаковка") -> AsString = DBEdit6 -> Text;
		dm -> ADOT_Products -> FieldByName("Кількість") -> AsString = DBEdit7 -> Text;
		dm -> ADOT_Products -> FieldByName("Вага") -> AsString = DBEdit8 -> Text;
		dm -> ADOT_Products -> FieldByName("Особливості") -> AsString = DBMemo1 -> Text;
		dm -> ADOT_Products -> FieldByName("Склад") -> AsString = DBMemo2 -> Text;
		dm -> ADOT_Products -> FieldByName("Консистенція") -> AsString = DBEdit9 -> Text;
	}

	if(DBNavigator1 -> DataSource == dm -> DSProducer)
	{
		dm -> ADOT_Producer -> FieldByName("Код") -> AsString = Edit1 -> Text;
		dm -> ADOT_Producer -> FieldByName("Назва") -> AsString = Edit2 -> Text;
		dm -> ADOT_Producer -> FieldByName("Юридична адреса") -> AsString = Edit3 -> Text;
		dm -> ADOT_Producer -> FieldByName("Країна") -> AsString = Edit4 -> Text;

		//LB3
		dm -> ADOT_Producer -> FieldByName("Код") -> AsString = DBEdit1 -> Text;
		dm -> ADOT_Producer -> FieldByName("Назва") -> AsString = DBEdit2 -> Text;
		dm -> ADOT_Producer -> FieldByName("Юридична адреса") -> AsString = DBEdit3 -> Text;
		dm -> ADOT_Producer -> FieldByName("Країна") -> AsString = DBEdit4 -> Text;
	}

	if(DBNavigator1 -> DataSource == dm -> DSCategory)
	{
		dm -> ADOT_Category -> FieldByName("Код") -> AsString = Edit1 -> Text;
		dm -> ADOT_Category -> FieldByName("Назва") -> AsString = Edit2 -> Text;
		dm -> ADOT_Category -> FieldByName("Опис") -> AsString = Edit3 -> Text;

		//LB3
		dm -> ADOT_Category -> FieldByName("Код") -> AsString = DBEdit1 -> Text;
		dm -> ADOT_Category -> FieldByName("Назва") -> AsString = DBEdit2 -> Text;
		dm -> ADOT_Category -> FieldByName("Опис") -> AsString = DBEdit3 -> Text;
	}

	if(DBNavigator1 -> DataSource == dm -> DSConsistence)
	{
		dm -> ADOT_Consistence -> FieldByName("Код") -> AsString = Edit1 -> Text;
		dm -> ADOT_Consistence -> FieldByName("Назва") -> AsString = Edit2 -> Text;
		dm -> ADOT_Consistence -> FieldByName("Опис") -> AsString = Edit3 -> Text;

		//LB3
		dm -> ADOT_Consistence -> FieldByName("Код") -> AsString = DBEdit1 -> Text;
		dm -> ADOT_Consistence -> FieldByName("Назва") -> AsString = DBEdit2 -> Text;
		dm -> ADOT_Consistence -> FieldByName("Опис") -> AsString = DBEdit3 -> Text;
	}

	if(DBNavigator1 -> DataSource == dm -> DSCountry)
	{
		dm -> ADOT_Country -> FieldByName("Код") -> AsString = Edit1 -> Text;
		dm -> ADOT_Country -> FieldByName("Назва") -> AsString = Edit2 -> Text;

		//LB3
		dm -> ADOT_Country -> FieldByName("Код") -> AsString = DBEdit1 -> Text;
		dm -> ADOT_Country -> FieldByName("Назва") -> AsString = DBEdit2 -> Text;
	}

	if(DBNavigator1 -> DataSource == dm -> DSPackage)
	{
		dm -> ADOT_Package -> FieldByName("Код") -> AsString = Edit1 -> Text;
		dm -> ADOT_Package -> FieldByName("Вид упаоквки") -> AsString = Edit2 -> Text;
		dm -> ADOT_Package -> FieldByName("Опис") -> AsString = Edit3 -> Text;
		dm -> ADOT_Package -> FieldByName("Матеріал") -> AsString = Edit4 -> Text;
		dm -> ADOT_Package -> FieldByName("Особливості зберігання") -> AsString = Edit5 -> Text;

		//LB3
		dm -> ADOT_Package -> FieldByName("Код") -> AsString = DBEdit1 -> Text;
		dm -> ADOT_Package -> FieldByName("Вид упаоквки") -> AsString = DBEdit2 -> Text;
		dm -> ADOT_Package -> FieldByName("Опис") -> AsString = DBEdit3 -> Text;
		dm -> ADOT_Package -> FieldByName("Матеріал") -> AsString = DBEdit4 -> Text;
		dm -> ADOT_Package -> FieldByName("Особливості зберігання") -> AsString = DBEdit5 -> Text;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button10Click(TObject *Sender)
{
	logger.log("Пользователь удалил информацию");

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

