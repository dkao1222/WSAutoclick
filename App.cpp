#include "App.h"
#include "Func.h"
#define UNICODE

void App::startWS()
{
     HWND WsWin1 = FindWindow(0, "UPS WorldShip - �޲z�u�@��");
     HWND WsWin11 = FindWindow(NULL, "UPS WorldShip - Administrative Workstation");
     HWND WsWin2 = FindWindow(0, "UPS WorldShip - �޲z��  [���{�s���Q�T��]");
     HWND WsWin12 = FindWindow(NULL, "UPS WorldShip - Admin [ Remote Access Disabled ]");
     HWND Winrcv = FindWindow(0, "��ܦ��Ħ������G"); 
     if(WsWin1 ==NULL && WsWin2 ==NULL)
     {
          system("start WorldShipTD.exe");
     }
}
void App::WSstart()
{
     Func func;
     int i,n;
     HWND WsWin1 = FindWindow(0, "UPS WorldShip - �޲z�u�@��");
     HWND WsWin11 = FindWindow(NULL, "UPS WorldShip - Administrative Workstation");
     HWND WsWin2 = FindWindow(0, "UPS WorldShip - �޲z��  [���{�s���Q�T��]");
     HWND WsWin12 = FindWindow(NULL, "UPS WorldShip - Admin [ Remote Access Disabled ]");
     HWND Winrcv = FindWindow(0, "��ܦ��Ħ������G"); 
     //HWND WSrcv1 = FindWindowExW(0,0,0,"��ܦ��Ħ�����  :");
     while (WsWin1 == NULL && WsWin2 == NULL && Winrcv == NULL)
     {
                //system("start WorldShipTD.exe");
                for(i=3;i>0;i--)//delay 3 sec
                {printf(".");Sleep(10);}
                WsWin1 = FindWindow(0, "UPS WorldShip - �޲z�u�@��");
                for(i=3;i>0;i--)//delay 3 sec
                {printf(".");Sleep(10);}
                WsWin2 = FindWindow(0, "UPS WorldShip - �޲z��  [���{�s���Q�T��]");
                for(i=3;i>0;i--)//delay 3 sec
                {printf(".");Sleep(10);}
                Winrcv = FindWindow(0, "��ܦ��Ħ������G");
                for(i=3;i>0;i--)//delay 3 sec
                {printf(".");Sleep(10);}
     }
     
}
void App::conUPS()
{
     Func func;
     func.mySleep(1);
     //system("pause");
     printf("\n");
     HWND WsWin3 = FindWindow(0, "�q�T���A");//�q�T���A 
     if(WsWin3 != NULL)
    {
              WsWin3 = FindWindow(0, "�q�T���A");
              printf("contect to UPS\n");
              while(WsWin3!= NULL)
              {
                       int i;
                       //printf("contect to UPS\n");
                       for(i=3;i>0;i--)//delay 3 sec
                       {printf(".");Sleep(10);}
                       WsWin3 = FindWindow(0, "�q�T���A");
                       for(i=3;i>0;i--)//delay 3 sec
                       {printf(".");Sleep(10);}
                       WsWin3 = FindWindow(0, "�q�T���A");
                       for(i=3;i>0;i--)//delay 3 sec
                       {printf(".");Sleep(10);}
              }
    }
}
     
