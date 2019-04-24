object Form6: TForm6
  Left = 0
  Top = 0
  Caption = 'Form6'
  ClientHeight = 231
  ClientWidth = 505
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 40
    Top = 21
    Width = 44
    Height = 13
    Caption = 'Nazwisko'
  end
  object Label2: TLabel
    Left = 40
    Top = 48
    Width = 20
    Height = 13
    Caption = 'Imie'
  end
  object Label3: TLabel
    Left = 40
    Top = 80
    Width = 25
    Height = 13
    Caption = 'Klasa'
  end
  object Label4: TLabel
    Left = 40
    Top = 112
    Width = 19
    Height = 13
    Caption = 'Plec'
  end
  object Label5: TLabel
    Left = 40
    Top = 176
    Width = 28
    Height = 13
    Caption = 'Waga'
  end
  object Label6: TLabel
    Left = 40
    Top = 144
    Width = 34
    Height = 13
    Caption = 'Wzrost'
  end
  object DBEdit1: TDBEdit
    Left = 160
    Top = 18
    Width = 121
    Height = 21
    DataField = 'NAZWISKO'
    DataSource = DataModule2.DataSource1
    TabOrder = 0
    OnExit = DBEdit1Exit
  end
  object DBEdit2: TDBEdit
    Left = 160
    Top = 45
    Width = 121
    Height = 21
    DataField = 'IMIE'
    DataSource = DataModule2.DataSource1
    TabOrder = 1
  end
  object DBEdit3: TDBEdit
    Left = 160
    Top = 77
    Width = 121
    Height = 21
    DataField = 'KLASA'
    DataSource = DataModule2.DataSource1
    TabOrder = 2
  end
  object DBEdit4: TDBEdit
    Left = 160
    Top = 109
    Width = 121
    Height = 21
    DataField = 'PLEC'
    DataSource = DataModule2.DataSource1
    TabOrder = 3
  end
  object DBEdit5: TDBEdit
    Left = 160
    Top = 141
    Width = 121
    Height = 21
    DataField = 'WZROST'
    DataSource = DataModule2.DataSource1
    TabOrder = 4
  end
  object DBEdit6: TDBEdit
    Left = 160
    Top = 173
    Width = 121
    Height = 21
    DataField = 'WAGA'
    DataSource = DataModule2.DataSource1
    TabOrder = 5
  end
  object Button1: TButton
    Left = 344
    Top = 75
    Width = 75
    Height = 25
    Caption = 'Zatwierdz'
    TabOrder = 6
    OnClick = Button1Click
  end
end
