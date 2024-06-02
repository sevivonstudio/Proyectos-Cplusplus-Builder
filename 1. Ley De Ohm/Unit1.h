//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TGroupBox *GroupBox1;
	TGroupBox *GroupBox2;
	TRadioButton *Rdb_Corriente;
	TRadioButton *Rdb_Voltaje;
	TRadioButton *Rdb_Resistencia;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TEdit *Txt_Corriente;
	TEdit *Txt_Voltaje;
	TEdit *Txt_Resistencia;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TImage *Image1;
	TButton *Btn_Calcular;
	TButton *Btn_Salir;
	void __fastcall Btn_SalirClick(TObject *Sender);
	void __fastcall Rdb_CorrienteClick(TObject *Sender);
	void __fastcall Rdb_VoltajeClick(TObject *Sender);
	void __fastcall Rdb_ResistenciaClick(TObject *Sender);
	void __fastcall Btn_CalcularClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
