//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;


AnsiString floor="1", uord, sfloor; //1
AnsiString floorr="1", uordd, sfloorr; //2
AnsiString floorrr="1", uorddd, sfloorrr; //3
AnsiString floorrrr="1", uordddd, sfloorrrr; //4
AnsiString floorrrrr="1", uorddddd, sfloorrrrr; //5
AnsiString floorrrrrr="1", uordddddd, sfloorrrrrr;  //6
AnsiString floorrrrrrr="1", uorddddddd, sfloorrrrrrr; //7
AnsiString floorrrrrrrr="1", uordddddddd, sfloorrrrrrrr; //8
int parking = 0, timer = 120, car = 8, carsec = 0;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button10Click(TObject *Sender)
{
    if(floor == "2" || floor == "1" || floor == "-1")
    {
        uord = "up";
        Timer1->Enabled=true;
        sfloor = "3";
    }
    if(floor == "3")
    {
        ShowMessage("엘리베이터가 해당 층에 있습니다");
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button9Click(TObject *Sender)
{
    if(floor == "3")
    {
        uord = "down";
        Timer1->Enabled=true;
        sfloor = "2";
    }

    else if(floor == "1" || floor == "-1")
    {
        uord = "up";
        Timer1->Enabled=true;
        sfloor = "2";
    }
    if(floor == "2")
    {
        ShowMessage("엘리베이터가 해당 층에 있습니다");
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button8Click(TObject *Sender)
{
    if(floor == "3" || floor == "2")
    {
        uord = "down";
        Timer1->Enabled=true;
        sfloor = "1";
    }
    else if(floor == "-1")
    {
        uord = "up";
        Timer1->Enabled=true;
        sfloor = "1";
    }

    if(floor == "1")
    {
        ShowMessage("엘리베이터가 해당 층에 있습니다");
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button11Click(TObject *Sender)
{
    if(floor == "3" || floor == "2" || floor == "1")
    {
        uord = "down";
        Timer1->Enabled=true;
        sfloor = "-1";
    }
        if(floor == "-1")
    {
        ShowMessage("엘리베이터가 해당 층에 있습니다");
    }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
    if(sfloor == "3")
    {
        if(uord == "up")
        {
            if(Panel1->Top == 78 || Panel1->Top < 78)
            {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }

                Timer1->Enabled=false;
                floor = "3";
            }
            Panel1->Top--;
        }
    }
    else if(sfloor == "2")
    {
        if(uord == "up")
        {
            if(Panel1->Top == 246 || Panel1->Top < 246)
            {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }

                Timer1->Enabled=false;
                floor = "2";
            }
            Panel1->Top--;
        }
        else if(uord == "down")
        {
            if(Panel1->Top == 246 || Panel1->Top > 246)
            {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }

                Timer1->Enabled=false;
                floor = "2";
            }
            Panel1->Top++;
        }
    }
    else if(sfloor == "1")
    {
        if(uord == "up")
        {
            if(Panel1->Top == 414 || Panel1->Top < 414)
            {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }

                Timer1->Enabled=false;
                floor = "1";
            }
            Panel1->Top--;
        }
        else if(uord == "down")
        {
            if(Panel1->Top == 414 || Panel1->Top > 414)
            {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }

                Timer1->Enabled=false;
                floor = "1";
            }
            Panel1->Top++;
        }
    }
    else if(sfloor == "-1")
    {
        if(Panel1->Top == 550 || Panel1->Top > 550)
        {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }

             Timer1->Enabled=false;
             floor = "-1";
        }
        Panel1->Top++;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button15Click(TObject *Sender)
{
    if(floorr == "2" || floorr == "1" || floorr == "-1")
    {
        uordd = "up";
        Timer2->Enabled=true;
        sfloorr = "3";
    }
    if(floorr == "3")
    {
        ShowMessage("엘리베이터가 해당 층에 있습니다");
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button14Click(TObject *Sender)
{
    if(floorr == "3")
    {
        uordd = "down";
        Timer2->Enabled=true;
        sfloorr = "2";
    }

    else if(floorr == "1" || floorr == "-1")
    {
        uordd = "up";
        Timer2->Enabled=true;
        sfloorr = "2";
    }
    if(floorr == "2")
    {
        ShowMessage("엘리베이터가 해당 층에 있습니다");
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button13Click(TObject *Sender)
{
    if(floorr == "3" || floorr == "2")
    {
        uordd = "down";
        Timer2->Enabled=true;
        sfloorr = "1";
    }
    else if(floorr == "-1")
    {
        uordd = "up";
        Timer2->Enabled=true;
        sfloorr = "1";
    }
    if(floorr == "1")
    {
        ShowMessage("엘리베이터가 해당 층에 있습니다");
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button16Click(TObject *Sender)
{
    if(floorr == "3" || floorr == "2" || floorr == "1")
    {
        uordd = "down";
        Timer2->Enabled=true;
        sfloorr = "-1";
    }
    if(floorr == "-1")
    {
        ShowMessage("엘리베이터가 해당 층에 있습니다");
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer2Timer(TObject *Sender)
{
     if(sfloorr == "3")
    {
        if(uordd == "up")
        {
            if(Panel2->Top == 78 || Panel2->Top < 78)
            {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }

                Timer2->Enabled=false;
                floorr = "3";
            }
            Panel2->Top--;
        }
    }
    else if(sfloorr == "2")
    {
        if(uordd == "up")
        {
            if(Panel2->Top == 246 || Panel2->Top < 246)
            {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }

                Timer2->Enabled=false;
                floorr = "2";
            }
            Panel2->Top--;
        }
        else if(uordd == "down")
        {
            if(Panel2->Top == 246 || Panel2->Top > 246)
            {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }

                Timer2->Enabled=false;
                floorr = "2";
            }
            Panel2->Top++;
        }
    }
    else if(sfloorr == "1")
    {
        if(uordd == "up")
        {
            if(Panel2->Top == 414 || Panel2->Top < 414)
            {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }

                Timer2->Enabled=false;
                floorr = "1";
            }
            Panel2->Top--;
        }
        else if(uordd == "down")
        {
            if(Panel2->Top == 414 || Panel2->Top > 414)
            {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }

                Timer2->Enabled=false;
                floorr = "1";
            }
            Panel2->Top++;
        }
    }
    else if(sfloorr == "-1")
    {
        if(Panel2->Top == 550 || Panel2->Top > 550)
        {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }

             Timer2->Enabled=false;
             floorr = "-1";
        }
        Panel2->Top++;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button32Click(TObject *Sender)
{
        if(floorrr == "2" || floorrr == "1" || floorrr == "-1")
    {
        uorddd = "up";
        Timer3->Enabled=true;
        sfloorrr = "3";
    }
        if(floorrr == "3")
    {
        ShowMessage("엘리베이터가 해당 층에 있습니다");
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button31Click(TObject *Sender)
{
        if(floorrr == "3")
    {
        uorddd = "down";
        Timer3->Enabled=true;
        sfloorrr = "2";
    }

    else if(floorrr == "1" || floorrr == "-1")
    {
        uorddd = "up";
        Timer3->Enabled=true;
        sfloorrr = "2";
    }
        if(floorrr == "2")
    {
        ShowMessage("엘리베이터가 해당 층에 있습니다");
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button30Click(TObject *Sender)
{
        if(floorrr == "3" || floorrr == "2")
    {
        uorddd = "down";
        Timer3->Enabled=true;
        sfloorrr = "1";
    }
    else if(floorrr == "-1")
    {
        uorddd = "up";
        Timer3->Enabled=true;
        sfloorrr = "1";
    }
        if(floorrr == "1")
    {
        ShowMessage("엘리베이터가 해당 층에 있습니다");
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button33Click(TObject *Sender)
{
    if(floorrr == "3" || floorrr == "2" || floorrr == "1")
    {
        uorddd = "down";
        Timer3->Enabled=true;
        sfloorrr = "-1";
    }
        if(floorrr == "-1")
    {
        ShowMessage("엘리베이터가 해당 층에 있습니다");
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer3Timer(TObject *Sender)
{
         if(sfloorrr == "3")
    {
        if(uorddd == "up")
        {
            if(Panel3->Top == 78 || Panel3->Top < 78)
            {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }

                Timer3->Enabled=false;
                floorrr = "3";
            }
            Panel3->Top--;
        }
    }
    else if(sfloorrr == "2")
    {
        if(uorddd == "up")
        {
            if(Panel3->Top == 246 || Panel3->Top < 246)
            {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }


                Timer3->Enabled=false;
                floorrr = "2";
            }
            Panel3->Top--;
        }
        else if(uorddd == "down")
        {
            if(Panel3->Top == 246 || Panel3->Top > 246)
            {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }


                Timer3->Enabled=false;
                floorrr = "2";
            }
            Panel3->Top++;
        }
    }
    else if(sfloorrr == "1")
    {
        if(uorddd == "up")
        {
            if(Panel3->Top == 414 || Panel3->Top < 414)
            {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }


                Timer3->Enabled=false;
                floorrr = "1";
            }
            Panel3->Top--;
        }
        else if(uorddd == "down")
        {
            if(Panel3->Top == 414 || Panel3->Top > 414)
            {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }


                Timer3->Enabled=false;
                floorrr = "1";
            }
            Panel3->Top++;
        }
    }
    else if(sfloorrr == "-1")
    {
        if(Panel3->Top == 550 || Panel3->Top > 550)
        {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }


             Timer3->Enabled=false;
             floorrr = "-1";
        }
        Panel3->Top++;
    }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Timer9Timer(TObject *Sender)
{
    if(Timer1->Enabled==true)
    {
        Button10->Enabled=false;
        Button9->Enabled=false;
        Button8->Enabled=false;
        Button11->Enabled=false;
    }
    if(Timer2->Enabled==true)
    {
        Button15->Enabled=false;
        Button14->Enabled=false;
        Button13->Enabled=false;
        Button16->Enabled=false;
    }
    if(Timer3->Enabled==true)
    {
        Button32->Enabled=false;
        Button31->Enabled=false;
        Button30->Enabled=false;
        Button33->Enabled=false;
    }
    if(Timer4->Enabled==true)
    {
        Button43->Enabled=false;
        Button42->Enabled=false;
        Button41->Enabled=false;
        Button44->Enabled=false;
    }
    if(Timer5->Enabled==true)
    {
        Button48->Enabled=false;
        Button47->Enabled=false;
        Button46->Enabled=false;
        Button49->Enabled=false;
    }
    if(Timer6->Enabled==true)
    {
        Button53->Enabled=false;
        Button52->Enabled=false;
        Button51->Enabled=false;
        Button54->Enabled=false;
    }
    if(Timer7->Enabled==true)
    {
        Button58->Enabled=false;
        Button57->Enabled=false;
        Button56->Enabled=false;
        Button59->Enabled=false;
    }
    if(Timer8->Enabled==true)
    {
        Button63->Enabled=false;
        Button62->Enabled=false;
        Button61->Enabled=false;
        Button64->Enabled=false;
    }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button43Click(TObject *Sender)
{
     if(floorrrr == "2" || floorrrr == "1" || floorrrr == "-1")
    {
        uordddd = "up";
        Timer4->Enabled=true;
        sfloorrrr = "3";
    }
    if(floorrrr == "3")
    {
        ShowMessage("엘리베이터가 해당 층에 있습니다");
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button42Click(TObject *Sender)
{
        if(floorrrr == "3")
    {
        uordddd = "down";
        Timer4->Enabled=true;
        sfloorrrr = "2";
    }

    else if(floorrrr == "1" || floorrrr == "-1")
    {
        uordddd = "up";
        Timer4->Enabled=true;
        sfloorrrr = "2";
    }
        if(floorrrr == "2")
    {
        ShowMessage("엘리베이터가 해당 층에 있습니다");
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button41Click(TObject *Sender)
{
     if(floorrrr == "3" || floorrrr == "2")
    {
        uordddd = "down";
        Timer4->Enabled=true;
        sfloorrrr = "1";
    }
    else if(floorrrr == "-1")
    {
        uordddd = "up";
        Timer4->Enabled=true;
        sfloorrrr = "1";
    }
        if(floorrrr == "1")
    {
        ShowMessage("엘리베이터가 해당 층에 있습니다");
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button44Click(TObject *Sender)
{
    if(floorrrr == "3" || floorrrr == "2" || floorrrr == "1")
    {
        uordddd = "down";
        Timer4->Enabled=true;
        sfloorrrr = "-1";
    }
        if(floorrrr == "-1")
    {
        ShowMessage("엘리베이터가 해당 층에 있습니다");
    }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Timer4Timer(TObject *Sender)
{
         if(sfloorrrr == "3")
    {
        if(uordddd == "up")
        {
            if(Panel4->Top == 78 || Panel4->Top < 78)
            {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }


                Timer4->Enabled=false;
                floorrrr = "3";
            }
            Panel4->Top--;
        }
    }
    else if(sfloorrrr == "2")
    {
        if(uordddd == "up")
        {
            if(Panel4->Top == 246 || Panel4->Top < 246)
            {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }

                Timer4->Enabled=false;
                floorrrr = "2";
            }
            Panel4->Top--;
        }
        else if(uordddd == "down")
        {
            if(Panel4->Top == 246 || Panel4->Top > 246)
            {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }

                Timer4->Enabled=false;
                floorrrr = "2";
            }
            Panel4->Top++;
        }
    }
    else if(sfloorrrr == "1")
    {
        if(uordddd == "up")
        {
            if(Panel4->Top == 414 || Panel4->Top < 414)
            {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }


                Timer4->Enabled=false;
                floorrrr = "1";
            }
            Panel4->Top--;
        }
        else if(uordddd == "down")
        {
            if(Panel4->Top == 414 || Panel4->Top > 414)
            {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }

                Timer4->Enabled=false;
                floorrrr = "1";
            }
            Panel4->Top++;
        }
    }
    else if(sfloorrrr == "-1")
    {
        if(Panel4->Top == 550 || Panel4->Top > 550)
        {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }


             Timer4->Enabled=false;
             floorrrr = "-1";
        }
        Panel4->Top++;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button48Click(TObject *Sender)
{
     if(floorrrrr == "2" || floorrrrr == "1" || floorrrrr == "-1")
    {
        uorddddd = "up";
        Timer5->Enabled=true;
        sfloorrrrr = "3";
    }
        if(floorrrrr == "3")
    {
        ShowMessage("엘리베이터가 해당 층에 있습니다");
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button47Click(TObject *Sender)
{
    if(floorrrrr == "3")
    {
        uorddddd = "down";
        Timer5->Enabled=true;
        sfloorrrrr = "2";
    }

    else if(floorrrrr == "1" || floorrrrr == "-1")
    {
        uorddddd = "up";
        Timer5->Enabled=true;
        sfloorrrrr = "2";
    }
        if(floorrrrr == "2")
    {
        ShowMessage("엘리베이터가 해당 층에 있습니다");
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button46Click(TObject *Sender)
{
    if(floorrrrr == "3" || floorrrrr == "2")
    {
        uorddddd = "down";
        Timer5->Enabled=true;
        sfloorrrrr = "1";
    }
    else if(floorrrrr == "-1")
    {
        uorddddd = "up";
        Timer5->Enabled=true;
        sfloorrrrr = "1";
    }
        if(floorrrrr == "1")
    {
        ShowMessage("엘리베이터가 해당 층에 있습니다");
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button49Click(TObject *Sender)
{
    if(floorrrrr == "3" || floorrrrr == "2" || floorrrrr == "1")
    {
        uorddddd = "down";
        Timer5->Enabled=true;
        sfloorrrrr = "-1";
    }
    if(floorrrrr == "-1")
    {
        ShowMessage("엘리베이터가 해당 층에 있습니다");
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer5Timer(TObject *Sender)
{
    if(sfloorrrrr == "3")
    {
        if(uorddddd == "up")
        {
            if(Panel5->Top == 78 || Panel5->Top < 78)
            {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }

                Timer5->Enabled=false;
                floorrrrr = "3";
            }
            Panel5->Top--;
        }
    }
    else if(sfloorrrrr == "2")
    {
        if(uorddddd == "up")
        {
            if(Panel5->Top == 246 || Panel5->Top < 246)
            {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }


                Timer5->Enabled=false;
                floorrrrr = "2";
            }
            Panel5->Top--;
        }
        else if(uorddddd == "down")
        {
            if(Panel5->Top == 246 || Panel5->Top > 246)
            {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }

                Timer5->Enabled=false;
                floorrrrr = "2";
            }
            Panel5->Top++;
        }
    }
    else if(sfloorrrrr == "1")
    {
        if(uorddddd == "up")
        {
            if(Panel5->Top == 414 || Panel5->Top < 414)
            {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }

                Timer5->Enabled=false;
                floorrrrr = "1";
            }
            Panel5->Top--;
        }
        else if(uorddddd == "down")
        {
            if(Panel5->Top == 414 || Panel5->Top > 414)
            {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }

                Timer5->Enabled=false;
                floorrrrr = "1";
            }
            Panel5->Top++;
        }
    }
    else if(sfloorrrrr == "-1")
    {
        if(Panel5->Top == 550 || Panel5->Top > 550)
        {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }

             Timer5->Enabled=false;
             floorrrrr = "-1";
        }
        Panel5->Top++;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer10Timer(TObject *Sender)
{
    if(Timer1->Enabled==false)
    {
        Button10->Enabled=true;
        Button9->Enabled=true;
        Button8->Enabled=true;
        Button11->Enabled=true;
    }
    if(Timer2->Enabled==false)
    {
        Button15->Enabled=true;
        Button14->Enabled=true;
        Button13->Enabled=true;
        Button16->Enabled=true;
    }
    if(Timer3->Enabled==false)
    {
        Button32->Enabled=true;
        Button31->Enabled=true;
        Button30->Enabled=true;
        Button33->Enabled=true;
    }
    if(Timer4->Enabled==false)
    {
        Button43->Enabled=true;
        Button42->Enabled=true;
        Button41->Enabled=true;
        Button44->Enabled=true;
    }
    if(Timer5->Enabled==false)
    {
        Button48->Enabled=true;
        Button47->Enabled=true;
        Button46->Enabled=true;
        Button49->Enabled=true;
    }
    if(Timer6->Enabled==false)
    {
        Button53->Enabled=true;
        Button52->Enabled=true;
        Button51->Enabled=true;
        Button54->Enabled=true;
    }
    if(Timer7->Enabled==false)
    {
        Button58->Enabled=true;
        Button57->Enabled=true;
        Button56->Enabled=true;
        Button59->Enabled=true;
    }
    if(Timer8->Enabled==false)
    {
        Button63->Enabled=true;
        Button62->Enabled=true;
        Button61->Enabled=true;
        Button64->Enabled=true;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button53Click(TObject *Sender)
{
    if(floorrrrrr == "2" || floorrrrrr == "1" || floorrrrrr == "-1")
    {
        uordddddd = "up";
        sfloorrrrrr = "3";
        Timer6->Enabled=true;
    }
        if(floorrrrrr == "3")
    {
        ShowMessage("엘리베이터가 해당 층에 있습니다");
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button52Click(TObject *Sender)
{
    if(floorrrrrr == "3")
    {
        uordddddd = "down";
        Timer6->Enabled=true;
        sfloorrrrrr = "2";
    }

    else if(floorrrrrr == "1" || floorrrrrr == "-1")
    {
        uordddddd = "up";
        Timer6->Enabled=true;
        sfloorrrrrr = "2";
    }
            if(floorrrrrr == "2")
    {
        ShowMessage("엘리베이터가 해당 층에 있습니다");
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button51Click(TObject *Sender)
{
    if(floorrrrrr == "3" || floorrrrrr == "2")
    {
        uordddddd = "down";
        Timer6->Enabled=true;
        sfloorrrrrr = "1";
    }
    else if(floorrrrrr == "-1")
    {
        uordddddd = "up";
        Timer6->Enabled=true;
        sfloorrrrrr = "1";
    }
            if(floorrrrrr == "1")
    {
        ShowMessage("엘리베이터가 해당 층에 있습니다");
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button54Click(TObject *Sender)
{
    if(floorrrrrr == "3" || floorrrrrr == "2" || floorrrrrr == "1")
    {
        uordddddd = "down";
        Timer6->Enabled=true;
        sfloorrrrrr = "-1";
    }
            if(floorrrrrr == "-1")
    {
        ShowMessage("엘리베이터가 해당 층에 있습니다");
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer6Timer(TObject *Sender)
{
    if(sfloorrrrrr == "3")
    {
        if(uordddddd == "up")
        {
            if(Panel6->Top == 78 || Panel6->Top < 78)
            {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }

                Timer6->Enabled=false;
                floorrrrrr = "3";
            }
            Panel6->Top--;
        }
    }
    else if(sfloorrrrrr == "2")
    {
        if(uordddddd == "up")
        {
            if(Panel6->Top == 246 || Panel6->Top < 246)
            {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }

                Timer6->Enabled=false;
                floorrrrrr = "2";
            }
            Panel6->Top--;
        }
        else if(uordddddd == "down")
        {
            if(Panel6->Top == 246 || Panel6->Top > 246)
            {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }

                Timer6->Enabled=false;
                floorrrrrr = "2";
            }
            Panel6->Top++;
        }
    }
    else if(sfloorrrrrr == "1")
    {
        if(uordddddd == "up")
        {
            if(Panel6->Top == 414 || Panel6->Top < 414)
            {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }

                Timer6->Enabled=false;
                floorrrrrr = "1";
            }
            Panel6->Top--;
        }
        else if(uordddddd == "down")
        {
            if(Panel6->Top == 414 || Panel6->Top > 414)
            {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }

                Timer6->Enabled=false;
                floorrrrrr = "1";
            }
            Panel6->Top++;
        }
    }
    else if(sfloorrrrrr == "-1")
    {
        if(Panel6->Top == 550 || Panel6->Top > 550)
        {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }


             Timer6->Enabled=false;
             floorrrrrr = "-1";
        }
        Panel6->Top++;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button58Click(TObject *Sender)
{
    if(floorrrrrrr == "2" || floorrrrrrr == "1" || floorrrrrrr == "-1")
    {
        uorddddddd = "up";
        sfloorrrrrrr = "3";
        Timer7->Enabled=true;
    }
            if(floorrrrrrr == "3")
    {
        ShowMessage("엘리베이터가 해당 층에 있습니다");
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button57Click(TObject *Sender)
{
    if(floorrrrrrr == "3")
    {
        uorddddddd = "down";
        Timer7->Enabled=true;
        sfloorrrrrrr = "2";
    }

    else if(floorrrrrrr == "1" || floorrrrrrr == "-1")
    {
        uorddddddd = "up";
        Timer7->Enabled=true;
        sfloorrrrrrr = "2";
    }
            if(floorrrrrrr == "2")
    {
        ShowMessage("엘리베이터가 해당 층에 있습니다");
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button56Click(TObject *Sender)
{
    if(floorrrrrrr == "3" || floorrrrrrr == "2")
    {
        uorddddddd = "down";
        Timer7->Enabled=true;
        sfloorrrrrrr = "1";
    }
    else if(floorrrrrrr == "-1")
    {
        uorddddddd = "up";
        Timer7->Enabled=true;
        sfloorrrrrrr = "1";
    }
            if(floorrrrrrr == "1")
    {
        ShowMessage("엘리베이터가 해당 층에 있습니다");
    }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button59Click(TObject *Sender)
{
    if(floorrrrrrr == "3" || floorrrrrrr == "2" || floorrrrrrr == "1")
    {
        uorddddddd = "down";
        Timer7->Enabled=true;
        sfloorrrrrrr = "-1";
    }
            if(floorrrrrrr == "-1")
    {
        ShowMessage("엘리베이터가 해당 층에 있습니다");
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer7Timer(TObject *Sender)
{
    if(sfloorrrrrrr == "3")
    {
        if(uorddddddd == "up")
        {
            if(Panel7->Top == 78 || Panel7->Top < 78)
            {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }

                Timer7->Enabled=false;
                floorrrrrrr = "3";
            }
            Panel7->Top--;
        }
    }
    else if(sfloorrrrrrr == "2")
    {
        if(uorddddddd == "up")
        {
            if(Panel7->Top == 246 || Panel7->Top < 246)
            {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }

                Timer7->Enabled=false;
                floorrrrrrr = "2";
            }
            Panel7->Top--;
        }
        else if(uorddddddd == "down")
        {
            if(Panel7->Top == 246 || Panel7->Top > 246)
            {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }

                Timer7->Enabled=false;
                floorrrrrrr = "2";
            }
            Panel7->Top++;
        }
    }
    else if(sfloorrrrrrr == "1")
    {
        if(uorddddddd == "up")
        {
            if(Panel7->Top == 414 || Panel7->Top < 414)
            {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }

                Timer7->Enabled=false;
                floorrrrrrr = "1";
            }
            Panel7->Top--;
        }
        else if(uorddddddd == "down")
        {
            if(Panel7->Top == 414 || Panel7->Top > 414)
            {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }

                Timer7->Enabled=false;
                floorrrrrrr = "1";
            }
            Panel7->Top++;
        }
    }
    else if(sfloorrrrrrr == "-1")
    {
        if(Panel7->Top == 550 || Panel7->Top > 550)
        {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }

             Timer7->Enabled=false;
             floorrrrrrr = "-1";
        }
        Panel7->Top++;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button63Click(TObject *Sender)
{
    if(floorrrrrrrr == "2" || floorrrrrrrr == "1" || floorrrrrrrr == "-1")
    {
        uordddddddd = "up";
        sfloorrrrrrrr = "3";
        Timer8->Enabled=true;
    }
    if(floorrrrrrrr == "3")
    {
        ShowMessage("엘리베이터가 해당 층에 있습니다");
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button62Click(TObject *Sender)
{
    if(floorrrrrrrr == "3")
    {
        uordddddddd = "down";
        Timer8->Enabled=true;
        sfloorrrrrrrr = "2";
    }

    else if(floorrrrrrrr == "1" || floorrrrrrrr == "-1")
    {
        uordddddddd = "up";
        Timer8->Enabled=true;
        sfloorrrrrrrr = "2";
    }
        if(floorrrrrrrr == "2")
    {
        ShowMessage("엘리베이터가 해당 층에 있습니다");
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button61Click(TObject *Sender)
{
        if(floorrrrrrrr == "3" || floorrrrrrrr == "2")
    {
        uordddddddd = "down";
        Timer8->Enabled=true;
        sfloorrrrrrrr = "1";
    }
    else if(floorrrrrrrr == "-1")
    {
        uordddddddd = "up";
        Timer8->Enabled=true;
        sfloorrrrrrrr = "1";
    }
        if(floorrrrrrrr == "1")
    {
        ShowMessage("엘리베이터가 해당 층에 있습니다");
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button64Click(TObject *Sender)
{
    if(floorrrrrrrr == "3" || floorrrrrrrr == "2" || floorrrrrrrr == "1")
    {
        uordddddddd = "down";
        Timer8->Enabled=true;
        sfloorrrrrrrr = "-1";
    }
        if(floorrrrrrrr == "-1")
    {
        ShowMessage("엘리베이터가 해당 층에 있습니다");
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer8Timer(TObject *Sender)
{
    if(sfloorrrrrrrr == "3")
    {
        if(uordddddddd == "up")
        {
            if(Panel8->Top == 78 || Panel8->Top < 78)
            {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }

                Timer8->Enabled=false;
                floorrrrrrrr = "3";
            }
            Panel8->Top--;
        }
    }
    else if(sfloorrrrrrrr == "2")
    {
        if(uordddddddd == "up")
        {
            if(Panel8->Top == 246 || Panel8->Top < 246)
            {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }

                Timer8->Enabled=false;
                floorrrrrrrr = "2";
            }
            Panel8->Top--;
        }
        else if(uordddddddd == "down")
        {
            if(Panel8->Top == 246 || Panel8->Top > 246)
            {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }

                Timer8->Enabled=false;
                floorrrrrrrr = "2";
            }
            Panel8->Top++;
        }
    }
    else if(sfloorrrrrrrr == "1")
    {
        if(uordddddddd == "up")
        {
            if(Panel8->Top == 414 || Panel8->Top < 414)
            {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }

                Timer8->Enabled=false;
                floorrrrrrrr = "1";
            }
            Panel8->Top--;
        }
        else if(uordddddddd == "down")
        {
            if(Panel8->Top == 414 || Panel8->Top > 414)
            {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }

                Timer8->Enabled=false;
                floorrrrrrrr = "1";
            }
            Panel8->Top++;
        }
    }
    else if(sfloorrrrrrrr == "-1")
    {
        if(Panel8->Top == 550 || Panel8->Top > 550)
        {
                if(NMUDP1->RemoteHost == "")
                {

                }
                else
                {
                        AnsiString data = "DB."+String(floor)+"."+String(sfloor)+".";
                        char sd[1000];
                        memset(sd, 0x00, sizeof(sd));
                        memcpy(sd, data.c_str(),strlen(data.c_str()));
                        NMUDP1->SendBuffer(sd, sizeof(sd), strlen(Edit1->Text.c_str()));
                }

             Timer8->Enabled=false;
             floorrrrrrrr = "-1";
        }
        Panel8->Top++;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
    NMUDP1->LocalPort = 7000;
    NMUDP1->RemotePort = 7000;
    // 받는 NMUDP 지정.
}
//---------------------------------------------------------------------------

void __fastcall TForm1::NMUDP1DataReceived(TComponent *Sender,
      int NumberBytes, AnsiString FromIP, int Port)
{
    char bf[1000];
    int i = 0;
    memset(bf, 0x00, 1000);
    NMUDP1->ReadBuffer(bf, NumberBytes, i);
    AnsiString data = bf;
    // 첫번째 문자열
    int pos1 = data.Pos(".");
    AnsiString data1 = data.SubString(1, pos1-1);
    data = data.Delete(1, pos1);
    // 두번쨰 문자열
    int pos2 = data.Pos(".");
    AnsiString data2 = data.SubString(1, pos2-1);
    data = data.Delete(1, pos2);
    //세번째 문자열
    int pos3 = data.Pos(".");
    AnsiString data3 = data.SubString(1, pos3-1);
    data = data.Delete(1, pos3);

    if(data1 == "rcall") // Remote Call
    {
        if(data2 == "1") // Elevator No.
        {
            if(data3 == "3") //Floor
            {
                if(floor == "2" || floor == "1" || floor == "-1")
                {
                        uord = "up";
                        Timer1->Enabled=true;
                        sfloor = "3";
                }
                if(floor == "3")
                {
                        ShowMessage("엘리베이터가 해당 층에 있습니다");
                }
            }
            if(data3 == "2") //Floor
            {
                if(floor == "3")
                {
                        uord = "down";
                        Timer1->Enabled=true;
                        sfloor = "2";
                }

                else if(floor == "1" || floor == "-1")
                {
                        uord = "up";
                        Timer1->Enabled=true;
                        sfloor = "2";
                }
                if(floor == "2")
                {
                        ShowMessage("엘리베이터가 해당 층에 있습니다");
                }
           }
           if(data3 == "1") // floor
           {
                   if(floor == "3" || floor == "2")
                   {
                        uord = "down";
                        Timer1->Enabled=true;
                        sfloor = "1";
                   }
                else if(floor == "-1")
                {
                        uord = "up";
                        Timer1->Enabled=true;
                        sfloor = "1";
                }

                if(floor == "1")
                {
                         ShowMessage("엘리베이터가 해당 층에 있습니다");
                }
           }
           if(data3 == "B1")  // floor
           {
                if(floor == "3" || floor == "2" || floor == "1")
                {
                        uord = "down";
                        Timer1->Enabled=true;
                        sfloor = "-1";
                }
                if(floor == "-1")
                {
                        ShowMessage("엘리베이터가 해당 층에 있습니다");
                }
           }
        }
        if(data2 == "2") // Elevator No.
        {
            if(data3 == "3")  // Floor
            {
                     if(floorr == "2" || floorr == "1" || floorr == "-1")
                     {
                        uordd = "up";
                        Timer2->Enabled=true;
                        sfloorr = "3";
                     }
                     if(floorr == "3")
                     {
                        ShowMessage("엘리베이터가 해당 층에 있습니다");
                     }
            }
            if(data3 == "2") // floor
            {
                     if(floorr == "3")
                     {
                                uordd = "down";
                                Timer2->Enabled=true;
                                sfloorr = "2";
                     }

                     else if(floorr == "1" || floorr == "-1")
                     {
                        uordd = "up";
                        Timer2->Enabled=true;
                        sfloorr = "2";
                     }
                     if(floorr == "2")
                     {
                        ShowMessage("엘리베이터가 해당 층에 있습니다");
                     }
            }
            if(data3 == "1") //Floor
            {
                if(floorr == "3" || floorr == "2")
                {
                        uordd = "down";
                        Timer2->Enabled=true;
                        sfloorr = "1";
                }
                else if(floorr == "-1")
                {
                        uordd = "up";
                        Timer2->Enabled=true;
                        sfloorr = "1";
                }
                if(floorr == "1")
                {
                        ShowMessage("엘리베이터가 해당 층에 있습니다");
                }
            }
            if(data3 == "B1") //Floor
            {
                     if(floorr == "3" || floorr == "2" || floorr == "1")
                     {
                        uordd = "down";
                        Timer2->Enabled=true;
                        sfloorr = "-1";
                     }
                     if(floorr == "-1")
                     {
                         ShowMessage("엘리베이터가 해당 층에 있습니다");
                     }
            }
        }
        if(data2 == "3") // elevator .No
        {
             if(data3 == "3") // floor
             {
                 if(floorrr == "2" || floorrr == "1" || floorrr == "-1")
                 {
                     uorddd = "up";
                     Timer3->Enabled=true;
                     sfloorrr = "3";
                 }
                if(floorrr == "3")
                {
                        ShowMessage("엘리베이터가 해당 층에 있습니다");
                }
             }
             if(data3 == "2") // floor
             {
                 if(floorrr == "3")
                 {
                        uorddd = "down";
                        Timer3->Enabled=true;
                        sfloorrr = "2";
                 }

                 else if(floorrr == "1" || floorrr == "-1")
                 {
                        uorddd = "up";
                        Timer3->Enabled=true;
                        sfloorrr = "2";
                 }
                if(floorrr == "2")
                {
                        ShowMessage("엘리베이터가 해당 층에 있습니다");
                }
             }
             if(data3 == "1")
             {
                 if(floorrr == "3" || floorrr == "2")
                 {
                        uorddd = "down";
                        Timer3->Enabled=true;
                        sfloorrr = "1";
                 }
                 else if(floorrr == "-1")
                {
                        uorddd = "up";
                        Timer3->Enabled=true;
                        sfloorrr = "1";
                }
                if(floorrr == "1")
                {
                        ShowMessage("엘리베이터가 해당 층에 있습니다");
                }
             }
             if(data3 == "B1")
             {
                      if(floorrr == "3" || floorrr == "2" || floorrr == "1")
                      {
                          uorddd = "down";
                          Timer3->Enabled=true;
                          sfloorrr = "-1";
                      }
                      if(floorrr == "-1")
                      {
                          ShowMessage("엘리베이터가 해당 층에 있습니다");
                      }
             }
        }
             if(data2 == "4")
             {
                   if(data3 == "3") //floor
                   {
                       if(floorrrr == "2" || floorrrr == "1" || floorrrr == "-1")
                       {
                                uordddd = "up";
                                Timer4->Enabled=true;
                                sfloorrrr = "3";
                        }
                        if(floorrrr == "3")
                        {
                                ShowMessage("엘리베이터가 해당 층에 있습니다");
                        }
                   }
                   if(data3 == "2") //floor
                   {
                               if(floorrrr == "3")
                                {
                                        uordddd = "down";
                                        Timer4->Enabled=true;
                                        sfloorrrr = "2";
                                }

                                else if(floorrrr == "1" || floorrrr == "-1")
                                {
                                        uordddd = "up";
                                        Timer4->Enabled=true;
                                        sfloorrrr = "2";
                                }
                                if(floorrrr == "2")
                                {
                                        ShowMessage("엘리베이터가 해당 층에 있습니다");

                                }
                   }
                   if(data3 == "1")
                   {
                       if(floorrrr == "3" || floorrrr == "2")
                        {
                                uordddd = "down";
                                Timer4->Enabled=true;
                                sfloorrrr = "1";
                        }
                        else if(floorrrr == "-1")
                        {
                                uordddd = "up";
                                Timer4->Enabled=true;
                                sfloorrrr = "1";
                        }
                        if(floorrrr == "1")
                        {
                                ShowMessage("엘리베이터가 해당 층에 있습니다");
                        }
                   }
                   if(data3 == "B1")
                   {
                           if(floorrrr == "3" || floorrrr == "2" || floorrrr == "1")
                           {
                                uordddd = "down";
                                Timer4->Enabled=true;
                                sfloorrrr = "-1";
                           }
                           if(floorrrr == "-1")
                           {
                                ShowMessage("엘리베이터가 해당 층에 있습니다");
                           }
                   }
             }
             if(data2 == "5")
             {
                 if(data3 == "3")
                 {
                         if(floorrrrr == "2" || floorrrrr == "1" || floorrrrr == "-1")
                        {
                                uorddddd = "up";
                                Timer5->Enabled=true;
                                sfloorrrrr = "3";
                        }
                        if(floorrrrr == "3")
                        {
                                ShowMessage("엘리베이터가 해당 층에 있습니다");
                        }
                 }
                 if(data3 == "2")
                 {
                          if(floorrrrr == "3")
                          {
                                uorddddd = "down";
                                Timer5->Enabled=true;
                                sfloorrrrr = "2";
                          }

                          else if(floorrrrr == "1" || floorrrrr == "-1")
                        {
                                uorddddd = "up";
                                Timer5->Enabled=true;
                                sfloorrrrr = "2";
                        }
                        if(floorrrrr == "2")
                        {
                                ShowMessage("엘리베이터가 해당 층에 있습니다");
                        }
                        
                }
                if(data3 == "1")
                {
                    if(floorrrrr == "3" || floorrrrr == "2")
                    {
                        uorddddd = "down";
                        Timer5->Enabled=true;
                        sfloorrrrr = "1";
                    }
                    else if(floorrrrr == "-1")
                    {
                        uorddddd = "up";
                        Timer5->Enabled=true;
                        sfloorrrrr = "1";
                    }
                    if(floorrrrr == "1")
                    {
                        ShowMessage("엘리베이터가 해당 층에 있습니다");
                    }
                }
                if(data3 == "B1")
                {
                        if(floorrrrr == "3" || floorrrrr == "2" || floorrrrr == "1")
                        {
                                uorddddd = "down";
                                Timer5->Enabled=true;
                                sfloorrrrr = "-1";
                        }
                        if(floorrrrr == "-1")
                        {
                                ShowMessage("엘리베이터가 해당 층에 있습니다");
                        }
                }
             }
            if(data2 == "6")
            {
                if(data3 == "3")
                {
                        if(floorrrrrr == "2" || floorrrrrr == "1" || floorrrrrr == "-1")
                        {
                                uordddddd = "up";
                                sfloorrrrrr = "3";
                                Timer6->Enabled=true;
                        }
                        if(floorrrrrr == "3")
                        {
                                ShowMessage("엘리베이터가 해당 층에 있습니다");
                        }
                }
                if(data3 == "2")
                {
                        if(floorrrrrr == "3")
                        {
                                uordddddd = "down";
                                Timer6->Enabled=true;
                                sfloorrrrrr = "2";
                        }

                        else if(floorrrrrr == "1" || floorrrrrr == "-1")
                        {
                                uordddddd = "up";
                                Timer6->Enabled=true;
                                sfloorrrrrr = "2";
                        }
                        if(floorrrrrr == "2")
                        {
                                ShowMessage("엘리베이터가 해당 층에 있습니다");
                        }
                }
                if(data3 == "1")
                {
                         if(floorrrrrr == "3" || floorrrrrr == "2")
                        {
                                uordddddd = "down";
                                Timer6->Enabled=true;
                                sfloorrrrrr = "1";
                        }
                        else if(floorrrrrr == "-1")
                        {
                                uordddddd = "up";
                                Timer6->Enabled=true;
                                sfloorrrrrr = "1";
                        }
                        if(floorrrrrr == "1")
                        {
                                ShowMessage("엘리베이터가 해당 층에 있습니다");
                        }
                }
                if(data3 == "B1")
                {
                        if(floorrrrrr == "3" || floorrrrrr == "2" || floorrrrrr == "1")
                        {
                                uordddddd = "down";
                                Timer6->Enabled=true;
                                sfloorrrrrr = "-1";
                        }
                        if(floorrrrrr == "-1")
                        {
                                ShowMessage("엘리베이터가 해당 층에 있습니다");
                        }
                }

            }
            if(data2 == "7")
            {
                if(data3 == "3")
                {
                        if(floorrrrrrr == "2" || floorrrrrrr == "1" || floorrrrrrr == "-1")
                        {
                                uorddddddd = "up";
                                sfloorrrrrrr = "3";
                                Timer7->Enabled=true;
                        }
                        if(floorrrrrrr == "3")
                        {
                                ShowMessage("엘리베이터가 해당 층에 있습니다");
                        }
                }
                if(data3 == "2")
                {
                          if(floorrrrrrr == "3")
                          {
                                uorddddddd = "down";
                                Timer7->Enabled=true;
                                sfloorrrrrrr = "2";
                          }

                          else if(floorrrrrrr == "1" || floorrrrrrr == "-1")
                        {
                                uorddddddd = "up";
                                Timer7->Enabled=true;
                                sfloorrrrrrr = "2";
                        }
                        if(floorrrrrrr == "2")
                        {
                                ShowMessage("엘리베이터가 해당 층에 있습니다");
                        }
                }
                if(data3 == "1")
                {
                        if(floorrrrrrr == "3" || floorrrrrrr == "2")
                        {
                                uorddddddd = "down";
                                Timer7->Enabled=true;
                                sfloorrrrrrr = "1";
                        }
                        else if(floorrrrrrr == "-1")
                        {
                                uorddddddd = "up";
                                Timer7->Enabled=true;
                                sfloorrrrrrr = "1";
                        }
                        if(floorrrrrrr == "1")
                        {
                                ShowMessage("엘리베이터가 해당 층에 있습니다");
                        }
                }
                if(data3 == "B1")
                {
                         if(floorrrrrrr == "3" || floorrrrrrr == "2" || floorrrrrrr == "1")
                         {
                                uorddddddd = "down";
                                Timer7->Enabled=true;
                                sfloorrrrrrr = "-1";
                         }
                        if(floorrrrrrr == "-1")
                        {
                                ShowMessage("엘리베이터가 해당 층에 있습니다");
                        }
                }
            }
        }
            if(data2 == "8")
            {
                if(data3 == "3")
                {
                         if(floorrrrrrrr == "2" || floorrrrrrrr == "1" || floorrrrrrrr == "-1")
                        {
                                uordddddddd = "up";
                                sfloorrrrrrrr = "3";
                                Timer8->Enabled=true;
                        }
                        if(floorrrrrrrr == "3")
                        {
                                ShowMessage("엘리베이터가 해당 층에 있습니다");
                        }
                }
                if(data3 == "2")
                {
                         if(floorrrrrrrr == "3")
                        {
                                uordddddddd = "down";
                                Timer8->Enabled=true;
                                sfloorrrrrrrr = "2";
                        }

                        else if(floorrrrrrrr == "1" || floorrrrrrrr == "-1")
                        {
                                uordddddddd = "up";
                                Timer8->Enabled=true;
                                sfloorrrrrrrr = "2";
                        }
                        if(floorrrrrrrr == "2")
                        {
                                ShowMessage("엘리베이터가 해당 층에 있습니다");
                        }
                }
                if(data3 == "1")
                {
                        if(floorrrrrrrr == "3" || floorrrrrrrr == "2")
                        {
                                uordddddddd = "down";
                                Timer8->Enabled=true;
                                sfloorrrrrrrr = "1";
                        }
                        else if(floorrrrrrrr == "-1")
                        {
                                uordddddddd = "up";
                                Timer8->Enabled=true;
                                sfloorrrrrrrr = "1";
                        }
                        if(floorrrrrrrr == "1")
                        {
                                ShowMessage("엘리베이터가 해당 층에 있습니다");
                        }
                }
                if(data3 == "B1")
                {
                        if(floorrrrrrrr == "3" || floorrrrrrrr == "2" || floorrrrrrrr == "1")
                        {
                                uordddddddd = "down";
                                Timer8->Enabled=true;
                                sfloorrrrrrrr = "-1";
                        }
                        if(floorrrrrrrr == "-1")
                        {
                                ShowMessage("엘리베이터가 해당 층에 있습니다");
                        }
                }
            }
        }
                    

//---------------------------------------------------------------------------


void __fastcall TForm1::Button18Click(TObject *Sender)
{
     NMUDP1->RemoteHost = Edit1->Text;
     NMUDP1->LocalPort = 7000;
     NMUDP1->RemotePort = 7000;
     ShowMessage("설정되었습니다.");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
     if(floor == "3" || floorr == "3" || floorrr == "3" || floorrrr == "3" || floorrrrr == "3" || floorrrrrr == "3" || floorrrrrrr == "3" || floorrrrrrrr == "3")
    {
        ShowMessage ("엘리베이터가 해당 층에 있습니다");
    }
   else if(floor == "2")
   {
       if(floor == "2" || floor == "1" || floor == "-1")
       {
           uord = "up";
           Timer1->Enabled=true;
           sfloor = "3";
       }
       if(floor == "3")
       {
           ShowMessage("엘리베이터가 해당 층에 있습니다");
       }
        //1호기 3층으로 호출
   }
   else if(floorr == "2")
   {
       if(floorr == "2" || floorr == "1" || floorr == "-1")
        {
                uordd = "up";
                Timer2->Enabled=true;
                sfloorr = "3";
        }
        if(floorr == "3")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //2호기 3층으로 호출
   }
   else if(floorrr == "2")
   {
       if(floorrr == "2" || floorrr == "1" || floorrr == "-1")
       {
            uorddd = "up";
            Timer3->Enabled=true;
            sfloorrr = "3";
       }
       if(floorrr == "3")
       {
           ShowMessage("엘리베이터가 해당 층에 있습니다");
       }
       //3호기 3층으로 호출
   }
   else if(floorrrr == "2")
   {
        if(floorrrr == "2" || floorrrr == "1" || floorrrr == "-1")
    {
        uordddd = "up";
        Timer4->Enabled=true;
        sfloorrrr = "3";
    }
    if(floorrrr == "3")
    {
        ShowMessage("엘리베이터가 해당 층에 있습니다");
    }
       //4호기 3층으로 호출
   }
   else if(floorrrrr == "2")
   {
     if(floorrrrr == "2" || floorrrrr == "1" || floorrrrr == "-1")
    {
        uorddddd = "up";
        Timer5->Enabled=true;
        sfloorrrrr = "3";
    }
        if(floorrrrr == "3")
    {
        ShowMessage("엘리베이터가 해당 층에 있습니다");
    }
       //5호기 3층으로 호출
   }
   else if(floorrrrrr == "2")
   {
           if(floorrrrrr == "2" || floorrrrrr == "1" || floorrrrrr == "-1")
        {
                uordddddd = "up";
                sfloorrrrrr = "3";
                Timer6->Enabled=true;
        }
        if(floorrrrrr == "3")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //6호기 3층으로 호출
   }
   else if(floorrrrrrr == "2")
   {
           if(floorrrrrrr == "2" || floorrrrrrr == "1" || floorrrrrrr == "-1")
        {
                uorddddddd = "up";
                sfloorrrrrrr = "3";
                Timer7->Enabled=true;
        }
            if(floorrrrrrr == "3")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //7호기 3층으로 호출
   }
   else if(floorrrrrrrr == "2")
   {
   if(floorrrrrrrr == "2" || floorrrrrrrr == "1" || floorrrrrrrr == "-1")
    {
        uordddddddd = "up";
        sfloorrrrrrrr = "3";
        Timer8->Enabled=true;
    }
    if(floorrrrrrrr == "3")
    {
        ShowMessage("엘리베이터가 해당 층에 있습니다");
    }
       //8호기 3층으로 호출
   }






   
      else if(floor == "-1")
      {
       if(floor == "2" || floor == "1" || floor == "-1")
       {
           uord = "up";
           Timer1->Enabled=true;
           sfloor = "3";
       }
       if(floor == "3")
       {
           ShowMessage("엘리베이터가 해당 층에 있습니다");
       }
        //1호기 3층으로 호출
   }
   else if(floorr == "-1")
   {
       if(floorr == "2" || floorr == "1" || floorr == "-1")
        {
                uordd = "up";
                Timer2->Enabled=true;
                sfloorr = "3";
        }
        if(floorr == "3")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //2호기 3층으로 호출
   }
   else if(floorrr == "-1")
   {
       if(floorrr == "2" || floorrr == "1" || floorrr == "-1")
       {
            uorddd = "up";
            Timer3->Enabled=true;
            sfloorrr = "3";
       }
       if(floorrr == "3")
       {
           ShowMessage("엘리베이터가 해당 층에 있습니다");
       }
       //3호기 3층으로 호출
   }
   else if(floorrrr == "-1")
   {
        if(floorrrr == "2" || floorrrr == "1" || floorrrr == "-1")
    {
        uordddd = "up";
        Timer4->Enabled=true;
        sfloorrrr = "3";
    }
    if(floorrrr == "3")
    {
        ShowMessage("엘리베이터가 해당 층에 있습니다");
    }
       //4호기 3층으로 호출
   }
   else if(floorrrrr == "-1")
   {
     if(floorrrrr == "2" || floorrrrr == "1" || floorrrrr == "-1")
    {
        uorddddd = "up";
        Timer5->Enabled=true;
        sfloorrrrr = "3";
    }
        if(floorrrrr == "3")
    {
        ShowMessage("엘리베이터가 해당 층에 있습니다");
    }
       //5호기 3층으로 호출
   }
   else if(floorrrrrr == "-1")
   {
           if(floorrrrrr == "2" || floorrrrrr == "1" || floorrrrrr == "-1")
        {
                uordddddd = "up";
                sfloorrrrrr = "3";
                Timer6->Enabled=true;
        }
        if(floorrrrrr == "3")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //6호기 3층으로 호출
   }
   else if(floorrrrrrr == "-1")
   {
           if(floorrrrrrr == "2" || floorrrrrrr == "1" || floorrrrrrr == "-1")
        {
                uorddddddd = "up";
                sfloorrrrrrr = "3";
                Timer7->Enabled=true;
        }
            if(floorrrrrrr == "3")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //7호기 3층으로 호출
   }
   else if(floorrrrrrrr == "-1")
   {
   if(floorrrrrrrr == "2" || floorrrrrrrr == "1" || floorrrrrrrr == "-1")
    {
        uordddddddd = "up";
        sfloorrrrrrrr = "3";
        Timer8->Enabled=true;
    }
    if(floorrrrrrrr == "3")
    {
        ShowMessage("엘리베이터가 해당 층에 있습니다");
    }
       //8호기 3층으로 호출
   }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
    if(floor == "2" || floorr == "2" || floorrr == "2" || floorrrr == "2" || floorrrrr == "2" || floorrrrrr == "2" || floorrrrrrr == "2" || floorrrrrrrr == "2")
    {
        ShowMessage ("엘리베이터가 해당 층에 있습니다");
    }
   else if(floor == "3")
   {
       if(floor == "3")
        {
                uord = "down";
                Timer1->Enabled=true;
                sfloor = "2";
        }

        else if(floor == "1" || floor == "-1")
        {
                uord = "up";
                Timer1->Enabled=true;
                sfloor = "2";
        }
        if(floor == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
        //1호기 2층으로 호출
   }
   else if(floorr == "3")
   {
       if(floorr == "3")
        {
                uordd = "down";
                Timer2->Enabled=true;
                sfloorr = "2";
        }

        else if(floorr == "1" || floorr == "-1")
        {
                uordd = "up";
                Timer2->Enabled=true;
                sfloorr = "2";
        }
        if(floorr == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //2호기 2층으로 호출
   }
   else if(floorrr == "3")
   {
           if(floorrr == "3")
        {
                uorddd = "down";
                Timer3->Enabled=true;
                sfloorrr = "2";
        }

        else if(floorrr == "1" || floorrr == "-1")
        {
                uorddd = "up";
                Timer3->Enabled=true;
                sfloorrr = "2";
        }
        if(floorrr == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //3호기 2층으로 호출
   }
   else if(floorrrr == "3")
   {
           if(floorrrr == "3")
        {
                uordddd = "down";
                Timer4->Enabled=true;
                sfloorrrr = "2";
        }

        else if(floorrrr == "1" || floorrrr == "-1")
        {
                uordddd = "up";
                Timer4->Enabled=true;
                sfloorrrr = "2";
        }
        if(floorrrr == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //4호기 2층으로 호출
   }
   else if(floorrrrr == "3")
   {
       if(floorrrrr == "3")
        {
                uorddddd = "down";
                Timer5->Enabled=true;
                sfloorrrrr = "2";
        }

        else if(floorrrrr == "1" || floorrrrr == "-1")
        {
                uorddddd = "up";
                Timer5->Enabled=true;
                sfloorrrrr = "2";
        }
        if(floorrrrr == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
         }
       //5호기 2층으로 호출
   }
   else if(floorrrrrr == "3")
   {
           if(floorrrrrr == "3")
        {
                uordddddd = "down";
                Timer6->Enabled=true;
                sfloorrrrrr = "2";
        }

        else if(floorrrrrr == "1" || floorrrrrr == "-1")
        {
                uordddddd = "up";
                Timer6->Enabled=true;
                sfloorrrrrr = "2";
        }
        if(floorrrrrr == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //6호기 2층으로 호출
   }
   else if(floorrrrrrr == "3")
   {
        if(floorrrrrrr == "3")
        {
                uorddddddd = "down";
                Timer7->Enabled=true;
                sfloorrrrrrr = "2";
        }

        else if(floorrrrrrr == "1" || floorrrrrrr == "-1")
        {
                uorddddddd = "up";
                Timer7->Enabled=true;
                sfloorrrrrrr = "2";
        }
        if(floorrrrrrr == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //7호기 2층으로 호출
   }
   else if(floorrrrrrrr == "3")
   {
       if(floorrrrrrrr == "3")
        {
                uordddddddd = "down";
                Timer8->Enabled=true;
                sfloorrrrrrrr = "2";
        }

        else if(floorrrrrrrr == "1" || floorrrrrrrr == "-1")
        {
                uordddddddd = "up";
                Timer8->Enabled=true;
                sfloorrrrrrrr = "2";
        }
        if(floorrrrrrrr == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //8호기 2층으로 호출
   }




   else if(floor == "1")
   {
       if(floor == "3")
        {
                uord = "down";
                Timer1->Enabled=true;
                sfloor = "2";
        }

        else if(floor == "1" || floor == "-1")
        {
                uord = "up";
                Timer1->Enabled=true;
                sfloor = "2";
        }
        if(floor == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
        //1호기 2층으로 호출
   }
   else if(floorr == "1")
   {
       if(floorr == "3")
        {
                uordd = "down";
                Timer2->Enabled=true;
                sfloorr = "2";
        }

        else if(floorr == "1" || floorr == "-1")
        {
                uordd = "up";
                Timer2->Enabled=true;
                sfloorr = "2";
        }
        if(floorr == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //2호기 2층으로 호출
   }
   else if(floorrr == "1")
   {
           if(floorrr == "3")
        {
                uorddd = "down";
                Timer3->Enabled=true;
                sfloorrr = "2";
        }

        else if(floorrr == "1" || floorrr == "-1")
        {
                uorddd = "up";
                Timer3->Enabled=true;
                sfloorrr = "2";
        }
        if(floorrr == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //3호기 2층으로 호출
   }
   else if(floorrrr == "1")
   {
           if(floorrrr == "3")
        {
                uordddd = "down";
                Timer4->Enabled=true;
                sfloorrrr = "2";
        }

        else if(floorrrr == "1" || floorrrr == "-1")
        {
                uordddd = "up";
                Timer4->Enabled=true;
                sfloorrrr = "2";
        }
        if(floorrrr == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //4호기 2층으로 호출
   }
   else if(floorrrrr == "1")
   {
       if(floorrrrr == "3")
        {
                uorddddd = "down";
                Timer5->Enabled=true;
                sfloorrrrr = "2";
        }

        else if(floorrrrr == "1" || floorrrrr == "-1")
        {
                uorddddd = "up";
                Timer5->Enabled=true;
                sfloorrrrr = "2";
        }
        if(floorrrrr == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
         }
       //5호기 2층으로 호출
   }
   else if(floorrrrrr == "1")
   {
           if(floorrrrrr == "3")
        {
                uordddddd = "down";
                Timer6->Enabled=true;
                sfloorrrrrr = "2";
        }

        else if(floorrrrrr == "1" || floorrrrrr == "-1")
        {
                uordddddd = "up";
                Timer6->Enabled=true;
                sfloorrrrrr = "2";
        }
        if(floorrrrrr == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //6호기 2층으로 호출
   }
   else if(floorrrrrrr == "1")
   {
        if(floorrrrrrr == "3")
        {
                uorddddddd = "down";
                Timer7->Enabled=true;
                sfloorrrrrrr = "2";
        }

        else if(floorrrrrrr == "1" || floorrrrrrr == "-1")
        {
                uorddddddd = "up";
                Timer7->Enabled=true;
                sfloorrrrrrr = "2";
        }
        if(floorrrrrrr == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //7호기 2층으로 호출
   }
   else if(floorrrrrrrr == "1")
   {
       if(floorrrrrrrr == "3")
        {
                uordddddddd = "down";
                Timer8->Enabled=true;
                sfloorrrrrrrr = "2";
        }

        else if(floorrrrrrrr == "1" || floorrrrrrrr == "-1")
        {
                uordddddddd = "up";
                Timer8->Enabled=true;
                sfloorrrrrrrr = "2";
        }
        if(floorrrrrrrr == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //8호기 2층으로 호출
   }



   else if(floor == "-1")
   {
       if(floor == "3")
        {
                uord = "down";
                Timer1->Enabled=true;
                sfloor = "2";
        }

        else if(floor == "1" || floor == "-1")
        {
                uord = "up";
                Timer1->Enabled=true;
                sfloor = "2";
        }
        if(floor == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
        //1호기 2층으로 호출
   }
   else if(floorr == "-1")
   {
       if(floorr == "3")
        {
                uordd = "down";
                Timer2->Enabled=true;
                sfloorr = "2";
        }

        else if(floorr == "1" || floorr == "-1")
        {
                uordd = "up";
                Timer2->Enabled=true;
                sfloorr = "2";
        }
        if(floorr == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //2호기 2층으로 호출
   }
   else if(floorrr == "-1")
   {
           if(floorrr == "3")
        {
                uorddd = "down";
                Timer3->Enabled=true;
                sfloorrr = "2";
        }

        else if(floorrr == "1" || floorrr == "-1")
        {
                uorddd = "up";
                Timer3->Enabled=true;
                sfloorrr = "2";
        }
        if(floorrr == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //3호기 2층으로 호출
   }
   else if(floorrrr == "-1")
   {
           if(floorrrr == "3")
        {
                uordddd = "down";
                Timer4->Enabled=true;
                sfloorrrr = "2";
        }

        else if(floorrrr == "1" || floorrrr == "-1")
        {
                uordddd = "up";
                Timer4->Enabled=true;
                sfloorrrr = "2";
        }
        if(floorrrr == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //4호기 2층으로 호출
   }
   else if(floorrrrr == "-1")
   {
       if(floorrrrr == "3")
        {
                uorddddd = "down";
                Timer5->Enabled=true;
                sfloorrrrr = "2";
        }

        else if(floorrrrr == "1" || floorrrrr == "-1")
        {
                uorddddd = "up";
                Timer5->Enabled=true;
                sfloorrrrr = "2";
        }
        if(floorrrrr == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
         }
       //5호기 2층으로 호출
   }
   else if(floorrrrrr == "-1")
   {
           if(floorrrrrr == "3")
        {
                uordddddd = "down";
                Timer6->Enabled=true;
                sfloorrrrrr = "2";
        }

        else if(floorrrrrr == "1" || floorrrrrr == "-1")
        {
                uordddddd = "up";
                Timer6->Enabled=true;
                sfloorrrrrr = "2";
        }
        if(floorrrrrr == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //6호기 2층으로 호출
   }
   else if(floorrrrrrr == "-1")
   {
        if(floorrrrrrr == "3")
        {
                uorddddddd = "down";
                Timer7->Enabled=true;
                sfloorrrrrrr = "2";
        }

        else if(floorrrrrrr == "1" || floorrrrrrr == "-1")
        {
                uorddddddd = "up";
                Timer7->Enabled=true;
                sfloorrrrrrr = "2";
        }
        if(floorrrrrrr == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //7호기 2층으로 호출
   }
   else if(floorrrrrrrr == "-1")
   {
       if(floorrrrrrrr == "3")
        {
                uordddddddd = "down";
                Timer8->Enabled=true;
                sfloorrrrrrrr = "2";
        }

        else if(floorrrrrrrr == "1" || floorrrrrrrr == "-1")
        {
                uordddddddd = "up";
                Timer8->Enabled=true;
                sfloorrrrrrrr = "2";
        }
        if(floorrrrrrrr == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //8호기 2층으로 호출
   }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
       if(floor == "2" || floorr == "2" || floorrr == "2" || floorrrr == "2" || floorrrrr == "2" || floorrrrrr == "2" || floorrrrrrr == "2" || floorrrrrrrr == "2")
    {
        ShowMessage ("엘리베이터가 해당 층에 있습니다");
    }
   else if(floor == "3")
   {
       if(floor == "3")
        {
                uord = "down";
                Timer1->Enabled=true;
                sfloor = "2";
        }

        else if(floor == "1" || floor == "-1")
        {
                uord = "up";
                Timer1->Enabled=true;
                sfloor = "2";
        }
        if(floor == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
        //1호기 2층으로 호출
   }
   else if(floorr == "3")
   {
       if(floorr == "3")
        {
                uordd = "down";
                Timer2->Enabled=true;
                sfloorr = "2";
        }

        else if(floorr == "1" || floorr == "-1")
        {
                uordd = "up";
                Timer2->Enabled=true;
                sfloorr = "2";
        }
        if(floorr == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //2호기 2층으로 호출
   }
   else if(floorrr == "3")
   {
           if(floorrr == "3")
        {
                uorddd = "down";
                Timer3->Enabled=true;
                sfloorrr = "2";
        }

        else if(floorrr == "1" || floorrr == "-1")
        {
                uorddd = "up";
                Timer3->Enabled=true;
                sfloorrr = "2";
        }
        if(floorrr == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //3호기 2층으로 호출
   }
   else if(floorrrr == "3")
   {
           if(floorrrr == "3")
        {
                uordddd = "down";
                Timer4->Enabled=true;
                sfloorrrr = "2";
        }

        else if(floorrrr == "1" || floorrrr == "-1")
        {
                uordddd = "up";
                Timer4->Enabled=true;
                sfloorrrr = "2";
        }
        if(floorrrr == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //4호기 2층으로 호출
   }
   else if(floorrrrr == "3")
   {
       if(floorrrrr == "3")
        {
                uorddddd = "down";
                Timer5->Enabled=true;
                sfloorrrrr = "2";
        }

        else if(floorrrrr == "1" || floorrrrr == "-1")
        {
                uorddddd = "up";
                Timer5->Enabled=true;
                sfloorrrrr = "2";
        }
        if(floorrrrr == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
         }
       //5호기 2층으로 호출
   }
   else if(floorrrrrr == "3")
   {
           if(floorrrrrr == "3")
        {
                uordddddd = "down";
                Timer6->Enabled=true;
                sfloorrrrrr = "2";
        }

        else if(floorrrrrr == "1" || floorrrrrr == "-1")
        {
                uordddddd = "up";
                Timer6->Enabled=true;
                sfloorrrrrr = "2";
        }
        if(floorrrrrr == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //6호기 2층으로 호출
   }
   else if(floorrrrrrr == "3")
   {
        if(floorrrrrrr == "3")
        {
                uorddddddd = "down";
                Timer7->Enabled=true;
                sfloorrrrrrr = "2";
        }

        else if(floorrrrrrr == "1" || floorrrrrrr == "-1")
        {
                uorddddddd = "up";
                Timer7->Enabled=true;
                sfloorrrrrrr = "2";
        }
        if(floorrrrrrr == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //7호기 2층으로 호출
   }
   else if(floorrrrrrrr == "3")
   {
       if(floorrrrrrrr == "3")
        {
                uordddddddd = "down";
                Timer8->Enabled=true;
                sfloorrrrrrrr = "2";
        }

        else if(floorrrrrrrr == "1" || floorrrrrrrr == "-1")
        {
                uordddddddd = "up";
                Timer8->Enabled=true;
                sfloorrrrrrrr = "2";
        }
        if(floorrrrrrrr == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //8호기 2층으로 호출
   }




   else if(floor == "1")
   {
       if(floor == "3")
        {
                uord = "down";
                Timer1->Enabled=true;
                sfloor = "2";
        }

        else if(floor == "1" || floor == "-1")
        {
                uord = "up";
                Timer1->Enabled=true;
                sfloor = "2";
        }
        if(floor == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
        //1호기 2층으로 호출
   }
   else if(floorr == "1")
   {
       if(floorr == "3")
        {
                uordd = "down";
                Timer2->Enabled=true;
                sfloorr = "2";
        }

        else if(floorr == "1" || floorr == "-1")
        {
                uordd = "up";
                Timer2->Enabled=true;
                sfloorr = "2";
        }
        if(floorr == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //2호기 2층으로 호출
   }
   else if(floorrr == "1")
   {
           if(floorrr == "3")
        {
                uorddd = "down";
                Timer3->Enabled=true;
                sfloorrr = "2";
        }

        else if(floorrr == "1" || floorrr == "-1")
        {
                uorddd = "up";
                Timer3->Enabled=true;
                sfloorrr = "2";
        }
        if(floorrr == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //3호기 2층으로 호출
   }
   else if(floorrrr == "1")
   {
           if(floorrrr == "3")
        {
                uordddd = "down";
                Timer4->Enabled=true;
                sfloorrrr = "2";
        }

        else if(floorrrr == "1" || floorrrr == "-1")
        {
                uordddd = "up";
                Timer4->Enabled=true;
                sfloorrrr = "2";
        }
        if(floorrrr == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //4호기 2층으로 호출
   }
   else if(floorrrrr == "1")
   {
       if(floorrrrr == "3")
        {
                uorddddd = "down";
                Timer5->Enabled=true;
                sfloorrrrr = "2";
        }

        else if(floorrrrr == "1" || floorrrrr == "-1")
        {
                uorddddd = "up";
                Timer5->Enabled=true;
                sfloorrrrr = "2";
        }
        if(floorrrrr == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
         }
       //5호기 2층으로 호출
   }
   else if(floorrrrrr == "1")
   {
           if(floorrrrrr == "3")
        {
                uordddddd = "down";
                Timer6->Enabled=true;
                sfloorrrrrr = "2";
        }

        else if(floorrrrrr == "1" || floorrrrrr == "-1")
        {
                uordddddd = "up";
                Timer6->Enabled=true;
                sfloorrrrrr = "2";
        }
        if(floorrrrrr == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //6호기 2층으로 호출
   }
   else if(floorrrrrrr == "1")
   {
        if(floorrrrrrr == "3")
        {
                uorddddddd = "down";
                Timer7->Enabled=true;
                sfloorrrrrrr = "2";
        }

        else if(floorrrrrrr == "1" || floorrrrrrr == "-1")
        {
                uorddddddd = "up";
                Timer7->Enabled=true;
                sfloorrrrrrr = "2";
        }
        if(floorrrrrrr == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //7호기 2층으로 호출
   }
   else if(floorrrrrrrr == "1")
   {
       if(floorrrrrrrr == "3")
        {
                uordddddddd = "down";
                Timer8->Enabled=true;
                sfloorrrrrrrr = "2";
        }

        else if(floorrrrrrrr == "1" || floorrrrrrrr == "-1")
        {
                uordddddddd = "up";
                Timer8->Enabled=true;
                sfloorrrrrrrr = "2";
        }
        if(floorrrrrrrr == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //8호기 2층으로 호출
   }



   else if(floor == "-1")
   {
       if(floor == "3")
        {
                uord = "down";
                Timer1->Enabled=true;
                sfloor = "2";
        }

        else if(floor == "1" || floor == "-1")
        {
                uord = "up";
                Timer1->Enabled=true;
                sfloor = "2";
        }
        if(floor == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
        //1호기 2층으로 호출
   }
   else if(floorr == "-1")
   {
       if(floorr == "3")
        {
                uordd = "down";
                Timer2->Enabled=true;
                sfloorr = "2";
        }

        else if(floorr == "1" || floorr == "-1")
        {
                uordd = "up";
                Timer2->Enabled=true;
                sfloorr = "2";
        }
        if(floorr == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //2호기 2층으로 호출
   }
   else if(floorrr == "-1")
   {
           if(floorrr == "3")
        {
                uorddd = "down";
                Timer3->Enabled=true;
                sfloorrr = "2";
        }

        else if(floorrr == "1" || floorrr == "-1")
        {
                uorddd = "up";
                Timer3->Enabled=true;
                sfloorrr = "2";
        }
        if(floorrr == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //3호기 2층으로 호출
   }
   else if(floorrrr == "-1")
   {
           if(floorrrr == "3")
        {
                uordddd = "down";
                Timer4->Enabled=true;
                sfloorrrr = "2";
        }

        else if(floorrrr == "1" || floorrrr == "-1")
        {
                uordddd = "up";
                Timer4->Enabled=true;
                sfloorrrr = "2";
        }
        if(floorrrr == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //4호기 2층으로 호출
   }
   else if(floorrrrr == "-1")
   {
       if(floorrrrr == "3")
        {
                uorddddd = "down";
                Timer5->Enabled=true;
                sfloorrrrr = "2";
        }

        else if(floorrrrr == "1" || floorrrrr == "-1")
        {
                uorddddd = "up";
                Timer5->Enabled=true;
                sfloorrrrr = "2";
        }
        if(floorrrrr == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
         }
       //5호기 2층으로 호출
   }
   else if(floorrrrrr == "-1")
   {
           if(floorrrrrr == "3")
        {
                uordddddd = "down";
                Timer6->Enabled=true;
                sfloorrrrrr = "2";
        }

        else if(floorrrrrr == "1" || floorrrrrr == "-1")
        {
                uordddddd = "up";
                Timer6->Enabled=true;
                sfloorrrrrr = "2";
        }
        if(floorrrrrr == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //6호기 2층으로 호출
   }
   else if(floorrrrrrr == "-1")
   {
        if(floorrrrrrr == "3")
        {
                uorddddddd = "down";
                Timer7->Enabled=true;
                sfloorrrrrrr = "2";
        }

        else if(floorrrrrrr == "1" || floorrrrrrr == "-1")
        {
                uorddddddd = "up";
                Timer7->Enabled=true;
                sfloorrrrrrr = "2";
        }
        if(floorrrrrrr == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //7호기 2층으로 호출
   }
   else if(floorrrrrrrr == "-1")
   {
       if(floorrrrrrrr == "3")
        {
                uordddddddd = "down";
                Timer8->Enabled=true;
                sfloorrrrrrrr = "2";
        }

        else if(floorrrrrrrr == "1" || floorrrrrrrr == "-1")
        {
                uordddddddd = "up";
                Timer8->Enabled=true;
                sfloorrrrrrrr = "2";
        }
        if(floorrrrrrrr == "2")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //8호기 2층으로 호출
   }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
        if(floor == "1" || floorr == "1" || floorrr == "1" || floorrrr == "1" || floorrrrr == "1" || floorrrrrr == "1" || floorrrrrrr == "1" || floorrrrrrrr == "1")
    {
        ShowMessage ("엘리베이터가 해당 층에 있습니다");
    }
   else if(floor == "2")
   {
        if(floor == "3" || floor == "2")
        {
                uord = "down";
                Timer1->Enabled=true;
                sfloor = "1";
        }
        else if(floor == "-1")
        {
                uord = "up";
                Timer1->Enabled=true;
                sfloor = "1";
        }

        if(floor == "1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
        //1호기 1층으로 호출
   }
   else if(floorr == "2")
   {
       if(floorr == "3" || floorr == "2")
        {
                uordd = "down";
                Timer2->Enabled=true;
                sfloorr = "1";
        }
        else if(floorr == "-1")
        {
                uordd = "up";
                Timer2->Enabled=true;
                sfloorr = "1";
        }
        if(floorr == "1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //2호기 1층으로 호출
   }
   else if(floorrr == "2")
   {
           if(floorrr == "3" || floorrr == "2")
        {
                uorddd = "down";
                Timer3->Enabled=true;
                sfloorrr = "1";
        }
        else if(floorrr == "-1")
        {
                uorddd = "up";
                Timer3->Enabled=true;
                sfloorrr = "1";
        }
        if(floorrr == "1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //3호기 1층으로 호출
   }
   else if(floorrrr == "2")
   {
         if(floorrrr == "3" || floorrrr == "2")
        {
                uordddd = "down";
                Timer4->Enabled=true;
                sfloorrrr = "1";
        }
        else if(floorrrr == "-1")
        {
                uordddd = "up";
                Timer4->Enabled=true;
                sfloorrrr = "1";
        }
        if(floorrrr == "1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //4호기 1층으로 호출
   }
   else if(floorrrrr == "2")
   {
        if(floorrrrr == "3" || floorrrrr == "2")
        {
                uorddddd = "down";
                Timer5->Enabled=true;
                sfloorrrrr = "1";
        }
        else if(floorrrrr == "-1")
        {
                uorddddd = "up";
                Timer5->Enabled=true;
                sfloorrrrr = "1";
        }
        if(floorrrrr == "1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //5호기 1층으로 호출
   }
   else if(floorrrrrr == "2")
   {
       if(floorrrrrr == "3" || floorrrrrr == "2")
        {
                uordddddd = "down";
                Timer6->Enabled=true;
                sfloorrrrrr = "1";
        }
        else if(floorrrrrr == "-1")
        {
                uordddddd = "up";
                Timer6->Enabled=true;
                sfloorrrrrr = "1";
        }
            if(floorrrrrr == "1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //6호기 1층으로 호출
   }
   else if(floorrrrrrr == "2")
   {
       if(floorrrrrrr == "3" || floorrrrrrr == "2")
        {
                uorddddddd = "down";
                Timer7->Enabled=true;
                sfloorrrrrrr = "1";
        }
        else if(floorrrrrrr == "-1")
        {
                uorddddddd = "up";
                Timer7->Enabled=true;
                sfloorrrrrrr = "1";
        }
        if(floorrrrrrr == "1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //7호기 1층으로 호출
   }
   else if(floorrrrrrrr == "2")
   {
               if(floorrrrrrrr == "3" || floorrrrrrrr == "2")
                {
                        uordddddddd = "down";
                        Timer8->Enabled=true;
                        sfloorrrrrrrr = "1";
                }
                else if(floorrrrrrrr == "-1")
                {
                        uordddddddd = "up";
                        Timer8->Enabled=true;
                        sfloorrrrrrrr = "1";
                }
                if(floorrrrrrrr == "1")
                {
                        ShowMessage("엘리베이터가 해당 층에 있습니다");
                }
       //8호기 1층으로 호출
   }





      else if(floor == "-1")
   {
        if(floor == "3" || floor == "2")
        {
                uord = "down";
                Timer1->Enabled=true;
                sfloor = "1";
        }
        else if(floor == "-1")
        {
                uord = "up";
                Timer1->Enabled=true;
                sfloor = "1";
        }

        if(floor == "1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
        //1호기 1층으로 호출
   }
   else if(floorr == "-1")
   {
       if(floorr == "3" || floorr == "2")
        {
                uordd = "down";
                Timer2->Enabled=true;
                sfloorr = "1";
        }
        else if(floorr == "-1")
        {
                uordd = "up";
                Timer2->Enabled=true;
                sfloorr = "1";
        }
        if(floorr == "1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //2호기 1층으로 호출
   }
   else if(floorrr == "-1")
   {
           if(floorrr == "3" || floorrr == "2")
        {
                uorddd = "down";
                Timer3->Enabled=true;
                sfloorrr = "1";
        }
        else if(floorrr == "-1")
        {
                uorddd = "up";
                Timer3->Enabled=true;
                sfloorrr = "1";
        }
        if(floorrr == "1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //3호기 1층으로 호출
   }
   else if(floorrrr == "-1")
   {
         if(floorrrr == "3" || floorrrr == "2")
        {
                uordddd = "down";
                Timer4->Enabled=true;
                sfloorrrr = "1";
        }
        else if(floorrrr == "-1")
        {
                uordddd = "up";
                Timer4->Enabled=true;
                sfloorrrr = "1";
        }
        if(floorrrr == "1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //4호기 1층으로 호출
   }
   else if(floorrrrr == "-1")
   {
        if(floorrrrr == "3" || floorrrrr == "2")
        {
                uorddddd = "down";
                Timer5->Enabled=true;
                sfloorrrrr = "1";
        }
        else if(floorrrrr == "-1")
        {
                uorddddd = "up";
                Timer5->Enabled=true;
                sfloorrrrr = "1";
        }
        if(floorrrrr == "1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //5호기 1층으로 호출
   }
   else if(floorrrrrr == "-1")
   {
       if(floorrrrrr == "3" || floorrrrrr == "2")
        {
                uordddddd = "down";
                Timer6->Enabled=true;
                sfloorrrrrr = "1";
        }
        else if(floorrrrrr == "-1")
        {
                uordddddd = "up";
                Timer6->Enabled=true;
                sfloorrrrrr = "1";
        }
            if(floorrrrrr == "1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //6호기 1층으로 호출
   }
   else if(floorrrrrrr == "-1")
   {
       if(floorrrrrrr == "3" || floorrrrrrr == "2")
        {
                uorddddddd = "down";
                Timer7->Enabled=true;
                sfloorrrrrrr = "1";
        }
        else if(floorrrrrrr == "-1")
        {
                uorddddddd = "up";
                Timer7->Enabled=true;
                sfloorrrrrrr = "1";
        }
        if(floorrrrrrr == "1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //7호기 1층으로 호출
   }
   else if(floorrrrrrrr == "-1")
   {
               if(floorrrrrrrr == "3" || floorrrrrrrr == "2")
                {
                        uordddddddd = "down";
                        Timer8->Enabled=true;
                        sfloorrrrrrrr = "1";
                }
                else if(floorrrrrrrr == "-1")
                {
                        uordddddddd = "up";
                        Timer8->Enabled=true;
                        sfloorrrrrrrr = "1";
                }
                if(floorrrrrrrr == "1")
                {
                        ShowMessage("엘리베이터가 해당 층에 있습니다");
                }
       //8호기 1층으로 호출
   }




      else if(floor == "3")
   {
        if(floor == "3" || floor == "2")
        {
                uord = "down";
                Timer1->Enabled=true;
                sfloor = "1";
        }
        else if(floor == "-1")
        {
                uord = "up";
                Timer1->Enabled=true;
                sfloor = "1";
        }

        if(floor == "1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
        //1호기 1층으로 호출
   }
   else if(floorr == "3")
   {
       if(floorr == "3" || floorr == "2")
        {
                uordd = "down";
                Timer2->Enabled=true;
                sfloorr = "1";
        }
        else if(floorr == "-1")
        {
                uordd = "up";
                Timer2->Enabled=true;
                sfloorr = "1";
        }
        if(floorr == "1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //2호기 1층으로 호출
   }
   else if(floorrr == "3")
   {
           if(floorrr == "3" || floorrr == "2")
        {
                uorddd = "down";
                Timer3->Enabled=true;
                sfloorrr = "1";
        }
        else if(floorrr == "-1")
        {
                uorddd = "up";
                Timer3->Enabled=true;
                sfloorrr = "1";
        }
        if(floorrr == "1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //3호기 1층으로 호출
   }
   else if(floorrrr == "3")
   {
         if(floorrrr == "3" || floorrrr == "2")
        {
                uordddd = "down";
                Timer4->Enabled=true;
                sfloorrrr = "1";
        }
        else if(floorrrr == "-1")
        {
                uordddd = "up";
                Timer4->Enabled=true;
                sfloorrrr = "1";
        }
        if(floorrrr == "1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //4호기 1층으로 호출
   }
   else if(floorrrrr == "3")
   {
        if(floorrrrr == "3" || floorrrrr == "2")
        {
                uorddddd = "down";
                Timer5->Enabled=true;
                sfloorrrrr = "1";
        }
        else if(floorrrrr == "-1")
        {
                uorddddd = "up";
                Timer5->Enabled=true;
                sfloorrrrr = "1";
        }
        if(floorrrrr == "1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //5호기 1층으로 호출
   }
   else if(floorrrrrr == "3")
   {
       if(floorrrrrr == "3" || floorrrrrr == "2")
        {
                uordddddd = "down";
                Timer6->Enabled=true;
                sfloorrrrrr = "1";
        }
        else if(floorrrrrr == "-1")
        {
                uordddddd = "up";
                Timer6->Enabled=true;
                sfloorrrrrr = "1";
        }
            if(floorrrrrr == "1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //6호기 1층으로 호출
   }
   else if(floorrrrrrr == "3")
   {
       if(floorrrrrrr == "3" || floorrrrrrr == "2")
        {
                uorddddddd = "down";
                Timer7->Enabled=true;
                sfloorrrrrrr = "1";
        }
        else if(floorrrrrrr == "-1")
        {
                uorddddddd = "up";
                Timer7->Enabled=true;
                sfloorrrrrrr = "1";
        }
        if(floorrrrrrr == "1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //7호기 1층으로 호출
   }
   else if(floorrrrrrrr == "3")
   {
               if(floorrrrrrrr == "3" || floorrrrrrrr == "2")
                {
                        uordddddddd = "down";
                        Timer8->Enabled=true;
                        sfloorrrrrrrr = "1";
                }
                else if(floorrrrrrrr == "-1")
                {
                        uordddddddd = "up";
                        Timer8->Enabled=true;
                        sfloorrrrrrrr = "1";
                }
                if(floorrrrrrrr == "1")
                {
                        ShowMessage("엘리베이터가 해당 층에 있습니다");
                }
       //8호기 1층으로 호출
   }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
         if(floor == "1" || floorr == "1" || floorrr == "1" || floorrrr == "1" || floorrrrr == "1" || floorrrrrr == "1" || floorrrrrrr == "1" || floorrrrrrrr == "1")
    {
        ShowMessage ("엘리베이터가 해당 층에 있습니다");
    }
       else if(floor == "2")
   {
        if(floor == "3" || floor == "2")
        {
                uord = "down";
                Timer1->Enabled=true;
                sfloor = "1";
        }
        else if(floor == "-1")
        {
                uord = "up";
                Timer1->Enabled=true;
                sfloor = "1";
        }

        if(floor == "1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
        //1호기 1층으로 호출
   }
   else if(floorr == "2")
   {
       if(floorr == "3" || floorr == "2")
        {
                uordd = "down";
                Timer2->Enabled=true;
                sfloorr = "1";
        }
        else if(floorr == "-1")
        {
                uordd = "up";
                Timer2->Enabled=true;
                sfloorr = "1";
        }
        if(floorr == "1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //2호기 1층으로 호출
   }
   else if(floorrr == "2")
   {
           if(floorrr == "3" || floorrr == "2")
        {
                uorddd = "down";
                Timer3->Enabled=true;
                sfloorrr = "1";
        }
        else if(floorrr == "-1")
        {
                uorddd = "up";
                Timer3->Enabled=true;
                sfloorrr = "1";
        }
        if(floorrr == "1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //3호기 1층으로 호출
   }
   else if(floorrrr == "2")
   {
         if(floorrrr == "3" || floorrrr == "2")
        {
                uordddd = "down";
                Timer4->Enabled=true;
                sfloorrrr = "1";
        }
        else if(floorrrr == "-1")
        {
                uordddd = "up";
                Timer4->Enabled=true;
                sfloorrrr = "1";
        }
        if(floorrrr == "1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //4호기 1층으로 호출
   }
   else if(floorrrrr == "2")
   {
        if(floorrrrr == "3" || floorrrrr == "2")
        {
                uorddddd = "down";
                Timer5->Enabled=true;
                sfloorrrrr = "1";
        }
        else if(floorrrrr == "-1")
        {
                uorddddd = "up";
                Timer5->Enabled=true;
                sfloorrrrr = "1";
        }
        if(floorrrrr == "1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //5호기 1층으로 호출
   }
   else if(floorrrrrr == "2")
   {
       if(floorrrrrr == "3" || floorrrrrr == "2")
        {
                uordddddd = "down";
                Timer6->Enabled=true;
                sfloorrrrrr = "1";
        }
        else if(floorrrrrr == "-1")
        {
                uordddddd = "up";
                Timer6->Enabled=true;
                sfloorrrrrr = "1";
        }
            if(floorrrrrr == "1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //6호기 1층으로 호출
   }
   else if(floorrrrrrr == "2")
   {
       if(floorrrrrrr == "3" || floorrrrrrr == "2")
        {
                uorddddddd = "down";
                Timer7->Enabled=true;
                sfloorrrrrrr = "1";
        }
        else if(floorrrrrrr == "-1")
        {
                uorddddddd = "up";
                Timer7->Enabled=true;
                sfloorrrrrrr = "1";
        }
        if(floorrrrrrr == "1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //7호기 1층으로 호출
   }
   else if(floorrrrrrrr == "2")
   {
               if(floorrrrrrrr == "3" || floorrrrrrrr == "2")
                {
                        uordddddddd = "down";
                        Timer8->Enabled=true;
                        sfloorrrrrrrr = "1";
                }
                else if(floorrrrrrrr == "-1")
                {
                        uordddddddd = "up";
                        Timer8->Enabled=true;
                        sfloorrrrrrrr = "1";
                }
                if(floorrrrrrrr == "1")
                {
                        ShowMessage("엘리베이터가 해당 층에 있습니다");
                }
       //8호기 1층으로 호출
   }





      else if(floor == "-1")
   {
        if(floor == "3" || floor == "2")
        {
                uord = "down";
                Timer1->Enabled=true;
                sfloor = "1";
        }
        else if(floor == "-1")
        {
                uord = "up";
                Timer1->Enabled=true;
                sfloor = "1";
        }

        if(floor == "1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
        //1호기 1층으로 호출
   }
   else if(floorr == "-1")
   {
       if(floorr == "3" || floorr == "2")
        {
                uordd = "down";
                Timer2->Enabled=true;
                sfloorr = "1";
        }
        else if(floorr == "-1")
        {
                uordd = "up";
                Timer2->Enabled=true;
                sfloorr = "1";
        }
        if(floorr == "1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //2호기 1층으로 호출
   }
   else if(floorrr == "-1")
   {
           if(floorrr == "3" || floorrr == "2")
        {
                uorddd = "down";
                Timer3->Enabled=true;
                sfloorrr = "1";
        }
        else if(floorrr == "-1")
        {
                uorddd = "up";
                Timer3->Enabled=true;
                sfloorrr = "1";
        }
        if(floorrr == "1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //3호기 1층으로 호출
   }
   else if(floorrrr == "-1")
   {
         if(floorrrr == "3" || floorrrr == "2")
        {
                uordddd = "down";
                Timer4->Enabled=true;
                sfloorrrr = "1";
        }
        else if(floorrrr == "-1")
        {
                uordddd = "up";
                Timer4->Enabled=true;
                sfloorrrr = "1";
        }
        if(floorrrr == "1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //4호기 1층으로 호출
   }
   else if(floorrrrr == "-1")
   {
        if(floorrrrr == "3" || floorrrrr == "2")
        {
                uorddddd = "down";
                Timer5->Enabled=true;
                sfloorrrrr = "1";
        }
        else if(floorrrrr == "-1")
        {
                uorddddd = "up";
                Timer5->Enabled=true;
                sfloorrrrr = "1";
        }
        if(floorrrrr == "1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //5호기 1층으로 호출
   }
   else if(floorrrrrr == "-1")
   {
       if(floorrrrrr == "3" || floorrrrrr == "2")
        {
                uordddddd = "down";
                Timer6->Enabled=true;
                sfloorrrrrr = "1";
        }
        else if(floorrrrrr == "-1")
        {
                uordddddd = "up";
                Timer6->Enabled=true;
                sfloorrrrrr = "1";
        }
            if(floorrrrrr == "1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //6호기 1층으로 호출
   }
   else if(floorrrrrrr == "-1")
   {
       if(floorrrrrrr == "3" || floorrrrrrr == "2")
        {
                uorddddddd = "down";
                Timer7->Enabled=true;
                sfloorrrrrrr = "1";
        }
        else if(floorrrrrrr == "-1")
        {
                uorddddddd = "up";
                Timer7->Enabled=true;
                sfloorrrrrrr = "1";
        }
        if(floorrrrrrr == "1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //7호기 1층으로 호출
   }
   else if(floorrrrrrrr == "-1")
   {
               if(floorrrrrrrr == "3" || floorrrrrrrr == "2")
                {
                        uordddddddd = "down";
                        Timer8->Enabled=true;
                        sfloorrrrrrrr = "1";
                }
                else if(floorrrrrrrr == "-1")
                {
                        uordddddddd = "up";
                        Timer8->Enabled=true;
                        sfloorrrrrrrr = "1";
                }
                if(floorrrrrrrr == "1")
                {
                        ShowMessage("엘리베이터가 해당 층에 있습니다");
                }
       //8호기 1층으로 호출
   }




      else if(floor == "3")
   {
        if(floor == "3" || floor == "2")
        {
                uord = "down";
                Timer1->Enabled=true;
                sfloor = "1";
        }
        else if(floor == "-1")
        {
                uord = "up";
                Timer1->Enabled=true;
                sfloor = "1";
        }

        if(floor == "1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
        //1호기 1층으로 호출
   }
   else if(floorr == "3")
   {
       if(floorr == "3" || floorr == "2")
        {
                uordd = "down";
                Timer2->Enabled=true;
                sfloorr = "1";
        }
        else if(floorr == "-1")
        {
                uordd = "up";
                Timer2->Enabled=true;
                sfloorr = "1";
        }
        if(floorr == "1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //2호기 1층으로 호출
   }
   else if(floorrr == "3")
   {
           if(floorrr == "3" || floorrr == "2")
        {
                uorddd = "down";
                Timer3->Enabled=true;
                sfloorrr = "1";
        }
        else if(floorrr == "-1")
        {
                uorddd = "up";
                Timer3->Enabled=true;
                sfloorrr = "1";
        }
        if(floorrr == "1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //3호기 1층으로 호출
   }
   else if(floorrrr == "3")
   {
         if(floorrrr == "3" || floorrrr == "2")
        {
                uordddd = "down";
                Timer4->Enabled=true;
                sfloorrrr = "1";
        }
        else if(floorrrr == "-1")
        {
                uordddd = "up";
                Timer4->Enabled=true;
                sfloorrrr = "1";
        }
        if(floorrrr == "1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //4호기 1층으로 호출
   }
   else if(floorrrrr == "3")
   {
        if(floorrrrr == "3" || floorrrrr == "2")
        {
                uorddddd = "down";
                Timer5->Enabled=true;
                sfloorrrrr = "1";
        }
        else if(floorrrrr == "-1")
        {
                uorddddd = "up";
                Timer5->Enabled=true;
                sfloorrrrr = "1";
        }
        if(floorrrrr == "1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //5호기 1층으로 호출
   }
   else if(floorrrrrr == "3")
   {
       if(floorrrrrr == "3" || floorrrrrr == "2")
        {
                uordddddd = "down";
                Timer6->Enabled=true;
                sfloorrrrrr = "1";
        }
        else if(floorrrrrr == "-1")
        {
                uordddddd = "up";
                Timer6->Enabled=true;
                sfloorrrrrr = "1";
        }
            if(floorrrrrr == "1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //6호기 1층으로 호출
   }
   else if(floorrrrrrr == "3")
   {
       if(floorrrrrrr == "3" || floorrrrrrr == "2")
        {
                uorddddddd = "down";
                Timer7->Enabled=true;
                sfloorrrrrrr = "1";
        }
        else if(floorrrrrrr == "-1")
        {
                uorddddddd = "up";
                Timer7->Enabled=true;
                sfloorrrrrrr = "1";
        }
        if(floorrrrrrr == "1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //7호기 1층으로 호출
   }
   else if(floorrrrrrrr == "3")
   {
               if(floorrrrrrrr == "3" || floorrrrrrrr == "2")
                {
                        uordddddddd = "down";
                        Timer8->Enabled=true;
                        sfloorrrrrrrr = "1";
                }
                else if(floorrrrrrrr == "-1")
                {
                        uordddddddd = "up";
                        Timer8->Enabled=true;
                        sfloorrrrrrrr = "1";
                }
                if(floorrrrrrrr == "1")
                {
                        ShowMessage("엘리베이터가 해당 층에 있습니다");
                }
       //8호기 1층으로 호출
   }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender)
{
   if(floor == "-1" || floorr == "-1" || floorrr == "-1" || floorrrr == "-1" || floorrrrr == "-1" || floorrrrrr == "-1" || floorrrrrrr == "-1" || floorrrrrrrr == "-1")
    {
        ShowMessage ("엘리베이터가 해당 층에 있습니다");
    }
   else if(floor == "1")
   {
           if(floor == "3" || floor == "2" || floor == "1")
        {
                uord = "down";
                Timer1->Enabled=true;
                sfloor = "-1";
        }
        if(floor == "-1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
        //1호기 B1층으로 호출
   }
   else if(floorr == "1")
   {
           if(floorr == "3" || floorr == "2" || floorr == "1")
           {
                uordd = "down";
                Timer2->Enabled=true;
                sfloorr = "-1";
        }
        if(floorr == "-1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //2호기 B1층으로 호출
   }
   else if(floorrr == "1")
   {
        if(floorrr == "3" || floorrr == "2" || floorrr == "1")
        {
                uorddd = "down";
                Timer3->Enabled=true;
                sfloorrr = "-1";
        }
        if(floorrr == "-1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //3호기 B1층으로 호출
   }
   else if(floorrrr == "1")
   {
       if(floorrrr == "3" || floorrrr == "2" || floorrrr == "1")
        {
                uordddd = "down";
                Timer4->Enabled=true;
                sfloorrrr = "-1";
        }
        if(floorrrr == "-1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //4호기 B1층으로 호출
   }
   else if(floorrrrr == "1")
   {
       if(floorrrrr == "3" || floorrrrr == "2" || floorrrrr == "1")
        {
                uorddddd = "down";
                Timer5->Enabled=true;
                sfloorrrrr = "-1";
        }
        if(floorrrrr == "-1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //5호기 B1층으로 호출
   }
   else if(floorrrrrr == "1")
   {
       if(floorrrrrr == "3" || floorrrrrr == "2" || floorrrrrr == "1")
        {
                uordddddd = "down";
                Timer6->Enabled=true;
                sfloorrrrrr = "-1";
        }
        if(floorrrrrr == "-1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //6호기 B1층으로 호출
   }
   else if(floorrrrrrr == "1")
   {
       if(floorrrrrrr == "3" || floorrrrrrr == "2" || floorrrrrrr == "1")
        {
                uorddddddd = "down";
                Timer7->Enabled=true;
                sfloorrrrrrr = "-1";
        }
        if(floorrrrrrr == "-1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //7호기 B1층으로 호출
   }
   else if(floorrrrrrrr == "1")
   {
       if(floorrrrrrrr == "3" || floorrrrrrrr == "2" || floorrrrrrrr == "1")
        {
                uordddddddd = "down";
                Timer8->Enabled=true;
                sfloorrrrrrrr = "-1";
        }
        if(floorrrrrrrr == "-1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //8호기 B1층으로 호출
   }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
   if(parking == 0)
   {
        Timer11->Enabled=true;
        Timer12->Enabled=true;
   }
   else
   {
       ShowMessage("이미 주차권을 뽑았습니다");
   }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer11Timer(TObject *Sender)
{
     if(timer <= 0)
     {
         Timer11->Enabled=false;
         timer = 120;
     if(floor == "-1" || floorr == "-1" || floorrr == "-1" || floorrrr == "-1" || floorrrrr == "-1" || floorrrrrr == "-1" || floorrrrrrr == "-1" || floorrrrrrrr == "-1")
    {
        ShowMessage ("엘리베이터가 해당 층에 있습니다");
    }
        else if(floor == "1")
        {
        if(floor == "3" || floor == "2" || floor == "1")
        {
                uord = "down";
                Timer1->Enabled=true;
                sfloor = "-1";
        }
        if(floor == "-1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
        //1호기 B1층으로 호출
   }
   else if(floorr == "1")
   {
           if(floorr == "3" || floorr == "2" || floorr == "1")
           {
                uordd = "down";
                Timer2->Enabled=true;
                sfloorr = "-1";
        }
        if(floorr == "-1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //2호기 B1층으로 호출
   }
   else if(floorrr == "1")
   {
        if(floorrr == "3" || floorrr == "2" || floorrr == "1")
        {
                uorddd = "down";
                Timer3->Enabled=true;
                sfloorrr = "-1";
        }
        if(floorrr == "-1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //3호기 B1층으로 호출
   }
   else if(floorrrr == "1")
   {
       if(floorrrr == "3" || floorrrr == "2" || floorrrr == "1")
        {
                uordddd = "down";
                Timer4->Enabled=true;
                sfloorrrr = "-1";
        }
        if(floorrrr == "-1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //4호기 B1층으로 호출
   }
   else if(floorrrrr == "1")
   {
       if(floorrrrr == "3" || floorrrrr == "2" || floorrrrr == "1")
        {
                uorddddd = "down";
                Timer5->Enabled=true;
                sfloorrrrr = "-1";
        }
        if(floorrrrr == "-1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //5호기 B1층으로 호출
   }
   else if(floorrrrrr == "1")
   {
       if(floorrrrrr == "3" || floorrrrrr == "2" || floorrrrrr == "1")
        {
                uordddddd = "down";
                Timer6->Enabled=true;
                sfloorrrrrr = "-1";
        }
        if(floorrrrrr == "-1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //6호기 B1층으로 호출
   }
   else if(floorrrrrrr == "1")
   {
       if(floorrrrrrr == "3" || floorrrrrrr == "2" || floorrrrrrr == "1")
        {
                uorddddddd = "down";
                Timer7->Enabled=true;
                sfloorrrrrrr = "-1";
        }
        if(floorrrrrrr == "-1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //7호기 B1층으로 호출
   }
   else if(floorrrrrrrr == "1")
   {
       if(floorrrrrrrr == "3" || floorrrrrrrr == "2" || floorrrrrrrr == "1")
        {
                uordddddddd = "down";
                Timer8->Enabled=true;
                sfloorrrrrrrr = "-1";
        }
        if(floorrrrrrrr == "-1")
        {
                ShowMessage("엘리베이터가 해당 층에 있습니다");
        }
       //8호기 B1층으로 호출
   }
     }
     else
     {
         timer--;
         Label1->Caption = "남은시간 : "+String(timer);
         
     }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer12Timer(TObject *Sender)
{
   if(car >= 768)
   {
       Timer12->Enabled=false;
       car = 8;
       Image2->Left = 8;
   }
   else
   {
       car = car + 5;
       Image2->Left = car;
   }
}

//---------------------------------------------------------------------------

void __fastcall TForm1::Button19Click(TObject *Sender)
{
    if(floorrrrrrrr == "2" || floorrrrrrrr == "1" || floorrrrrrrr == "-1")
    {
        uordddddddd = "up";
        sfloorrrrrrrr = "3";
        Timer8->Enabled=true;
    }
    if(floorrrrrrrr == "3")
    {
        ShowMessage("엘리베이터가 해당 층에 있습니다");
    }        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button20Click(TObject *Sender)
{
    if(floorrrrrrrr == "3")
    {
        uordddddddd = "down";
        Timer8->Enabled=true;
        sfloorrrrrrrr = "2";
    }

    else if(floorrrrrrrr == "1" || floorrrrrrrr == "-1")
    {
        uordddddddd = "up";
        Timer8->Enabled=true;
        sfloorrrrrrrr = "2";
    }
        if(floorrrrrrrr == "2")
    {
        ShowMessage("엘리베이터가 해당 층에 있습니다");
    }        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button21Click(TObject *Sender)
{
    if(floorrrrrrrr == "3")
    {
        uordddddddd = "down";
        Timer8->Enabled=true;
        sfloorrrrrrrr = "2";
    }

    else if(floorrrrrrrr == "1" || floorrrrrrrr == "-1")
    {
        uordddddddd = "up";
        Timer8->Enabled=true;
        sfloorrrrrrrr = "2";
    }
        if(floorrrrrrrr == "2")
    {
        ShowMessage("엘리베이터가 해당 층에 있습니다");
    }        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button22Click(TObject *Sender)
{
        if(floorrrrrrrr == "3" || floorrrrrrrr == "2")
    {
        uordddddddd = "down";
        Timer8->Enabled=true;
        sfloorrrrrrrr = "1";
    }
    else if(floorrrrrrrr == "-1")
    {
        uordddddddd = "up";
        Timer8->Enabled=true;
        sfloorrrrrrrr = "1";
    }
        if(floorrrrrrrr == "1")
    {
        ShowMessage("엘리베이터가 해당 층에 있습니다");
    }        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button23Click(TObject *Sender)
{
        if(floorrrrrrrr == "3" || floorrrrrrrr == "2")
    {
        uordddddddd = "down";
        Timer8->Enabled=true;
        sfloorrrrrrrr = "1";
    }
    else if(floorrrrrrrr == "-1")
    {
        uordddddddd = "up";
        Timer8->Enabled=true;
        sfloorrrrrrrr = "1";
    }
        if(floorrrrrrrr == "1")
    {
        ShowMessage("엘리베이터가 해당 층에 있습니다");
    }        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button24Click(TObject *Sender)
{
    if(floorrrrrrrr == "3" || floorrrrrrrr == "2" || floorrrrrrrr == "1")
    {
        uordddddddd = "down";
        Timer8->Enabled=true;
        sfloorrrrrrrr = "-1";
    }
        if(floorrrrrrrr == "-1")
    {
        ShowMessage("엘리베이터가 해당 층에 있습니다");
    }        
}
//---------------------------------------------------------------------------

