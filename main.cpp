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
    
    //HWND WsWin1 = FindWindow(0, "UPS WorldShip - �޲z�u�@��");
    //HWND WsWin2 = FindWindow(0, "UPS WorldShip - �޲z��  [���{�s���Q�T��]");
    //HWND WsWin3 = FindWindow(0, " �q�T���A "); 
    //HWND WsSave1 = FindWindow(NULL, "�s�ɰU�B");
    //HWND WsWin4 = FindWindow(0, "UPS WorldShip");
    //HWND WsWin5 = FindWindow(0, "�n���s");
    //HWND WsWin6 = FindWindow(0, "�@�ѵ����B�z");
    //HWND WsWin7 = FindWindow(0, "��ܦ��Ħ�����");
    
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