void App::startEOD()
{
     Func func;
     HWND WsWin1 = FindWindow(0, "UPS WorldShip - �޲z�u�@��");
     HWND WsWin11 = FindWindow(0, "UPS WorldShip - Administrative Workstation");
     HWND WsWin2 = FindWindow(0, "UPS WorldShip - �޲z��  [���{�s���Q�T��]");
     HWND WsWin12 = FindWindow(0, "UPS WorldShip - Admin [ Remote Access Disabled ]");
     HWND WsWin6 = FindWindow(0, "�@�ѵ����B�z");
     HWND Winrcv = FindWindow(0, "��ܦ��Ħ������G");
     HWND Winsend = FindWindow(0, "�C���`���B�z"); 
     printf("Will Start UPS WorldShip\n");
     printf("End Of Day\n");
    if(WsWin1 != NULL && WsWin2 == NULL)
    {
              WsWin1 = FindWindow(0, "UPS WorldShip - �޲z�u�@��");
              WsWin11 = FindWindow(0, "UPS WorldShip - Administrative Workstation");
              
              func.sec3();
              printf("Send \"F11\" to your Computer for End Of Day\n");
              SetForegroundWindow(WsWin1);
              func.GenerateKey(0x7a,TRUE);
              func.sec3();
              WsWin6 = FindWindow(0, "�@�ѵ����B�z");
              Winsend = FindWindow(0, "�C���`���B�z");
              if(WsWin6 !=NULL || Winsend != NULL)
              {
                        printf("Send \"Enter\" to your Computer to confirm End Of Day\n");
                        WsWin6 = FindWindow(0, "�@�ѵ����B�z");
                        Winsend = FindWindow(0, "�C���`���B�z");
                        func.GenerateKey(0x0d,TRUE);
              }
              
              func.sec3();
              WsWin6 = FindWindow(0, "�@�ѵ����B�z");
              Winsend = FindWindow(0, "�C���`���B�z"); 
              func.GenerateKey(0x7a,TRUE);
              if(Winsend != NULL)
              {
                        func.sec3();
                        printf("Re Send \"Enter\" to your Computer to confirm End Of Day\n");
                        //Winsend = FindWindow(0, "�C���`���B�z"); 
//                        func.GenerateKey(0x0d,TRUE);
//                        func.sec1();
                        Winsend = FindWindow(0, "�C���`���B�z"); 
                        func.GenerateKey(0x09,TRUE);
                        func.sec1();
                        Winsend = FindWindow(0, "�C���`���B�z"); 
                        func.GenerateKey(0x0d,TRUE);
                        func.sec1();
                        Winsend = FindWindow(0, "�C���`���B�z"); 
                        func.GenerateKey(0x0d,TRUE);
                        func.sec1();
                        
              }
    }
    else
    {
              WsWin2 = FindWindow(0, "UPS WorldShip - �޲z��  [���{�s���Q�T��]");
              WsWin12 = FindWindow(0, "UPS WorldShip - Admin [ Remote Access Disabled ]");
              WsWin6 = FindWindow(0, "�@�ѵ����B�z");
              Winsend = FindWindow(0, "�C���`���B�z");         
              func.sec3();
              printf("Send \"F11\" to your Computer for End Of Day\n");
              SetForegroundWindow(WsWin2);
              func.GenerateKey(0x7a,TRUE);
              func.sec3();
              WsWin6 = FindWindow(0, "�@�ѵ����B�z");
              Winsend = FindWindow(0, "�C���`���B�z");
              if(WsWin6 != NULL || Winsend != NULL)
              {
                        printf("Send \"Enter\" to your Computer to confirm End Of Day\n");
                        WsWin6 = FindWindow(0, "�@�ѵ����B�z");
                        Winsend = FindWindow(0, "�C���`���B�z");
                        func.GenerateKey(0x0d,TRUE);
              }
              
              func.sec3();
              WsWin6 = FindWindow(0, "�@�ѵ����B�z");
              Winsend = FindWindow(0, "�C���`���B�z");
              func.GenerateKey(0x7a,TRUE);
              if(Winsend != NULL)
              {
                        func.sec3();
                        printf("Re Send \"Enter\" to your Computer to confirm End Of Day\n");
                        //Winsend = FindWindow(0, "�C���`���B�z"); 
//                        func.GenerateKey(0x0d,TRUE);
//                        func.sec1();
                        Winsend = FindWindow(0, "�C���`���B�z"); 
                        func.GenerateKey(0x09,TRUE);
                        func.sec1();
                        Winsend = FindWindow(0, "�C���`���B�z"); 
                        func.GenerateKey(0x0d,TRUE);
                        func.sec1();
                        Winsend = FindWindow(0, "�C���`���B�z"); 
                        func.GenerateKey(0x0d,TRUE);
                        func.sec1();
                        
              }
        
    }
}
void App::EODcheck()
{
     Func func;
     func.sec1();
     HWND WsWin4 = FindWindow(0, "UPS WorldShip");
     while(WsWin4 != NULL)
     {
            int i;
            WsWin4 = FindWindow(0, "UPS WorldShip");
            for(i=3;i>0;i--)//delay 3 sec
            {printf(".");Sleep(10);}     
     }
     func.sec3();
}
void App::closeWS()
{
     Func func;
     func.sec3();
     HWND WsWin1 = FindWindow(0, "UPS WorldShip - �޲z�u�@��");
     HWND WsWin2 = FindWindow(0, "UPS WorldShip - �޲z��  [���{�s���Q�T��]");
     printf("Will Closed your UPS WorldShip\n");
     if(WsWin1 != NULL && WsWin2 == NULL)
     {
               SetForegroundWindow(WsWin1);
               func.GenerateKey(0x7b,TRUE);
               func.sec3();
               func.GenerateKey(0x0d,TRUE);
               func.sec3();
               printf("Thank you\n");
     }
     else
     {
               SetForegroundWindow(WsWin2);
               func.GenerateKey(0x7b,TRUE);
               func.sec3();
               func.GenerateKey(0x0d,TRUE);
               func.sec3();
               printf("Thank you\n");
     }
}
void App::RcvCheck()
{
          Func func;
          App app;
          HWND Winrcv = FindWindow(0, "��ܦ��Ħ������G");
          if(Winrcv != NULL)
          {
                    func.GenerateKey(0x0d,FALSE);
                    printf("Set your Recive Date in today\n");
          }
          
          func.sec1();   
}
