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

void __fastcall TForm1::Button2Click(TObject *Sender)
{
    if(NMUDP1->RemoteHost == "")
    {
        ShowMessage("클라이언트의 IP를 적어주세요");
    }
    else {
    if(CheckBox1->Checked == true)
    {
        AnsiString data ="rcall.1.3.";
        char sd[1000];
        memset(sd,0x00,sizeof(sd));
        memcpy(sd, data.c_str(), strlen(data.c_str()));
        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(data.c_str()));

        //1호기 3층호출
    }
    if(CheckBox2->Checked == true)
    {
        AnsiString data ="rcall.2.3.";
        char sd[1000];
        memset(sd,0x00,sizeof(sd));
        memcpy(sd, data.c_str(), strlen(data.c_str()));
        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(data.c_str()));
        //2호기 3층호출
    }
    if(CheckBox3->Checked == true)
    {
        AnsiString data ="rcall.3.3.";
        char sd[1000];
        memset(sd,0x00,sizeof(sd));
        memcpy(sd, data.c_str(), strlen(data.c_str()));
        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(data.c_str()));
        //3호기 3층호출
    }
    if(CheckBox4->Checked == true)
    {
        AnsiString data ="rcall.4.3.";
        char sd[1000];
        memset(sd,0x00,sizeof(sd));
        memcpy(sd, data.c_str(), strlen(data.c_str()));
        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(data.c_str()));
        //4호기 3층호출
    }
    if(CheckBox5->Checked == true)
    {
        AnsiString data ="rcall.5.3.";
        char sd[1000];
        memset(sd,0x00,sizeof(sd));
        memcpy(sd, data.c_str(), strlen(data.c_str()));
        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(data.c_str()));
        //5호기 3층호출
    }
    if(CheckBox6->Checked == true)
    {
        AnsiString data ="rcall.6.3.";
        char sd[1000];
        memset(sd,0x00,sizeof(sd));
        memcpy(sd, data.c_str(), strlen(data.c_str()));
        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(data.c_str()));
        //6호기 3층호출
    }
    if(CheckBox7->Checked == true)
    {
        AnsiString data ="rcall.7.3.";
        char sd[1000];
        memset(sd,0x00,sizeof(sd));
        memcpy(sd, data.c_str(), strlen(data.c_str()));
        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(data.c_str()));
        // 7호기 3층호출
    }
    if(CheckBox8->Checked == true)
    {
        AnsiString data ="rcall.8.3.";
        char sd[1000];
        memset(sd,0x00,sizeof(sd));
        memcpy(sd, data.c_str(), strlen(data.c_str()));
        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(data.c_str()));
        //8호기 3층호출
    }
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
    if(NMUDP1->RemoteHost == "")
    {
        ShowMessage("클라이언트의 IP를 적어주세요");
    }
    else {
    if(CheckBox1->Checked == true)
    {
        AnsiString data ="rcall.1.2.";
        char sd[1000];
        memset(sd,0x00,sizeof(sd));
        memcpy(sd, data.c_str(), strlen(data.c_str()));
        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(data.c_str()));
        //1호기 2층호출
    }
    if(CheckBox2->Checked == true)
    {
            AnsiString data ="rcall.2.2.";
        char sd[1000];
        memset(sd,0x00,sizeof(sd));
        memcpy(sd, data.c_str(), strlen(data.c_str()));
        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(data.c_str()));
        //2호기 2층호출
    }
    if(CheckBox3->Checked == true)
    {
            AnsiString data ="rcall.3.2.";
        char sd[1000];
        memset(sd,0x00,sizeof(sd));
        memcpy(sd, data.c_str(), strlen(data.c_str()));
        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(data.c_str()));
        //3호기 2층호출
    }
    if(CheckBox4->Checked == true)
    {
            AnsiString data ="rcall.4.2.";
        char sd[1000];
        memset(sd,0x00,sizeof(sd));
        memcpy(sd, data.c_str(), strlen(data.c_str()));
        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(data.c_str()));
        //4호기 2층호출
    }
    if(CheckBox5->Checked == true)
    {
            AnsiString data ="rcall.5.2.";
        char sd[1000];
        memset(sd,0x00,sizeof(sd));
        memcpy(sd, data.c_str(), strlen(data.c_str()));
        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(data.c_str()));
        //5호기 2층호출
    }
    if(CheckBox6->Checked == true)
    {
            AnsiString data ="rcall.6.2.";
        char sd[1000];
        memset(sd,0x00,sizeof(sd));
        memcpy(sd, data.c_str(), strlen(data.c_str()));
        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(data.c_str()));
        //6호기 2층호출
    }
    if(CheckBox7->Checked == true)
    {
            AnsiString data ="rcall.7.2.";
        char sd[1000];
        memset(sd,0x00,sizeof(sd));
        memcpy(sd, data.c_str(), strlen(data.c_str()));
        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(data.c_str()));
        // 7호기 2층호출
    }
    if(CheckBox8->Checked == true)
    {
            AnsiString data ="rcall.8.2.";
        char sd[1000];
        memset(sd,0x00,sizeof(sd));
        memcpy(sd, data.c_str(), strlen(data.c_str()));
        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(data.c_str()));
        //8호기 2층호출
    }
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
    if(NMUDP1->RemoteHost == "")
    {
        ShowMessage("클라이언트의 IP를 적어주세요");
    }
    else {
    if(CheckBox1->Checked == true)
    {
             AnsiString data ="rcall.1.1.";
        char sd[1000];
        memset(sd,0x00,sizeof(sd));
        memcpy(sd, data.c_str(), strlen(data.c_str()));
        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(data.c_str()));
        //1호기 1층호출
    }
    if(CheckBox2->Checked == true)
    {
                AnsiString data ="rcall.2.1.";
        char sd[1000];
        memset(sd,0x00,sizeof(sd));
        memcpy(sd, data.c_str(), strlen(data.c_str()));
        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(data.c_str()));
        //2호기 1층호출
    }
    if(CheckBox3->Checked == true)
    {
                AnsiString data ="rcall.3.1.";
        char sd[1000];
        memset(sd,0x00,sizeof(sd));
        memcpy(sd, data.c_str(), strlen(data.c_str()));
        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(data.c_str()));
        //3호기 1층호출
    }
    if(CheckBox4->Checked == true)
    {
                AnsiString data ="rcall.4.1.";
        char sd[1000];
        memset(sd,0x00,sizeof(sd));
        memcpy(sd, data.c_str(), strlen(data.c_str()));
        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(data.c_str()));
        //4호기 1층호출
    }
    if(CheckBox5->Checked == true)
    {
                AnsiString data ="rcall.5.1.";
        char sd[1000];
        memset(sd,0x00,sizeof(sd));
        memcpy(sd, data.c_str(), strlen(data.c_str()));
        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(data.c_str()));
        //5호기 1층호출
    }
    if(CheckBox6->Checked == true)
    {
                AnsiString data ="rcall.6.1.";
        char sd[1000];
        memset(sd,0x00,sizeof(sd));
        memcpy(sd, data.c_str(), strlen(data.c_str()));
        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(data.c_str()));
        //6호기 1층호출
    }
    if(CheckBox7->Checked == true)
    {
                AnsiString data ="rcall.7.1.";
        char sd[1000];
        memset(sd,0x00,sizeof(sd));
        memcpy(sd, data.c_str(), strlen(data.c_str()));
        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(data.c_str()));
        // 7호기 1층호출
    }
    if(CheckBox8->Checked == true)
    {
                AnsiString data ="rcall.8.1.";
        char sd[1000];
        memset(sd,0x00,sizeof(sd));
        memcpy(sd, data.c_str(), strlen(data.c_str()));
        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(data.c_str()));
        //8호기 1층호출
    }
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{
    if(NMUDP1->RemoteHost == "")
    {
        ShowMessage("클라이언트의 IP를 적어주세요");
    }
    else {
    if(CheckBox1->Checked == true)
    {
                AnsiString data ="rcall.1.B1.";
        char sd[1000];
        memset(sd,0x00,sizeof(sd));
        memcpy(sd, data.c_str(), strlen(data.c_str()));
        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(data.c_str()));
        //1호기 B1층호출
    }
    if(CheckBox2->Checked == true)
    {
                    AnsiString data ="rcall.2.B1.";
        char sd[1000];
        memset(sd,0x00,sizeof(sd));
        memcpy(sd, data.c_str(), strlen(data.c_str()));
        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(data.c_str()));
        //2호기 B1층호출
    }
    if(CheckBox3->Checked == true)
    {
                    AnsiString data ="rcall.3.B1.";
        char sd[1000];
        memset(sd,0x00,sizeof(sd));
        memcpy(sd, data.c_str(), strlen(data.c_str()));
        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(data.c_str()));
        //3호기 B1층호출
    }
    if(CheckBox4->Checked == true)
    {
        AnsiString data ="rcall.4.B1.";
        char sd[1000];
        memset(sd,0x00,sizeof(sd));
        memcpy(sd, data.c_str(), strlen(data.c_str()));
        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(data.c_str()));
        //4호기 B1층호출
    }
    if(CheckBox5->Checked == true)
    {
        AnsiString data ="rcall.5.B1.";
        char sd[1000];
        memset(sd,0x00,sizeof(sd));
        memcpy(sd, data.c_str(), strlen(data.c_str()));
        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(data.c_str()));
        //5호기 B1층호출
    }
    if(CheckBox6->Checked == true)
    {
        AnsiString data ="rcall.6.B1.";
        char sd[1000];
        memset(sd,0x00,sizeof(sd));
        memcpy(sd, data.c_str(), strlen(data.c_str()));
        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(data.c_str()));
        //6호기 B1층호출
    }
    if(CheckBox7->Checked == true)
    {
        AnsiString data ="rcall.7.B1.";
        char sd[1000];
        memset(sd,0x00,sizeof(sd));
        memcpy(sd, data.c_str(), strlen(data.c_str()));
        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(data.c_str()));
        // 7호기 B1층호출
    }
    if(CheckBox8->Checked == true)
    {
        AnsiString data ="rcall.8.B1.";
        char sd[1000];
        memset(sd,0x00,sizeof(sd));
        memcpy(sd, data.c_str(), strlen(data.c_str()));
        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(data.c_str()));
        //8호기 B1층호출
    }
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
    NMUDP1->RemoteHost = Edit1->Text;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
    NMUDP1->LocalPort = 7000;
    NMUDP1->RemotePort = 7000;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::NMUDP1InvalidHost(bool &handled)
{
    ShowMessage("호스트가 잘못 지정되었습니다");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::NMUDP1DataReceived(TComponent *Sender,
      int NumberBytes, AnsiString FromIP, int Port)
{
    char bf[100];
    int i = 0;
    memset(bf, 0x00, 100);
    NMUDP1->ReadBuffer(bf, NumberBytes, i);
    AnsiString data = bf;

    int pos1 = data.Pos(".");
    AnsiString data1 = data.SubString(1, pos1-1);
    data = data.Delete(1, pos1);

    int pos2 = data.Pos(".");
    AnsiString data2 = data.SubString(1, pos2-1);
    data = data.Delete(1, pos2);

    int pos3 = data.Pos(".");
    AnsiString data3 = data.SubString(1, pos3-1);
    data = data.Delete(1, pos3);

    if(data1 == "DB")
    {
        TDateTime MyDateTime;

        ADOQuery1->Close();
        ADOQuery1->SQL->Clear();
        ADOQuery1->SQL->Add("Insert into Table1");
        ADOQuery1->SQL->Add("(출발층,도착층,시각)");
        ADOQuery1->SQL->Add("VALUES");
        ADOQuery1->SQL->Add("('"+data2+"','"+data3+"','"+DateTimeToStr(MyDateTime.CurrentDateTime())+"')");
        ADOQuery1->ExecSQL();
        ADOQuery1->SQL->Clear();
        ADOQuery1->SQL->Add("select * from Table1");
        ADOQuery1->Open();
    }
}
//---------------------------------------------------------------------------


