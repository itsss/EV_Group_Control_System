//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <NMUDP.hpp>
#include <ADODB.hpp>
#include <DB.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TDBGrid *DBGrid1;
        TGroupBox *GroupBox1;
        TEdit *Edit1;
        TLabel *Label1;
        TButton *Button1;
        TGroupBox *GroupBox2;
        TCheckBox *CheckBox1;
        TCheckBox *CheckBox2;
        TCheckBox *CheckBox3;
        TCheckBox *CheckBox4;
        TCheckBox *CheckBox5;
        TCheckBox *CheckBox6;
        TCheckBox *CheckBox7;
        TCheckBox *CheckBox8;
        TButton *Button2;
        TButton *Button3;
        TButton *Button4;
        TButton *Button5;
        TNMUDP *NMUDP1;
        TADOConnection *ADOConnection1;
        TADOQuery *ADOQuery1;
        TDataSource *DataSource1;
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall Button5Click(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall NMUDP1InvalidHost(bool &handled);
        void __fastcall NMUDP1DataReceived(TComponent *Sender,
          int NumberBytes, AnsiString FromIP, int Port);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
