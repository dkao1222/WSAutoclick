#include <iostream>
#include <windows.h>
#include <winable.h> /* Dev-C++ specific */
#include <ctime>
using namespace std;

class Func
{
      public:
             void sec1();
             void sec3();
             void sec5();
             void sec10();
             void sec30();
             void sec60();
             
             void GenerateKey(int vk, BOOL bExtended);
             void mySleep(clock_t sec);
      };
