#include "App.h"
#include "Func.h"
#include <time.h>
#define UNICODE

void App::startWS()
{
     struct tm *T;
    time_t t;

    time(&t);
    T = localtime(&t);

    char *week[8]={"日","一","二","三","四","五","六"};
    char *month[40]={"一","二","三","四","五","六","七","八","九","十","十一","十二"};
     FILE *log;
     char str[4096];
     log = fopen("C:\\WSautolog.txt","a");
     log = fopen("D:\\UPSDATA\\WSautolog.txt","a");
    
     HWND WsWin1 = FindWindow(0, "UPS WorldShip - 管理工作站");
     HWND WsWin11 = FindWindow(NULL, "ＵＰＳ　ＷｏｒｌｄＳｈｉｐ　－　Ａｄｍｉｎｉｓｔｒａｔｉｖｅ　Ｗｏｒｋｓｔａｔｉｏｎ");
     HWND WsWin2 = FindWindow(0, "UPS WorldShip - 管理員  [遠程存取被禁用]");
     HWND WsWin12 = FindWindow(NULL, "ＵＰＳ　ＷｏｒｌｄＳｈｉｐ　－　Ａｄｍｉｎ　[　Ｒｅｍｏｔｅ　Ａｃｃｅｓｓ　Ｄｉｓａｂｌｅｄ　]");
     HWND Winrcv = FindWindow(0, "選擇有效收件日期："); 
     if(WsWin1 ==NULL && WsWin2 ==NULL)
     {
          fprintf(log,"%d年/%s月/%d日 - 週%s , Will Start UPS WorldShip.\n",T->tm_year+1900,month[T->tm_mon+1],T->tm_mday,week[T->tm_wday]);
          //fprintf(log,"%d年/%s月/%d日 - 週%s , Will Start UPS WorldShip.\n",T->tm_year+1900,month[T->tm_mon+1],T->tm_mday,week[T->tm_wday]);
          system("start WorldShipTD.exe");
     }
     fprintf(log,"%d年/%s月/%d日 - 週%s , UPS WorldShip Startup completed.\n",T->tm_year+1900,month[T->tm_mon+1],T->tm_mday,week[T->tm_wday]);
     
     fclose(log);
}
void App::WSstart()
{
     Func func;
     struct tm *T;
     time_t t;
     time(&t);
     T = localtime(&t);
     char *week[8]={"日","一","二","三","四","五","六"};
     char *month[40]={"一","二","三","四","五","六","七","八","九","十","十一","十二"};
     FILE *log;
     char str[4096];
     log = fopen("C:\\WSautolog.txt","a");
     log = fopen("D:\\UPSDATA\\WSautolog.txt","a");
     int i,n;
     HWND WsWin1 = FindWindow(0, "UPS WorldShip - 管理工作站");
     HWND WsWin11 = FindWindow(NULL, "UPS WorldShip - Administrative Workstation");
     HWND WsWin2 = FindWindow(0, "UPS WorldShip - 管理員  [遠程存取被禁用]");
     HWND WsWin12 = FindWindow(NULL, "UPS WorldShip - Admin [ Remote Access Disabled ]");
     HWND Winrcv = FindWindow(0, "選擇有效收件日期："); 
     //HWND WSrcv1 = FindWindowExW(0,0,0,"選擇有效收件日期  :");
     fprintf(log,"%d年/%s月/%d日 - 週%s , UPS WorldShp starting.\n",T->tm_year+1900,month[T->tm_mon+1],T->tm_mday,week[T->tm_wday]);
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
     fprintf(log,"%d年/%s月/%d日 - 週%s , UPS WorldShip startup  process completed, transfer to connect to UPS.\n",T->tm_year+1900,month[T->tm_mon+1],T->tm_mday,week[T->tm_wday]);
     fclose(log);
}
void App::conUPS()
{
     Func func;
     struct tm *T;
     time_t t;
     time(&t);
     T = localtime(&t);
     char *week[8]={"日","一","二","三","四","五","六"};
     char *month[40]={"一","二","三","四","五","六","七","八","九","十","十一","十二"};
     FILE *log;
     char str[4096];
     log = fopen("C:\\WSautolog.txt","a");
     log = fopen("D:\\UPSDATA\\WSautolog.txt","a");
     func.mySleep(1);
     //system("pause");
     printf("\n");
     HWND WsWin3 = FindWindow(0, "通訊狀態");//通訊狀態 
     if(WsWin3 != NULL)
    {
              WsWin3 = FindWindow(0, "通訊狀態");
              printf("contect to UPS\n");
              fprintf(log,"%d年/%s月/%d日 - 週%s , UPS WorldShip check yorr connect work\n",T->tm_year+1900,month[T->tm_mon+1],T->tm_mday,week[T->tm_wday]);
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
              fprintf(log,"%d年/%s月/%d日 - 週%s , UPS WorldShip connect work completed.\n",T->tm_year+1900,month[T->tm_mon+1],T->tm_mday,week[T->tm_wday]);
              fclose(log);
    }
}
     
