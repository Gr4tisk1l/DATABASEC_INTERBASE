object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
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
  object Button1: TButton
    Left = 56
    Top = 16
    Width = 129
    Height = 25
    Caption = 'Pokaz tabele'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 56
    Top = 47
    Width = 129
    Height = 25
    Caption = 'Srednia chl i dzw'
    TabOrder = 1
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 56
    Top = 78
    Width = 129
    Height = 25
    Caption = 'Pokaz uczniow'
    TabOrder = 2
    OnClick = Button3Click
  end
  object Edit1: TEdit
    Left = 216
    Top = 49
    Width = 121
    Height = 21
    TabOrder = 3
  end
  object Button4: TButton
    Left = 56
    Top = 109
    Width = 129
    Height = 25
    Caption = 'Dodaj ucznia'
    TabOrder = 4
    OnClick = Button4Click
  end
end
