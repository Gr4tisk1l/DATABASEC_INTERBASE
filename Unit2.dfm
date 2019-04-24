object DataModule2: TDataModule2
  OldCreateOrder = False
  Height = 180
  Width = 427
  object IBDatabase1: TIBDatabase
    Connected = True
    DatabaseName = 'E:\bazy_C\KOLOS.IB'
    Params.Strings = (
      'USER_NAME=SYSDBA'
      'PASSWORD=masterkey')
    LoginPrompt = False
    ServerType = 'IBServer'
    Left = 16
    Top = 32
  end
  object IBTransaction1: TIBTransaction
    Active = True
    DefaultDatabase = IBDatabase1
    Left = 88
    Top = 32
  end
  object IBTable1: TIBTable
    Database = IBDatabase1
    Transaction = IBTransaction1
    Active = True
    BufferChunks = 1000
    CachedUpdates = False
    FieldDefs = <
      item
        Name = 'NAZWISKO'
        DataType = ftWideString
        Size = 15
      end
      item
        Name = 'IMIE'
        DataType = ftWideString
        Size = 15
      end
      item
        Name = 'KLASA'
        DataType = ftSmallint
      end
      item
        Name = 'PLEC'
        DataType = ftWideString
        Size = 1
      end
      item
        Name = 'WZROST'
        DataType = ftSmallint
      end
      item
        Name = 'WAGA'
        DataType = ftSmallint
      end>
    StoreDefs = True
    TableName = 'UCZNIOWIE'
    UniDirectional = False
    Left = 160
    Top = 32
  end
  object DataSource1: TDataSource
    DataSet = IBTable1
    Left = 224
    Top = 32
  end
end
