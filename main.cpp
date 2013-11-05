#include <cstdlib>
#include <iostream>
#include "Func.h"
#include "Note.h"
#include "App.h"

using namespace std;

int main(int argc, char *argv[])
{
    Func func;
    Note note;
    App app;
    
    //HWND WsWin1 = FindWindow(0, "UPS WorldShip - 管理工作站");
    //HWND WsWin2 = FindWindow(0, "UPS WorldShip - 管理員  [遠程存取被禁用]");
    //HWND WsWin3 = FindWindow(0, " 通訊狀態 "); 
    //HWND WsSave1 = FindWindow(NULL, "存檔託運");
    //HWND WsWin4 = FindWindow(0, "UPS WorldShip");
    //HWND WsWin5 = FindWindow(0, "軟體更新");
    //HWND WsWin6 = FindWindow(0, "一天結束處理");
    //HWND WsWin7 = FindWindow(0, "選擇有效收件日期");
    
    //SetForegroundWindow(WsWin1);
    app.WSstart(); //WorldShip Start and Check Connect Window status
    app.startEOD(); //WorldShip Start End Of Day , send F11 and Enter
    func.mySleep(3) ;
    app.EODcheck();
    app.closeWS();
    

    
    //func.sec10();
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
