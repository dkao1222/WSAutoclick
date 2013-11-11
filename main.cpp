#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <time.h>
#include "Func.h"
#include "Note.h"
#include "App.h"

using namespace std;

int main(int argc, char *argv[])
{
    Func func;
    Note note;
    App app;
    note.verInfo();
    struct tm *T;
    time_t t;

    time(&t);
    T = localtime(&t);

    char *week[8]={"日","一","二","三","四","五","六"};
    char *month[40]={"一","二","三","四","五","六","七","八","九","十","十一","十二"}; 
    FILE *log;
    char str[4096];
     log = fopen("C:\\WSautolog.txt","a");
    printf("UPS WorldShip - 管理工作站 - 收件日期 : 週%s,%d-%s月-%d\n",week[T->tm_wday],T->tm_mday,month[T->tm_mon+1],T->tm_year+1900);
    
    HWND WsWin1 = FindWindow(0, "UPS WorldShip - 管理工作站");
    HWND WsWin2 = FindWindow(0, "UPS WorldShip - 管理員  [遠程存取被禁用]");
    HWND WsWin3 = FindWindow(0, " 通訊狀態 "); 
    HWND WsSave1 = FindWindow(NULL, "存檔託運");
    HWND WsWin4 = FindWindow(0, "UPS WorldShip");
    HWND WsWin5 = FindWindow(0, "軟體更新");
    HWND WsWin6 = FindWindow(0, "一天結束處理");
    //HWND WSrcv1 = FindWindowExA(0,0,"選擇有效收件日期 :",NULL);
 
    
    
    //SetForegroundWindow(WsWin1);
    if(WsWin1 == NULL && WsWin2 == NULL)
    {
     app.startWS();
     func.mySleep(1);
     app.WSstart(); //WorldShip Start and Check Connect Window status
     func.mySleep(1);
     app.conUPS();
     func.mySleep(1);
     app.RcvCheck();
     func.mySleep(1);
     app.WSarchive();
     app.startEOD(); //WorldShip Start End Of Day , send F11 and Enter
     func.mySleep(1);
     app.conUPS();
     func.mySleep(1);
     app.EODcheck();
     func.mySleep(1);
     app.EODcheck();
     func.mySleep(1);
     app.closeWS();
     return EXIT_SUCCESS;

    }
    else 
    {
     app.startWS();
     func.mySleep(1);
     app.WSstart(); //WorldShip Start and Check Connect Window status
     func.mySleep(1);
     app.conUPS();
     func.mySleep(1);
     app.RcvCheck();
     func.mySleep(1);
     app.WSarchive();
     app.startEOD(); //WorldShip Start End Of Day , send F11 and Enter
     func.mySleep(1);
     app.conUPS();
     func.mySleep(1);
     app.EODcheck();
     func.mySleep(1);
     app.EODcheck();
     func.mySleep(1);
     
     return EXIT_SUCCESS;

    }


    //CreateMutex() ;
    //HWND hwnd = this.GetSafeHwnd(); 
    //HWND hWnd_v = FindWindow (NULL,"UPS WorldShip - 管理工作站 - 收件日期 : 週五,08-十一月-2013");
//    char clsName_v[4096]; //a buffer of  chars
//
//    GetClassNameA (hWnd_v, clsName_v, 256); //Specifically using ANSI version of the function  
//    printf("%d\n",clsName_v);

    //system("PAUSE");
    return EXIT_SUCCESS;
}
