//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Btn_SalirClick(TObject *Sender)
{
	//Salir
    Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Rdb_CorrienteClick(TObject *Sender)
{
	//Estados iniciales cara calcular la corriente (I= V/R)
	Txt_Corriente->Text = "";
	Txt_Voltaje->Text = "";
	Txt_Resistencia->Text = "";

	Txt_Corriente->Enabled = false;
	Txt_Voltaje->Enabled = true;
	Txt_Resistencia->Enabled = true;

	Txt_Corriente->Color = clAqua;
	Txt_Voltaje->Color = clWindow;
	Txt_Resistencia->Color = clWindow;

	Txt_Voltaje->SetFocus();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Rdb_VoltajeClick(TObject *Sender)
{
	//Estados iniciales cara calcular el voltaje (V = I*R)
	Txt_Corriente->Text = "";
	Txt_Voltaje->Text = "";
	Txt_Resistencia->Text = "";

	Txt_Corriente->Enabled = true;
	Txt_Voltaje->Enabled = false;
	Txt_Resistencia->Enabled = true;

	Txt_Corriente->Color = clWindow;
	Txt_Voltaje->Color = clAqua;
	Txt_Resistencia->Color = clWindow;

	Txt_Corriente->SetFocus();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Rdb_ResistenciaClick(TObject *Sender)
{
	//Estados iniciales cara calcular la Resistencia (R = V/I)
	Txt_Corriente->Text = "";
	Txt_Voltaje->Text = "";
	Txt_Resistencia->Text = "";

	Txt_Corriente->Enabled = true;
	Txt_Voltaje->Enabled = true;
	Txt_Resistencia->Enabled = false;

	Txt_Corriente->Color = clWindow;
	Txt_Voltaje->Color = clWindow;
	Txt_Resistencia->Color = clAqua;

	Txt_Voltaje->SetFocus();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Btn_CalcularClick(TObject *Sender)
{
	//Se crean las variables a usar
	float corriente, voltaje, resistencia;

	//Calcular corriente (I=V/R)
	if (Rdb_Corriente->Checked) {
		voltaje = StrToFloat(Txt_Voltaje->Text);
		resistencia = StrToFloat(Txt_Resistencia->Text);
		Txt_Corriente->Text = voltaje / resistencia;
	}

	//Calcular Voltaje (V=I*R)
	if (Rdb_Voltaje->Checked) {
		corriente = StrToFloat(Txt_Corriente->Text);
		resistencia = StrToFloat(Txt_Resistencia->Text);
		Txt_Voltaje->Text = corriente * resistencia;
	}

	//Calcular Resistencia (R=V/I)
	if (Rdb_Resistencia->Checked) {
		corriente = StrToFloat(Txt_Corriente->Text);
		voltaje = StrToFloat(Txt_Voltaje->Text);
        Txt_Resistencia->Text = voltaje / corriente;
	}
}
//---------------------------------------------------------------------------

