#include "App.h"
#include "Func.h"
#define UNICODE

void App::startWS()
{
     HWND WsWin1 = FindWindow(0, "UPS WorldShip - 管理工作站");
     HWND WsWin11 = FindWindow(NULL, "UPS WorldShip - Administrative Workstation");
     HWND WsWin2 = FindWindow(0, "UPS WorldShip - 管理員  [遠程存取被禁用]");
     HWND WsWin12 = FindWindow(NULL, "UPS WorldShip - Admin [ Remote Access Disabled ]");
     HWND Winrcv = FindWindow(0, "選擇有效收件日期："); 
     if(WsWin1 ==NULL && WsWin2 ==NULL)
     {
          system("start WorldShipTD.exe");
     }
}
void App::WSstart()
{
     Func func;
     int i,n;
     HWND WsWin1 = FindWindow(0, "UPS WorldShip - 管理工作站");
     HWND WsWin11 = FindWindow(NULL, "UPS WorldShip - Administrative Workstation");
     HWND WsWin2 = FindWindow(0, "UPS WorldShip - 管理員  [遠程存取被禁用]");
     HWND WsWin12 = FindWindow(NULL, "UPS WorldShip - Admin [ Remote Access Disabled ]");
     HWND Winrcv = FindWindow(0, "選擇有效收件日期："); 
     //HWND WSrcv1 = FindWindowExW(0,0,0,"選擇有效收件日期  :");
     while (WsWin1 == NULL && WsWin2 == NULL && Winrcv == NULL)
     {
                //system("start WorldShipTD.exe");
                for(i=3;i>0;i--)//delay 3 sec
                {printf(".");Sleep(10);}
                WsWin1 = FindWindow(0, "UPS WorldShip - 管理工作站");
                for(i=3;i>0;i--)//delay 3 sec
                {printf(".");Sleep(10);}
                WsWin2 = FindWindow(0, "UPS WorldShip - 管理員  [遠程存取被禁用]");
                for(i=3;i>0;i--)//delay 3 sec
                {printf(".");Sleep(10);}
                Winrcv = FindWindow(0, "選擇有效收件日期：");
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
     HWND WsWin3 = FindWindow(0, "通訊狀態");//通訊狀態 
     if(WsWin3 != NULL)
    {
              WsWin3 = FindWindow(0, "通訊狀態");
              printf("contect to UPS\n");
              while(WsWin3!= NULL)
              {
                       int i;
                       //printf("contect to UPS\n");
                       for(i=3;i>0;i--)//delay 3 sec
                       {printf(".");Sleep(10);}
                       WsWin3 = FindWindow(0, "通訊狀態");
                       for(i=3;i>0;i--)//delay 3 sec
                       {printf(".");Sleep(10);}
                       WsWin3 = FindWindow(0, "通訊狀態");
                       for(i=3;i>0;i--)//delay 3 sec
                       {printf(".");Sleep(10);}
              }
    }
}
     
void App::startEOD()
{
     Func func;
     HWND WsWin1 = FindWindow(0, "UPS WorldShip - 管理工作站");
     HWND WsWin11 = FindWindow(0, "UPS WorldShip - Administrative Workstation");
     HWND WsWin2 = FindWindow(0, "UPS WorldShip - 管理員  [遠程存取被禁用]");
     HWND WsWin12 = FindWindow(0, "UPS WorldShip - Admin [ Remote Access Disabled ]");
     HWND WsWin6 = FindWindow(0, "一天結束處理");
     HWND Winrcv = FindWindow(0, "選擇有效收件日期：");
     HWND Winsend = FindWindow(0, "每日總結處理"); 
     printf("Will Start UPS WorldShip\n");
     printf("End Of Day\n");
    if(WsWin1 != NULL && WsWin2 == NULL)
    {
              WsWin1 = FindWindow(0, "UPS WorldShip - 管理工作站");
              WsWin11 = FindWindow(0, "UPS WorldShip - Administrative Workstation");
              
              func.sec3();
              printf("Send \"F11\" to your Computer for End Of Day\n");
              SetForegroundWindow(WsWin1);
              func.GenerateKey(0x7a,TRUE);
              func.sec3();
              WsWin6 = FindWindow(0, "一天結束處理");
              Winsend = FindWindow(0, "每日總結處理");
              if(WsWin6 !=NULL || Winsend != NULL)
              {
                        printf("Send \"Enter\" to your Computer to confirm End Of Day\n");
                        WsWin6 = FindWindow(0, "一天結束處理");
                        Winsend = FindWindow(0, "每日總結處理");
                        func.GenerateKey(0x0d,TRUE);
              }
              
              func.sec3();
              WsWin6 = FindWindow(0, "一天結束處理");
              Winsend = FindWindow(0, "每日總結處理"); 
              func.GenerateKey(0x7a,TRUE);
              if(Winsend != NULL)
              {
                        func.sec3();
                        printf("Re Send \"Enter\" to your Computer to confirm End Of Day\n");
                        //Winsend = FindWindow(0, "每日總結處理"); 
//                        func.GenerateKey(0x0d,TRUE);
//                        func.sec1();
                        Winsend = FindWindow(0, "每日總結處理"); 
                        func.GenerateKey(0x09,TRUE);
                        func.sec1();
                        Winsend = FindWindow(0, "每日總結處理"); 
                        func.GenerateKey(0x0d,TRUE);
                        func.sec1();
                        Winsend = FindWindow(0, "每日總結處理"); 
                        func.GenerateKey(0x0d,TRUE);
                        func.sec1();
                        
              }
    }
    else
    {
              WsWin2 = FindWindow(0, "UPS WorldShip - 管理員  [遠程存取被禁用]");
              WsWin12 = FindWindow(0, "UPS WorldShip - Admin [ Remote Access Disabled ]");
              WsWin6 = FindWindow(0, "一天結束處理");
              Winsend = FindWindow(0, "每日總結處理");         
              func.sec3();
              printf("Send \"F11\" to your Computer for End Of Day\n");
              SetForegroundWindow(WsWin2);
              func.GenerateKey(0x7a,TRUE);
              func.sec3();
              WsWin6 = FindWindow(0, "一天結束處理");
              Winsend = FindWindow(0, "每日總結處理");
              if(WsWin6 != NULL || Winsend != NULL)
              {
                        printf("Send \"Enter\" to your Computer to confirm End Of Day\n");
                        WsWin6 = FindWindow(0, "一天結束處理");
                        Winsend = FindWindow(0, "每日總結處理");
                        func.GenerateKey(0x0d,TRUE);
              }
              
              func.sec3();
              WsWin6 = FindWindow(0, "一天結束處理");
              Winsend = FindWindow(0, "每日總結處理");
              func.GenerateKey(0x7a,TRUE);
              if(Winsend != NULL)
              {
                        func.sec3();
                        printf("Re Send \"Enter\" to your Computer to confirm End Of Day\n");
                        //Winsend = FindWindow(0, "每日總結處理"); 
//                        func.GenerateKey(0x0d,TRUE);
//                        func.sec1();
                        Winsend = FindWindow(0, "每日總結處理"); 
                        func.GenerateKey(0x09,TRUE);
                        func.sec1();
                        Winsend = FindWindow(0, "每日總結處理"); 
                        func.GenerateKey(0x0d,TRUE);
                        func.sec1();
                        Winsend = FindWindow(0, "每日總結處理"); 
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
     HWND WsWin1 = FindWindow(0, "UPS WorldShip - 管理工作站");
     HWND WsWin2 = FindWindow(0, "UPS WorldShip - 管理員  [遠程存取被禁用]");
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
          HWND Winrcv = FindWindow(0, "選擇有效收件日期：");
          if(Winrcv != NULL)
          {
                    func.GenerateKey(0x0d,FALSE);
                    printf("Set your Recive Date in today\n");
          }
          
          func.sec1();   
}
