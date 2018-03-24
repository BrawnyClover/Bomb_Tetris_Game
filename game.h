#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED
#include <stdio.h>
#include <windows.h>
#define FOREGROUND_WHITE FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY
#define BACKGROUND_WHITE BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY
HANDLE hOut=GetStdHandle(STD_OUTPUT_HANDLE);
void color(int a){
    if(a==1){
        SetConsoleTextAttribute(hOut,FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    }
    else if(a==-1){
        SetConsoleTextAttribute(hOut,FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    }
    else if(a==9){
        SetConsoleTextAttribute(hOut,FOREGROUND_RED | FOREGROUND_INTENSITY);
    }
    else if(a==-3){
        SetConsoleTextAttribute(hOut,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    }
    else if(a==-2){
        SetConsoleTextAttribute(hOut,FOREGROUND_GREEN);
    }
    else{
        SetConsoleTextAttribute(hOut,FOREGROUND_WHITE);
    }
}
#endif // GAME_H_INCLUDED
