#include "App.h"
#include "Func.h"

void App::WSstart()
{
     Func func;
     int i;
     HWND WsWin1 = FindWindow(0, "UPS WorldShip - �޲z�u�@��");
     HWND WsWin2 = FindWindow(0, "UPS WorldShip - �޲z��  [���{�s���Q�T��]");
     HWND WsWin7 = FindWindow(0, "��ܦ��Ħ����� :");
     while (WsWin1 == NULL && WsWin2 == NULL)
     {
                system("start WorldShipTD.exe");
                for(i=3;i>0;i--)//delay 3 sec
                {printf(".");Sleep(10);}
                WsWin1 = FindWindow(0, "UPS WorldShip - �޲z�u�@��");
                for(i=3;i>0;i--)//delay 3 sec
                {printf(".");Sleep(10);}
                WsWin2 = FindWindow(0, "UPS WorldShip - �޲z��  [���{�s���Q�T��]");
                for(i=3;i>0;i--)//delay 3 sec
                {printf(".");Sleep(10);}
                
                //printf("\n");
     }
     func.mySleep(1);
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
     HWND WsWin2 = FindWindow(0, "UPS WorldShip - �޲z��  [���{�s���Q�T��]");
     HWND WsWin6 = FindWindow(0, "�@�ѵ����B�z");
     printf("Will Start UPS WorldShip\n");
     printf("End Of Day\n");
    if(WsWin1 != NULL && WsWin2 == NULL)
    {
              WsWin1 = FindWindow(0, "UPS WorldShip - �޲z�u�@��");
              
              func.sec3();
              printf("Send \"F11\" to your Computer for End Of Day\n");
              SetForegroundWindow(WsWin1);
              func.GenerateKey(0x7a,TRUE);
              func.sec3();
              WsWin6 = FindWindow(0, "�@�ѵ����B�z");
              if(WsWin6 !=NULL)
              {
                        printf("Send \"Enter\" to your Computer to confirm End Of Day\n");
                        SetForegroundWindow(WsWin6);
                        func.GenerateKey(0x0d,TRUE);
              }
              
    }
    else
    {
              WsWin2 = FindWindow(0, "UPS WorldShip - �޲z��  [���{�s���Q�T��]");
              
              func.sec3();
              printf("Send \"F11\" to your Computer for End Of Day\n");
              SetForegroundWindow(WsWin2);
              func.GenerateKey(0x7a,TRUE);
              func.sec3();
              WsWin6 = FindWindow(0, "�@�ѵ����B�z");
              if(WsWin6 != NULL)
              {
                        printf("Send \"Enter\" to your Computer to confirm End Of Day\n");
                        SetForegroundWindow(WsWin6);
                        func.GenerateKey(0x0d,TRUE);
              }
        
    }
}
void App::EODcheck()
{
     HWND WsWin4 = FindWindow(0, "UPS WorldShip");
     while(WsWin4 != NULL)
     {
            int i;
            WsWin4 = FindWindow(0, "UPS WorldShip");
            for(i=3;i>0;i--)//delay 3 sec
            {printf(".");Sleep(10);}     
     }
}
void App::closeWS()
{
     Func func;
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
         
