#include <stdio.h>
#include <time.h>
#include "Debugger.h"
#include "ColorfulConsoler.h"
#include "FlexibleArray.h"

void Test()
{

}

void PrintCurrentTime()
{
    struct tm *t;
    time_t lct = time(NULL);
    t = localtime(&lct);
    printf("%02d:%02d:%02d",t->tm_hour,t->tm_min,t->tm_sec);
}

void PrintLog(char *log)
{
    SetColor(WHITE,BLACK);
    PrintCurrentTime();
    printf("[Log] ");
    while(*log)
    {
        putchar(*log);
        log++;
    }
    if(*(log-1)!='\n')
    {
        putchar('\n');
    }
    SetColor(WHITE,BLACK);
}

void PrintWarning(char *warning)
{
    SetColor(LIGHTYELLOW,BLACK);
    PrintCurrentTime();
    printf("[Warning] ");
    while(*warning)
    {
        putchar(*warning);
        warning++;
    }
    if(*(warning-1)!='\n')
    {
        putchar('\n');
    }
    SetColor(WHITE,BLACK);
}

void PrintError(char *error)
{
    SetColor(LIGHTRED,BLACK);
    PrintCurrentTime();
    printf("[Error] ");
    while(*error)
    {
        putchar(*error);
        error++;
    }
    if(*(error-1)!='\n')
    {
        putchar('\n');
    }
    SetColor(WHITE,BLACK);
}
