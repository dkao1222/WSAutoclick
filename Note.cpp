#include "Note.h"

void Note::verInfo()
{
     puts("**********************************************************************");
     puts("*                                                                    *");
     puts("*   UPS WorldShip AutoClick                                          *");
     puts("*                                                                    *");
     puts("*                                                                    *");
     puts("*   Version 3.2  04/11/13 14:48                                      *");
     puts("**********************************************************************");
}
void Note::verLog()
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
}
