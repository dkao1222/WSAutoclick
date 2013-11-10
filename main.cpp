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

    char *week[8]={"��","�@","�G","�T","�|","��","��"};
    char *month[40]={"�@","�G","�T","�|","��","��","�C","�K","�E","�Q","�Q�@","�Q�G"}; 
    

    //printf("�{�b�ɶ��G%d�~ %d�� %d�� %d�I %d�� %d�� �P��%s\n",
    //T->tm_year+1900,T->tm_mon+1,T->tm_mday,T->tm_hour,T->tm_min,T->tm_sec,week[T->tm_wday]);
    printf("UPS WorldShip - �޲z�u�@�� - ������ : �g%s,%d-%s��-%d\n",
    week[T->tm_wday],T->tm_mday,month[T->tm_mon+1],T->tm_year+1900);
    
    HWND WsWin1 = FindWindow(0, "UPS WorldShip - �޲z�u�@��");
    HWND WsWin2 = FindWindow(0, "UPS WorldShip - �޲z��  [���{�s���Q�T��]");
    HWND WsWin3 = FindWindow(0, " �q�T���A "); 
    HWND WsSave1 = FindWindow(NULL, "�s�ɰU�B");
    HWND WsWin4 = FindWindow(0, "UPS WorldShip");
    HWND WsWin5 = FindWindow(0, "�n���s");
    HWND WsWin6 = FindWindow(0, "�@�ѵ����B�z");
    //HWND WSrcv1 = FindWindowExA(0,0,"��ܦ��Ħ����� :",NULL);
 
    
    
    //SetForegroundWindow(WsWin1);
    if(WsWin1 == NULL && WsWin2 == NULL)
    {
     app.startWS();
     func.sec1();
     app.WSstart(); //WorldShip Start and Check Connect Window status
    
     app.conUPS();
     app.RcvCheck();
     app.startEOD(); //WorldShip Start End Of Day , send F11 and Enter
     app.conUPS();
     func.mySleep(3);
     app.EODcheck();
     func.mySleep(3);
     app.EODcheck();
     func.mySleep(1);
    
     app.closeWS();
     return EXIT_SUCCESS;

    }
    else
    {
        app.WSstart(); //WorldShip Start and Check Connect Window status
    
        app.conUPS();
        app.RcvCheck();
        app.startEOD(); //WorldShip Start End Of Day , send F11 and Enter
        app.conUPS();
        func.mySleep(3);
        app.EODcheck();
        func.mySleep(3);
        app.EODcheck();
        func.mySleep(1);
        return EXIT_SUCCESS;

    }


    //CreateMutex() ;
    //HWND hwnd = this.GetSafeHwnd(); 
    //HWND hWnd_v = FindWindow (NULL,"UPS WorldShip - �޲z�u�@�� - ������ : �g��,08-�Q�@��-2013");
//    char clsName_v[4096]; //a buffer of  chars
//
//    GetClassNameA (hWnd_v, clsName_v, 256); //Specifically using ANSI version of the function  
//    printf("%d\n",clsName_v);

    //system("PAUSE");
    return EXIT_SUCCESS;
}
