#ifndef MAP_H_INCLUDED
#define MAP_H_INCLUDED

#include <stdio.h>
#include <windows.h>
#endif // MAP_H_INCLUDED

void mv(int x, int y)
{
    COORD pos = {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void boundary()
{
    int x=18,y=0;
    color(0);
    mv(x,y++);
    printf("¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à\n");
        mv(x,y++);
    printf("¡à                    ¡à\n");
        mv(x,y++);
    printf("¡à                    ¡à\n");
        mv(x,y++);
    printf("¡à                    ¡à\n");
        mv(x,y++);
    printf("¡à                    ¡à\n");
        mv(x,y++);
    printf("¡à                    ¡à\n");
        mv(x,y++);
    printf("¡à                    ¡à\n");
        mv(x,y++);
    printf("¡à                    ¡à\n");
        mv(x,y++);
    printf("¡à                    ¡à\n");
        mv(x,y++);
    printf("¡à                    ¡à\n");
        mv(x,y++);
    printf("¡à                    ¡à\n");
        mv(x,y++);
    printf("¡à                    ¡à\n");
        mv(x,y++);
    printf("¡à                    ¡à\n");
        mv(x,y++);
    printf("¡à                    ¡à\n");
        mv(x,y++);
    printf("¡à                    ¡à\n");
        mv(x,y++);
    printf("¡à                    ¡à\n");
        mv(x,y++);
    printf("¡à                    ¡à\n");
        mv(x,y++);
    printf("¡à                    ¡à\n");
        mv(x,y++);
    printf("¡à                    ¡à\n");
        mv(x,y++);
    printf("¡à                    ¡à\n");
        mv(x,y++);
    printf("¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à\n");
}
void scor(int lv, int sco, int s)
{
    color(0);
    int x=42,y=0;
    mv(x,y++);
    printf("¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à\n");
    mv(x,y++);
    printf("                  ¡à\n");
    mv(x,y++);
    printf("                  ¡à\n");
    mv(x,y++);
    printf("   LV : %4d      ¡à\n",lv);
    mv(x,y++);
    printf("   Sc : %4d      ¡à\n",sco);
    mv(x,y++);
    printf("                  ¡à\n");
    mv(x,y++);
    if(s){
        printf("                  ¡à\n");
        mv(x,y++);
    }
    else{
        printf("    GAME OVER     ¡à\n");
    mv(x,y++);
    }//¦¦¦¡¦¥¦¢¦£¦¤
    printf(" ¦£<Next Block>¦¤ ¡à\n");
    mv(x,y++);
    printf(" ¦¢            ¦¢ ¡à\n");
    mv(x,y++);
    printf(" ¦¢            ¦¢ ¡à\n");
    mv(x,y++);
    printf(" ¦¢            ¦¢ ¡à\n");
    mv(x,y++);
    printf(" ¦¢            ¦¢ ¡à\n");
    mv(x,y++);
    printf(" ¦¢            ¦¢ ¡à\n");
    mv(x,y++);
    printf(" ¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¥ ¡à\n");
    mv(x,y++);
    printf("                  ¡à\n");
    mv(x,y++);
    printf("                  ¡à\n");
    mv(x,y++);
    printf("                  ¡à\n");
    mv(x,y++);
    printf("                  ¡à\n");
    mv(x,y++);
    printf("                  ¡à\n");
    mv(x,y++);
    printf("                  ¡à\n");
    mv(x,y++);
    printf("¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à\n");
}
void leftpt()
{
    color(0);
    int x=0,y=0;
    mv(x,y++);
    printf("¡à¡à¡à¡à¡à¡à¡à¡à¡à\n");
    mv(x,y++);
    printf("¡à Tetris_OH!     \n");
    mv(x,y++);
    printf("¡à (c) 2015       \n");
    mv(x,y++);
    printf("¡à JASON Corp.    \n");
    mv(x,y++);
    printf("¡à All rights     \n");
    mv(x,y++);
    printf("¡à reserved       \n");
    mv(x,y++);
    printf("¡à Ver.1.0.1      \n");
    mv(x,y++);
    printf("¡à   ¡â   rotate  \n");
    mv(x,y++);
    printf("¡à ¢·  ¢¹ LM,RM   \n");
    mv(x,y++);
    printf("¡à   ¡ä   down   \n");
    mv(x,y++);
    printf("¡à                \n");
    mv(x,y++);
    printf("¡à                \n");
    mv(x,y++);
    printf("¡à                \n");
    mv(x,y++);
    printf("¡à                \n");
    mv(x,y++);
    printf("¡à                \n");
    mv(x,y++);
    printf("¡à                \n");
    mv(x,y++);
    printf("¡à                \n");
    mv(x,y++);
    printf("¡à                \n");
    mv(x,y++);
    printf("¡à                \n");
    mv(x,y++);
    printf("¡à                \n");
    mv(x,y++);
    printf("¡à¡à¡à¡à¡à¡à¡à¡à¡à\n");
}
