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

    char *week[8]={"��","�@","�G","�T","�|","��","��"};
    char *month[40]={"�@","�G","�T","�|","��","��","�C","�K","�E","�Q","�Q�@","�Q�G"};
     FILE *log;
     char str[4096];
     log = fopen("C:\\WSautolog.txt","a");
     log = fopen("D:\\UPSDATA\\WSautolog.txt","a");
    
     HWND WsWin1 = FindWindow(0, "UPS WorldShip - �޲z�u�@��");
     HWND WsWin11 = FindWindow(NULL, "��ޢ�@��������������@�С@�Ϣ��������������������@������������������");
     HWND WsWin2 = FindWindow(0, "UPS WorldShip - �޲z��  [���{�s���Q�T��]");
     HWND WsWin12 = FindWindow(NULL, "��ޢ�@��������������@�С@�Ϣ������@[�@����������@�Ϣ�������@�Ң���������@]");
     HWND Winrcv = FindWindow(0, "��ܦ��Ħ������G"); 
     if(WsWin1 ==NULL && WsWin2 ==NULL)
     {
          fprintf(log,"%d�~/%s��/%d�� - �g%s , Will Start UPS WorldShip.\n",T->tm_year+1900,month[T->tm_mon+1],T->tm_mday,week[T->tm_wday]);
          //fprintf(log,"%d�~/%s��/%d�� - �g%s , Will Start UPS WorldShip.\n",T->tm_year+1900,month[T->tm_mon+1],T->tm_mday,week[T->tm_wday]);
          system("start WorldShipTD.exe");
     }
     fprintf(log,"%d�~/%s��/%d�� - �g%s , UPS WorldShip Startup completed.\n",T->tm_year+1900,month[T->tm_mon+1],T->tm_mday,week[T->tm_wday]);
     
     fclose(log);
}
void App::WSstart()
{
     Func func;
     struct tm *T;
     time_t t;
     time(&t);
     T = localtime(&t);
     char *week[8]={"��","�@","�G","�T","�|","��","��"};
     char *month[40]={"�@","�G","�T","�|","��","��","�C","�K","�E","�Q","�Q�@","�Q�G"};
     FILE *log;
     char str[4096];
     log = fopen("C:\\WSautolog.txt","a");
     log = fopen("D:\\UPSDATA\\WSautolog.txt","a");
     int i,n;
     HWND WsWin1 = FindWindow(0, "UPS WorldShip - �޲z�u�@��");
     HWND WsWin11 = FindWindow(NULL, "UPS WorldShip - Administrative Workstation");
     HWND WsWin2 = FindWindow(0, "UPS WorldShip - �޲z��  [���{�s���Q�T��]");
     HWND WsWin12 = FindWindow(NULL, "UPS WorldShip - Admin [ Remote Access Disabled ]");
     HWND Winrcv = FindWindow(0, "��ܦ��Ħ������G"); 
     //HWND WSrcv1 = FindWindowExW(0,0,0,"��ܦ��Ħ�����  :");
     fprintf(log,"%d�~/%s��/%d�� - �g%s , UPS WorldShp starting.\n",T->tm_year+1900,month[T->tm_mon+1],T->tm_mday,week[T->tm_wday]);
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
     fprintf(log,"%d�~/%s��/%d�� - �g%s , UPS WorldShip startup  process completed, transfer to connect to UPS.\n",T->tm_year+1900,month[T->tm_mon+1],T->tm_mday,week[T->tm_wday]);
     fclose(log);
}
void App::conUPS()
{
     Func func;
     struct tm *T;
     time_t t;
     time(&t);
     T = localtime(&t);
     char *week[8]={"��","�@","�G","�T","�|","��","��"};
     char *month[40]={"�@","�G","�T","�|","��","��","�C","�K","�E","�Q","�Q�@","�Q�G"};
     FILE *log;
     char str[4096];
     log = fopen("C:\\WSautolog.txt","a");
     log = fopen("D:\\UPSDATA\\WSautolog.txt","a");
     func.mySleep(1);
     //system("pause");
     printf("\n");
     HWND WsWin3 = FindWindow(0, "�q�T���A");//�q�T���A 
     if(WsWin3 != NULL)
    {
              WsWin3 = FindWindow(0, "�q�T���A");
              printf("contect to UPS\n");
              fprintf(log,"%d�~/%s��/%d�� - �g%s , UPS WorldShip check yorr connect work\n",T->tm_year+1900,month[T->tm_mon+1],T->tm_mday,week[T->tm_wday]);
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
              fprintf(log,"%d�~/%s��/%d�� - �g%s , UPS WorldShip connect work completed.\n",T->tm_year+1900,month[T->tm_mon+1],T->tm_mday,week[T->tm_wday]);
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
     char *week[8]={"��","�@","�G","�T","�|","��","��"};
     char *month[40]={"�@","�G","�T","�|","��","��","�C","�K","�E","�Q","�Q�@","�Q�G"};
     FILE *log;
     char str[4096];
     log = fopen("C:\\WSautolog.txt","a");
     log = fopen("D:\\UPSDATA\\WSautolog.txt","a");
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
              fprintf(log,"%d�~/%s��/%d�� - �g%s , UPS WorldShp start EOD\n",T->tm_year+1900,month[T->tm_mon+1],T->tm_mday,week[T->tm_wday]);
              SetForegroundWindow(WsWin1);
              func.GenerateKey(0x7a,TRUE);
              fprintf(log,"%d�~/%s��/%d�� - �g%s , UPS WorldShip Startup completed.\n",T->tm_year+1900,month[T->tm_mon+1],T->tm_mday,week[T->tm_wday]);
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
              //printf("Send \"F11\" to your Computer for End Of Day\n");
              func.sec3();
              printf("Will re try End Of Day to check you start EOD process\n");
              fprintf(log,"%d�~/%s��/%d�� - �g%s , UPS WorldShip Re Try EOD.\n",T->tm_year+1900,month[T->tm_mon+1],T->tm_mday,week[T->tm_wday]);
              WsWin6 = FindWindow(0, "�@�ѵ����B�z");
              Winsend = FindWindow(0, "�C���`���B�z"); 
              func.GenerateKey(0x7a,TRUE);
              if(Winsend != NULL || WsWin6 != NULL)
              {
                        func.sec3();
                        printf("Re Send \"Enter\" to your Computer to confirm End Of Day\n");
                        Winsend = FindWindow(0, "�C���`���B�z");
                        WsWin6 = FindWindow(0, "�@�ѵ����B�z");                         
                        func.GenerateKey(0x09,TRUE);
                        func.sec1();
                        Winsend = FindWindow(0, "�C���`���B�z");
                        WsWin6 = FindWindow(0, "�@�ѵ����B�z"); 
                        func.GenerateKey(0x0d,TRUE);
                        func.sec1();
                        Winsend = FindWindow(0, "�C���`���B�z");
                        WsWin6 = FindWindow(0, "�@�ѵ����B�z"); 
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
     char *week[8]={"��","�@","�G","�T","�|","��","��"};
     char *month[40]={"�@","�G","�T","�|","��","��","�C","�K","�E","�Q","�Q�@","�Q�G"};
     FILE *log;
     char str[4096];
     log = fopen("C:\\WSautolog.txt","a");
     log = fopen("D:\\UPSDATA\\WSautolog.txt","a");
              WsWin2 = FindWindow(0, "UPS WorldShip - �޲z��  [���{�s���Q�T��]");
              WsWin12 = FindWindow(0, "UPS WorldShip - Admin [ Remote Access Disabled ]");
              WsWin6 = FindWindow(0, "�@�ѵ����B�z");
              Winsend = FindWindow(0, "�C���`���B�z");         
              func.sec3();
              printf("Send \"F11\" to your Computer for End Of Day\n");
              fprintf(log,"%d�~/%s��/%d�� - �g%s , UPS WorldShp start EOD\n",T->tm_year+1900,month[T->tm_mon+1],T->tm_mday,week[T->tm_wday]);
              SetForegroundWindow(WsWin2);
              func.GenerateKey(0x7a,TRUE);
              func.sec3();
              WsWin6 = FindWindow(0, "�@�ѵ����B�z");
              Winsend = FindWindow(0, "�C���`���B�z");
              if(WsWin6 != NULL || Winsend != NULL)
              {
                        printf("Send \"Enter\" to your Computer to confirm End Of Day\n");
                        fprintf(log,"%d�~/%s��/%d�� - �g%s , UPS WorldShp Re Try EOD\n",T->tm_year+1900,month[T->tm_mon+1],T->tm_mday,week[T->tm_wday]);
                        WsWin6 = FindWindow(0, "�@�ѵ����B�z");
                        Winsend = FindWindow(0, "�C���`���B�z");
                        func.GenerateKey(0x0d,TRUE);
              }
              
              func.sec3();
              printf("Will re try End Of Day to check you start EOD process\n");
              WsWin6 = FindWindow(0, "�@�ѵ����B�z");
              Winsend = FindWindow(0, "�C���`���B�z");
              func.GenerateKey(0x7a,TRUE);
              if(Winsend != NULL && WsWin6 != NULL)
              {
                        func.sec3();
                        printf("Re Send \"Enter\" to your Computer to confirm End Of Day\n");
                        Winsend = FindWindow(0, "�C���`���B�z"); 
                        WsWin6 = FindWindow(0, "�@�ѵ����B�z");
                        func.GenerateKey(0x09,TRUE);
                        func.sec1();
                        Winsend = FindWindow(0, "�C���`���B�z");
                        WsWin6 = FindWindow(0, "�@�ѵ����B�z"); 
                        func.GenerateKey(0x0d,TRUE);
                        func.sec1();
                        Winsend = FindWindow(0, "�C���`���B�z");
                        WsWin6 = FindWindow(0, "�@�ѵ����B�z"); 
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
     char *week[8]={"��","�@","�G","�T","�|","��","��"};
     char *month[40]={"�@","�G","�T","�|","��","��","�C","�K","�E","�Q","�Q�@","�Q�G"};
     FILE *log;
     char str[4096];
     log = fopen("C:\\WSautolog.txt","a");
     log = fopen("D:\\UPSDATA\\WSautolog.txt","a");
     func.mySleep(1);
     HWND WsWin1 = FindWindow(0, "UPS WorldShip - �޲z�u�@��");
     HWND WsWin11 = FindWindow(0, "UPS WorldShip - Administrative Workstation");
     HWND WsWin2 = FindWindow(0, "UPS WorldShip - �޲z��  [���{�s���Q�T��]");
     HWND WsWin12 = FindWindow(0, "UPS WorldShip - Admin [ Remote Access Disabled ]");
     HWND WsWin6 = FindWindow(0, "�@�ѵ����B�z");
     HWND Winrcv = FindWindow(0, "��ܦ��Ħ������G");
     HWND Winsend = FindWindow(0, "�C���`���B�z"); 
     HWND WsWin4 = FindWindow(0, "UPS WorldShip");
     WsWin4 = FindWindow(0, "UPS WorldShip");
     if(WsWin4 != NULL)
     {
               fprintf(log,"%d�~/%s��/%d�� - �g%s , UPS WorldShp connect to UPS\n",T->tm_year+1900,month[T->tm_mon+1],T->tm_mday,week[T->tm_wday]);
               while(WsWin4 != NULL)
               {
                            int i;
                            WsWin4 = FindWindow(0, "UPS WorldShip");
                            for(i=3;i>0;i--)//delay 3 sec
                            {printf(".");Sleep(10);}     
               }
     }
     fprintf(log,"%d�~/%s��/%d�� - �g%s , UPS WorldShp connect completed\n",T->tm_year+1900,month[T->tm_mon+1],T->tm_mday,week[T->tm_wday]);
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
     char *week[8]={"��","�@","�G","�T","�|","��","��"};
     char *month[40]={"�@","�G","�T","�|","��","��","�C","�K","�E","�Q","�Q�@","�Q�G"};
     FILE *log;
     char str[4096];
     log = fopen("C:\\WSautolog.txt","a");
     log = fopen("D:\\UPSDATA\\WSautolog.txt","a");
     func.sec3();
     HWND WsWin1 = FindWindow(0, "UPS WorldShip - �޲z�u�@��");
     HWND WsWin2 = FindWindow(0, "UPS WorldShip - �޲z��  [���{�s���Q�T��]");
     printf("Will Closed your UPS WorldShip\n");
     fprintf(log,"%d�~/%s��/%d�� - �g%s , Close your WorldShip\n",T->tm_year+1900,month[T->tm_mon+1],T->tm_mday,week[T->tm_wday]);
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
     char *week[8]={"��","�@","�G","�T","�|","��","��"};
     char *month[40]={"�@","�G","�T","�|","��","��","�C","�K","�E","�Q","�Q�@","�Q�G"};
     FILE *log;
     char str[4096];
     log = fopen("C:\\WSautolog.txt","a");
     log = fopen("D:\\UPSDATA\\WSautolog.txt","a");
          //App app;
          HWND Winrcv = FindWindow(0, "��ܦ��Ħ������G");
          if(Winrcv != NULL)
          {
                    func.GenerateKey(0x0d,FALSE);
                    printf("Set your Recive Date in today\n");
                    fprintf(log,"%d�~/%s��/%d�� - �g%s , UPS WorldShp set your receive Date.\n",T->tm_year+1900,month[T->tm_mon+1],T->tm_mday,week[T->tm_wday]);
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
     char *week[8]={"��","�@","�G","�T","�|","��","��"};
     char *month[40]={"�@","�G","�T","�|","��","��","�C","�K","�E","�Q","�Q�@","�Q�G"};
     FILE *log;
     char str[4096];
     log = fopen("C:\\WSautolog.txt","a");
     log = fopen("D:\\UPSDATA\\WSautolog.txt","a");
     func.mySleep(1);
     HWND Wincon = FindWindow(0,"��ޢ�@�������������");
     HWND Wincon1 = FindWindow(0,"�s�ɦ��B");
     //HWND WinCon2 = FindWindow(0,"Save As"); 
     HWND WsWin1 = FindWindow(0, "UPS WorldShip - �޲z�u�@��");
     HWND WsWin2 = FindWindow(0, "UPS WorldShip - �޲z��  [���{�s���Q�T��]");
     HWND Wincon3 = FindWindow(0,"�s�ɾާ@"); 
     if(Wincon != NULL)
     {
               Wincon = FindWindow(0,"��ޢ�@�������������");
               printf("Will start your Archive process\n");
               fprintf(log,"%d�~/%s��/%d�� - �g%s , UPS WorldShp start Archive process\n",T->tm_year+1900,month[T->tm_mon+1],T->tm_mday,week[T->tm_wday]);
               func.GenerateKey(0x0d,TRUE);
               func.sec1();
               Wincon1 = FindWindow(0,"�s�ɦ��B"); 
               //printf("Start your Archive process\n");
               func.GenerateKey(0x0d,TRUE);
               func.sec1();
               //WinCon2 = FindWindow(0,"Save As");
               func.GenerateKey(0x0d,TRUE);
               func.mySleep(3);
               Wincon3 = FindWindow(0,"�s�ɾާ@"); 
               if(Wincon3 != NULL)
               {
                                 //Wincon3 = FindWindow(0,"�s�ɾާ@");
                                 func.GenerateKey(0x0d,TRUE);
                                 func.mySleep(1);
               }
               Wincon1 = FindWindow(0,"�s�ɦ��B");
               if(Wincon1 != NULL)
               {
                          while(Wincon1 != NULL)
                          {
                          
                                        Wincon1 = FindWindow(0,"�s�ɦ��B");
                                        for(i=3;i>0;i--)//delay 3 sec
                                        {printf(".");Sleep(10);}
                          
                          }
               }
               fprintf(log,"%d�~/%s��/%d�� - �g%s , UPS WorldShp Archive completed\n",T->tm_year+1900,month[T->tm_mon+1],T->tm_mday,week[T->tm_wday]);
               func.GenerateKey(0x0d,TRUE);
               func.sec1();
               fclose(log);
     }
               
     
}
