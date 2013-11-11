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

    char *week[8]={"日","一","二","三","四","五","六"};
    char *month[40]={"一","二","三","四","五","六","七","八","九","十","十一","十二"}; 
    FILE *log;
    char str[4096];
     log = fopen("C:\\WSautolog.txt","a");
}
