#include "WinTitle.h"

void WinTitle::WSNolanAdmin()
{
     //HWND WsZH1 = FindWindow(0, "UPS WorldShip - 管理工作站");
     HWND WsZH2 = FindWindow(0, "UPS WorldShip - 管理員  [遠程存取被禁用]");
     //HWND WsEN1 = FindWindow(0, "UPS WorldShip - Administrative Workstation");
     HWND WsEN2 = FindWindow(0, "UPS WorldShip - Admin [ Remote Access Disabled ]");
}
void WinTitle::WSAdministrator()
{
     HWND WsZH1 = FindWindow(0, "UPS WorldShip - 管理工作站");
     //HWND WsZH2 = FindWindow(0, "UPS WorldShip - 管理員  [遠程存取被禁用]");
     HWND WsEN1 = FindWindow(0, "UPS WorldShip - Administrative Workstation");
     //HWND WsEN2 = FindWindow(0, "UPS WorldShip - Admin [ Remote Access Disabled ]");
     
}
