#include "Func.h"

void Func::sec1()
{
     int i;
     for (i=10;i>0;i--)
     {
         printf(".");
         Sleep(100);
     }
     printf("\n");
}
void Func::sec3()
{
     int i;
     for (i=3;i>0;i--)
     {
         printf(".");
         Sleep(1000);
     }
     printf("\n");
}
void Func::sec5()
{
     int i;
     for (i=5;i>0;i--)
     {
         printf(".");
         Sleep(1000);
     }
     printf("\n");
}
void Func::sec10()
{
     int i;
     for (i=10;i>0;i--)
     {
         printf(".");
         Sleep(1000);
     }
     printf("\n");
}
void Func::sec30()
{
     int i;
     for (i=30;i>0;i--)
     {
         printf(".");
         Sleep(1000);
     }
     printf("\n");
}
void Func::sec60()
{
     int i;
     for (i=60;i>0;i--)
     {
         printf(".");
         Sleep(1000);
     }
     printf("\n");
}
void Func::GenerateKey(int vk, BOOL bExtended)
{
     KEYBDINPUT  kb = {0};
     INPUT       Input = {0};

    /* Generate a "key down" */
       if (bExtended) { kb.dwFlags  = KEYEVENTF_EXTENDEDKEY; }
       kb.wVk  = vk;
       Input.type  = INPUT_KEYBOARD;
    Input.ki  = kb;
    SendInput(1, &Input, sizeof(Input));

    /* Generate a "key up" */
    ZeroMemory(&kb, sizeof(KEYBDINPUT));
    ZeroMemory(&Input, sizeof(INPUT));
    kb.dwFlags  =  KEYEVENTF_KEYUP;
    if (bExtended) { kb.dwFlags |= KEYEVENTF_EXTENDEDKEY; }
    kb.wVk = vk;
    Input.type = INPUT_KEYBOARD;
    Input.ki = kb;
    SendInput(1, &Input, sizeof(Input));

    return;
}
void Func::mySleep(clock_t sec)         
{
     clock_t start_time = clock();
     clock_t end_time = sec * 1000 + start_time;
     while(clock() != end_time);
}
