object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 490
  ClientWidth = 1010
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  OnActivate = FormActivate
  PixelsPerInch = 96
  TextHeight = 13
  object Tables: TMemo
    Left = 8
    Top = 8
    Width = 185
    Height = 257
    Lines.Strings = (
      'Tables')
    TabOrder = 12
  end
  object Edit1: TEdit
    Left = 8
    Top = 284
    Width = 33
    Height = 21
    TabOrder = 0
  end
  object Edit2: TEdit
    Left = 47
    Top = 284
    Width = 121
    Height = 21
    TabOrder = 1
  end
  object Edit3: TEdit
    Left = 174
    Top = 284
    Width = 121
    Height = 21
    TabOrder = 2
  end
  object Edit4: TEdit
    Left = 301
    Top = 284
    Width = 121
    Height = 21
    TabOrder = 3
  end
  object Button1: TButton
    Left = 880
    Top = 271
    Width = 96
    Height = 26
    Caption = 'First'
    TabOrder = 4
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 880
    Top = 303
    Width = 96
    Height = 26
    Caption = 'Next'
    TabOrder = 5
    OnClick = Button2Click
  end
  object DBGrid1: TDBGrid
    Left = 199
    Top = 8
    Width = 777
    Height = 257
    DataSource = dm.DSProducts
    TabOrder = 13
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
  end
  object Button3: TButton
    Left = 56
    Top = 63
    Width = 89
    Height = 33
    Caption = 'Producer'
    TabOrder = 6
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 56
    Top = 141
    Width = 89
    Height = 33
    Caption = 'Category'
    TabOrder = 7
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 56
    Top = 219
    Width = 89
    Height = 33
    Caption = 'Consistence'
    TabOrder = 8
    OnClick = Button5Click
  end
  object Button6: TButton
    Left = 56
    Top = 180
    Width = 89
    Height = 33
    Caption = 'Country'
    TabOrder = 9
    OnClick = Button6Click
  end
  object Button7: TButton
    Left = 56
    Top = 24
    Width = 89
    Height = 33
    Caption = 'Products'
    TabOrder = 10
    OnClick = Button7Click
  end
  object Button8: TButton
    Left = 56
    Top = 102
    Width = 89
    Height = 33
    Caption = 'Packaging'
    TabOrder = 11
    OnClick = Button8Click
  end
  object Edit5: TEdit
    Left = 428
    Top = 284
    Width = 121
    Height = 21
    TabOrder = 14
  end
  object Edit6: TEdit
    Left = 555
    Top = 284
    Width = 121
    Height = 21
    TabOrder = 15
  end
  object Edit7: TEdit
    Left = 682
    Top = 284
    Width = 121
    Height = 21
    TabOrder = 16
  end
  object Edit8: TEdit
    Left = 47
    Top = 311
    Width = 121
    Height = 21
    TabOrder = 17
  end
  object Edit9: TEdit
    Left = 174
    Top = 311
    Width = 121
    Height = 21
    TabOrder = 18
  end
  object Edit10: TEdit
    Left = 301
    Top = 311
    Width = 121
    Height = 21
    TabOrder = 19
  end
  object Edit11: TEdit
    Left = 428
    Top = 311
    Width = 121
    Height = 21
    TabOrder = 20
  end
  object Edit12: TEdit
    Left = 555
    Top = 311
    Width = 121
    Height = 21
    TabOrder = 21
  end
  object Button9: TButton
    Left = 880
    Top = 335
    Width = 96
    Height = 26
    Caption = 'Insert'
    TabOrder = 22
    OnClick = Button9Click
  end
  object Button10: TButton
    Left = 880
    Top = 367
    Width = 96
    Height = 26
    Caption = 'Delete'
    TabOrder = 23
    OnClick = Button10Click
  end
  object DBNavigator1: TDBNavigator
    Left = 8
    Top = 457
    Width = 240
    Height = 25
    TabOrder = 24
  end
  object DBEdit1: TDBEdit
    Left = 8
    Top = 352
    Width = 33
    Height = 21
    TabOrder = 25
  end
  object DBEdit2: TDBEdit
    Left = 47
    Top = 352
    Width = 121
    Height = 21
    TabOrder = 26
  end
  object DBEdit3: TDBEdit
    Left = 174
    Top = 352
    Width = 121
    Height = 21
    TabOrder = 27
  end
  object DBCheckBox1: TDBCheckBox
    Left = 555
    Top = 383
    Width = 97
    Height = 17
    Caption = #1053#1072#1103#1074#1085#1110#1089#1090#1100
    DataField = #1053#1072#1103#1074#1085#1110#1089#1090#1100
    DataSource = dm.DSProducts
    TabOrder = 28
  end
  object DBEdit4: TDBEdit
    Left = 301
    Top = 352
    Width = 121
    Height = 21
    TabOrder = 29
  end
  object DBEdit5: TDBEdit
    Left = 428
    Top = 352
    Width = 121
    Height = 21
    TabOrder = 30
  end
  object DBEdit6: TDBEdit
    Left = 555
    Top = 352
    Width = 121
    Height = 21
    TabOrder = 31
  end
  object DBEdit7: TDBEdit
    Left = 682
    Top = 352
    Width = 121
    Height = 21
    TabOrder = 32
  end
  object DBEdit8: TDBEdit
    Left = 47
    Top = 379
    Width = 121
    Height = 21
    TabOrder = 33
  end
  object DBEdit9: TDBEdit
    Left = 174
    Top = 379
    Width = 121
    Height = 21
    TabOrder = 34
  end
  object DBMemo1: TDBMemo
    Left = 301
    Top = 379
    Width = 121
    Height = 103
    TabOrder = 35
  end
  object DBMemo2: TDBMemo
    Left = 428
    Top = 379
    Width = 121
    Height = 103
    TabOrder = 36
  end
end