void App::startEOD()
{
     Func func;
     struct tm *T;
     time_t t;
     time(&t);
     T = localtime(&t);
     char *week[8]={"日","一","二","三","四","五","六"};
     char *month[40]={"一","二","三","四","五","六","七","八","九","十","十一","十二"};
     FILE *log;
     char str[4096];
     log = fopen("C:\\WSautolog.txt","a");
     log = fopen("D:\\UPSDATA\\WSautolog.txt","a");
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
              fprintf(log,"%d年/%s月/%d日 - 週%s , UPS WorldShp start EOD\n",T->tm_year+1900,month[T->tm_mon+1],T->tm_mday,week[T->tm_wday]);
              SetForegroundWindow(WsWin1);
              func.GenerateKey(0x7a,TRUE);
              fprintf(log,"%d年/%s月/%d日 - 週%s , UPS WorldShip Startup completed.\n",T->tm_year+1900,month[T->tm_mon+1],T->tm_mday,week[T->tm_wday]);
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
              //printf("Send \"F11\" to your Computer for End Of Day\n");
              func.sec3();
              printf("Will re try End Of Day to check you start EOD process\n");
              fprintf(log,"%d年/%s月/%d日 - 週%s , UPS WorldShip Re Try EOD.\n",T->tm_year+1900,month[T->tm_mon+1],T->tm_mday,week[T->tm_wday]);
              WsWin6 = FindWindow(0, "一天結束處理");
              Winsend = FindWindow(0, "每日總結處理"); 
              func.GenerateKey(0x7a,TRUE);
              if(Winsend != NULL || WsWin6 != NULL)
              {
                        func.sec3();
                        printf("Re Send \"Enter\" to your Computer to confirm End Of Day\n");
                        Winsend = FindWindow(0, "每日總結處理");
                        WsWin6 = FindWindow(0, "一天結束處理");                         
                        func.GenerateKey(0x09,TRUE);
                        func.sec1();
                        Winsend = FindWindow(0, "每日總結處理");
                        WsWin6 = FindWindow(0, "一天結束處理"); 
                        func.GenerateKey(0x0d,TRUE);
                        func.sec1();
                        Winsend = FindWindow(0, "每日總結處理");
                        WsWin6 = FindWindow(0, "一天結束處理"); 
                        func.GenerateKey(0x0d,TRUE);
                        func.sec1();
                        
              }
              fclose(log);
              
    }
    else
    {
              struct tm *T;
     time_t t;
     time(&t);
     T = localtime(&t);
     char *week[8]={"日","一","二","三","四","五","六"};
     char *month[40]={"一","二","三","四","五","六","七","八","九","十","十一","十二"};
     FILE *log;
     char str[4096];
     log = fopen("C:\\WSautolog.txt","a");
     log = fopen("D:\\UPSDATA\\WSautolog.txt","a");
              WsWin2 = FindWindow(0, "UPS WorldShip - 管理員  [遠程存取被禁用]");
              WsWin12 = FindWindow(0, "UPS WorldShip - Admin [ Remote Access Disabled ]");
              WsWin6 = FindWindow(0, "一天結束處理");
              Winsend = FindWindow(0, "每日總結處理");         
              func.sec3();
              printf("Send \"F11\" to your Computer for End Of Day\n");
              fprintf(log,"%d年/%s月/%d日 - 週%s , UPS WorldShp start EOD\n",T->tm_year+1900,month[T->tm_mon+1],T->tm_mday,week[T->tm_wday]);
              SetForegroundWindow(WsWin2);
              func.GenerateKey(0x7a,TRUE);
              func.sec3();
              WsWin6 = FindWindow(0, "一天結束處理");
              Winsend = FindWindow(0, "每日總結處理");
              if(WsWin6 != NULL || Winsend != NULL)
              {
                        printf("Send \"Enter\" to your Computer to confirm End Of Day\n");
                        fprintf(log,"%d年/%s月/%d日 - 週%s , UPS WorldShp Re Try EOD\n",T->tm_year+1900,month[T->tm_mon+1],T->tm_mday,week[T->tm_wday]);
                        WsWin6 = FindWindow(0, "一天結束處理");
                        Winsend = FindWindow(0, "每日總結處理");
                        func.GenerateKey(0x0d,TRUE);
              }
              
              func.sec3();
              printf("Will re try End Of Day to check you start EOD process\n");
              WsWin6 = FindWindow(0, "一天結束處理");
              Winsend = FindWindow(0, "每日總結處理");
              func.GenerateKey(0x7a,TRUE);
              if(Winsend != NULL && WsWin6 != NULL)
              {
                        func.sec3();
                        printf("Re Send \"Enter\" to your Computer to confirm End Of Day\n");
                        Winsend = FindWindow(0, "每日總結處理"); 
                        WsWin6 = FindWindow(0, "一天結束處理");
                        func.GenerateKey(0x09,TRUE);
                        func.sec1();
                        Winsend = FindWindow(0, "每日總結處理");
                        WsWin6 = FindWindow(0, "一天結束處理"); 
                        func.GenerateKey(0x0d,TRUE);
                        func.sec1();
                        Winsend = FindWindow(0, "每日總結處理");
                        WsWin6 = FindWindow(0, "一天結束處理"); 
                        func.GenerateKey(0x0d,TRUE);
                        func.sec1();
                        
              }
              fclose(log);
              
        
    }
}
void App::EODcheck()
{
     Func func;
     struct tm *T;
     time_t t;
     time(&t);
     T = localtime(&t);
     char *week[8]={"日","一","二","三","四","五","六"};
     char *month[40]={"一","二","三","四","五","六","七","八","九","十","十一","十二"};
     FILE *log;
     char str[4096];
     log = fopen("C:\\WSautolog.txt","a");
     log = fopen("D:\\UPSDATA\\WSautolog.txt","a");
     func.mySleep(1);
     HWND WsWin1 = FindWindow(0, "UPS WorldShip - 管理工作站");
     HWND WsWin11 = FindWindow(0, "UPS WorldShip - Administrative Workstation");
     HWND WsWin2 = FindWindow(0, "UPS WorldShip - 管理員  [遠程存取被禁用]");
     HWND WsWin12 = FindWindow(0, "UPS WorldShip - Admin [ Remote Access Disabled ]");
     HWND WsWin6 = FindWindow(0, "一天結束處理");
     HWND Winrcv = FindWindow(0, "選擇有效收件日期：");
     HWND Winsend = FindWindow(0, "每日總結處理"); 
     HWND WsWin4 = FindWindow(0, "UPS WorldShip");
     WsWin4 = FindWindow(0, "UPS WorldShip");
     if(WsWin4 != NULL)
     {
               fprintf(log,"%d年/%s月/%d日 - 週%s , UPS WorldShp connect to UPS\n",T->tm_year+1900,month[T->tm_mon+1],T->tm_mday,week[T->tm_wday]);
               while(WsWin4 != NULL)
               {
                            int i;
                            WsWin4 = FindWindow(0, "UPS WorldShip");
                            for(i=3;i>0;i--)//delay 3 sec
                            {printf(".");Sleep(10);}     
               }
     }
     fprintf(log,"%d年/%s月/%d日 - 週%s , UPS WorldShp connect completed\n",T->tm_year+1900,month[T->tm_mon+1],T->tm_mday,week[T->tm_wday]);
     func.sec3();
     fclose(log);
}
void App::closeWS()
{
     Func func;
     struct tm *T;
     time_t t;
     time(&t);
     T = localtime(&t);
     char *week[8]={"日","一","二","三","四","五","六"};
     char *month[40]={"一","二","三","四","五","六","七","八","九","十","十一","十二"};
     FILE *log;
     char str[4096];
     log = fopen("C:\\WSautolog.txt","a");
     log = fopen("D:\\UPSDATA\\WSautolog.txt","a");
     func.sec3();
     HWND WsWin1 = FindWindow(0, "UPS WorldShip - 管理工作站");
     HWND WsWin2 = FindWindow(0, "UPS WorldShip - 管理員  [遠程存取被禁用]");
     printf("Will Closed your UPS WorldShip\n");
     fprintf(log,"%d年/%s月/%d日 - 週%s , Close your WorldShip\n",T->tm_year+1900,month[T->tm_mon+1],T->tm_mday,week[T->tm_wday]);
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
     fclose(log);
}
void App::RcvCheck()
{
          Func func;
          struct tm *T;
     time_t t;
     time(&t);
     T = localtime(&t);
     char *week[8]={"日","一","二","三","四","五","六"};
     char *month[40]={"一","二","三","四","五","六","七","八","九","十","十一","十二"};
     FILE *log;
     char str[4096];
     log = fopen("C:\\WSautolog.txt","a");
     log = fopen("D:\\UPSDATA\\WSautolog.txt","a");
          //App app;
          HWND Winrcv = FindWindow(0, "選擇有效收件日期：");
          if(Winrcv != NULL)
          {
                    func.GenerateKey(0x0d,FALSE);
                    printf("Set your Recive Date in today\n");
                    fprintf(log,"%d年/%s月/%d日 - 週%s , UPS WorldShp set your receive Date.\n",T->tm_year+1900,month[T->tm_mon+1],T->tm_mday,week[T->tm_wday]);
          }
          
          func.sec1();
          fclose(log);   
}
void App::WSarchive()
{
     int i;
     Func func;
     struct tm *T;
     time_t t;
     time(&t);
     T = localtime(&t);
     char *week[8]={"日","一","二","三","四","五","六"};
     char *month[40]={"一","二","三","四","五","六","七","八","九","十","十一","十二"};
     FILE *log;
     char str[4096];
     log = fopen("C:\\WSautolog.txt","a");
     log = fopen("D:\\UPSDATA\\WSautolog.txt","a");
     func.mySleep(1);
     HWND Wincon = FindWindow(0,"ＵＰＳ　ＷｏｒｌｄＳｈｉｐ");
     HWND Wincon1 = FindWindow(0,"存檔托運");
     //HWND WinCon2 = FindWindow(0,"Save As"); 
     HWND WsWin1 = FindWindow(0, "UPS WorldShip - 管理工作站");
     HWND WsWin2 = FindWindow(0, "UPS WorldShip - 管理員  [遠程存取被禁用]");
     HWND Wincon3 = FindWindow(0,"存檔操作"); 
     if(Wincon != NULL)
     {
               Wincon = FindWindow(0,"ＵＰＳ　ＷｏｒｌｄＳｈｉｐ");
               printf("Will start your Archive process\n");
               fprintf(log,"%d年/%s月/%d日 - 週%s , UPS WorldShp start Archive process\n",T->tm_year+1900,month[T->tm_mon+1],T->tm_mday,week[T->tm_wday]);
               func.GenerateKey(0x0d,TRUE);
               func.sec1();
               Wincon1 = FindWindow(0,"存檔托運"); 
               //printf("Start your Archive process\n");
               func.GenerateKey(0x0d,TRUE);
               func.sec1();
               //WinCon2 = FindWindow(0,"Save As");
               func.GenerateKey(0x0d,TRUE);
               func.mySleep(3);
               Wincon3 = FindWindow(0,"存檔操作"); 
               if(Wincon3 != NULL)
               {
                                 //Wincon3 = FindWindow(0,"存檔操作");
                                 func.GenerateKey(0x0d,TRUE);
                                 func.mySleep(1);
               }
               Wincon1 = FindWindow(0,"存檔托運");
               if(Wincon1 != NULL)
               {
                          while(Wincon1 != NULL)
                          {
                          
                                        Wincon1 = FindWindow(0,"存檔托運");
                                        for(i=3;i>0;i--)//delay 3 sec
                                        {printf(".");Sleep(10);}
                          
                          }
               }
               fprintf(log,"%d年/%s月/%d日 - 週%s , UPS WorldShp Archive completed\n",T->tm_year+1900,month[T->tm_mon+1],T->tm_mday,week[T->tm_wday]);
               func.GenerateKey(0x0d,TRUE);
               func.sec1();
               fclose(log);
     }
               
     
}
