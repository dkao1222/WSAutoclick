#include "WinTitle.h"

void WinTitle::WSNolanAdmin()
{
     //HWND WsZH1 = FindWindow(0, "UPS WorldShip - �޲z�u�@��");
     HWND WsZH2 = FindWindow(0, "UPS WorldShip - �޲z��  [���{�s���Q�T��]");
     //HWND WsEN1 = FindWindow(0, "UPS WorldShip - Administrative Workstation");
     HWND WsEN2 = FindWindow(0, "UPS WorldShip - Admin [ Remote Access Disabled ]");
}
void WinTitle::WSAdministrator()
{
     HWND WsZH1 = FindWindow(0, "UPS WorldShip - �޲z�u�@��");
     //HWND WsZH2 = FindWindow(0, "UPS WorldShip - �޲z��  [���{�s���Q�T��]");
     HWND WsEN1 = FindWindow(0, "UPS WorldShip - Administrative Workstation");
     //HWND WsEN2 = FindWindow(0, "UPS WorldShip - Admin [ Remote Access Disabled ]");
     
}
