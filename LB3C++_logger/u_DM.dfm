﻿object dm: Tdm
  OldCreateOrder = False
  OnCreate = DataModuleCreate
  OnDestroy = DataModuleDestroy
  Height = 463
  Width = 854
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;Data Source=\\Mac\Home\Document' +
      's\LB1.mdb;Persist Security Info=False'
    LoginPrompt = False
    Mode = cmShareDenyNone
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 64
    Top = 80
  end
  object ADOT_Products: TADOTable
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = #1055#1088#1086#1076#1091#1082#1090#1080
    Left = 232
    Top = 80
    object ADOT_ProductsКод: TWordField
      FieldName = #1050#1086#1076
    end
    object ADOT_ProductsКатегория: TWordField
      FieldName = #1050#1072#1090#1077#1075#1086#1088#1080#1103
    end
    object ADOT_ProductsНазва: TWideStringField
      FieldName = #1053#1072#1079#1074#1072
      Size = 50
    end
    object ADOT_ProductsНаявність: TBooleanField
      FieldName = #1053#1072#1103#1074#1085#1110#1089#1090#1100
    end
    object ADOT_ProductsКраїна: TWordField
      FieldName = #1050#1088#1072#1111#1085#1072
    end
    object ADOT_ProductsВиробник: TWordField
      FieldName = #1042#1080#1088#1086#1073#1085#1080#1082
    end
    object ADOT_ProductsУпаковка: TWordField
      FieldName = #1059#1087#1072#1082#1086#1074#1082#1072
    end
    object ADOT_ProductsКількість: TSmallintField
      FieldName = #1050#1110#1083#1100#1082#1110#1089#1090#1100
    end
    object ADOT_ProductsВага: TWideStringField
      FieldName = #1042#1072#1075#1072
      Size = 255
    end
    object ADOT_ProductsОсобливості: TWideMemoField
      FieldName = #1054#1089#1086#1073#1083#1080#1074#1086#1089#1090#1110
      BlobType = ftWideMemo
    end
    object ADOT_ProductsСклад: TWideMemoField
      FieldName = #1057#1082#1083#1072#1076
      BlobType = ftWideMemo
    end
    object ADOT_ProductsКонсистенція: TWordField
      FieldName = #1050#1086#1085#1089#1080#1089#1090#1077#1085#1094#1110#1103
    end
    object ADOT_ProductsФото: TBlobField
      FieldName = #1060#1086#1090#1086
    end
  end
  object ADOT_Producer: TADOTable
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = #1042#1080#1088#1086#1073#1085#1080#1082
    Left = 320
    Top = 80
    object ADOT_ProducerКод: TWordField
      FieldName = #1050#1086#1076
    end
    object ADOT_ProducerНазва: TWideStringField
      FieldName = #1053#1072#1079#1074#1072
      Size = 100
    end
    object ADOT_ProducerЮридичнаадреса: TWideMemoField
      FieldName = #1070#1088#1080#1076#1080#1095#1085#1072' '#1072#1076#1088#1077#1089#1072
      BlobType = ftWideMemo
    end
    object ADOT_ProducerКраїна: TWordField
      FieldName = #1050#1088#1072#1111#1085#1072
    end
  end
  object DSProducts: TDataSource
    DataSet = ADOT_Products
    Left = 232
    Top = 144
  end
  object DSProducer: TDataSource
    DataSet = ADOT_Producer
    Left = 320
    Top = 144
  end
  object ADOT_Category: TADOTable
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = #1050#1072#1090#1077#1075#1086#1088#1110#1103
    Left = 408
    Top = 80
    object ADOT_CategoryКод: TWordField
      FieldName = #1050#1086#1076
    end
    object ADOT_CategoryНазва: TWideStringField
      FieldName = #1053#1072#1079#1074#1072
      Size = 30
    end
    object ADOT_CategoryОпис: TWideMemoField
      FieldName = #1054#1087#1080#1089
      BlobType = ftWideMemo
    end
  end
  object ADOT_Consistence: TADOTable
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = #1050#1086#1085#1089#1080#1089#1090#1077#1085#1094#1110#1103
    Left = 512
    Top = 80
    object ADOT_ConsistenceКод: TWordField
      FieldName = #1050#1086#1076
    end
    object ADOT_ConsistenceНазва: TWideStringField
      FieldName = #1053#1072#1079#1074#1072
      Size = 50
    end
    object ADOT_ConsistenceОпис: TWideMemoField
      FieldName = #1054#1087#1080#1089
      BlobType = ftWideMemo
    end
  end
  object ADOT_Country: TADOTable
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = #1050#1088#1072#1111#1085#1072
    Left = 616
    Top = 80
    object ADOT_CountryКод: TWordField
      FieldName = #1050#1086#1076
    end
    object ADOT_CountryНазва: TWideStringField
      FieldName = #1053#1072#1079#1074#1072
      Size = 3
    end
  end
  object ADOT_Package: TADOTable
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = #1059#1087#1072#1082#1086#1074#1082#1072
    Left = 704
    Top = 80
    object ADOT_PackageКод: TWordField
      FieldName = #1050#1086#1076
    end
    object ADOT_PackageВидупаоквки: TWideStringField
      FieldName = #1042#1080#1076' '#1091#1087#1072#1086#1082#1074#1082#1080
      Size = 255
    end
    object ADOT_PackageОпис: TWideMemoField
      FieldName = #1054#1087#1080#1089
      BlobType = ftWideMemo
    end
    object ADOT_PackageМатеріал: TWideMemoField
      FieldName = #1052#1072#1090#1077#1088#1110#1072#1083
      BlobType = ftWideMemo
    end
    object ADOT_PackageОсобливостізберігання: TWideMemoField
      FieldName = #1054#1089#1086#1073#1083#1080#1074#1086#1089#1090#1110' '#1079#1073#1077#1088#1110#1075#1072#1085#1085#1103
      BlobType = ftWideMemo
    end
  end
  object DSCategory: TDataSource
    DataSet = ADOT_Category
    Left = 408
    Top = 144
  end
  object DSConsistence: TDataSource
    DataSet = ADOT_Consistence
    Left = 512
    Top = 144
  end
  object DSCountry: TDataSource
    DataSet = ADOT_Country
    Left = 616
    Top = 144
  end
  object DSPackage: TDataSource
    DataSet = ADOT_Package
    Left = 704
    Top = 144
  end
end
