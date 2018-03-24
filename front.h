#ifndef FRONT_INCLUDED
#define FRONT_INCLUDED


#include <Stdio.h>
#include <ctime>
#define LEFT 75
#define RIGHT 77
#define ROT 72
#define DOWN 80
#define ENT 13
#define one 49
#define two 50
///x는 가로, y는 세로를 의미합니다.
void outlv(int x, int y, int l,int jud);
int frontpage(int &l)
{

    const int YR=1;
    int x=2,y=YR;
    SetConsoleTextAttribute(hOut,FOREGROUND_RED | FOREGROUND_INTENSITY);
    mv(x,y++);
    printf("■■■■■■");
    mv(x,y++);
    printf("■■■■■■");
    mv(x,y++);
    printf("    ■■  ");
    mv(x,y++);
    printf("    ■■      ");
    mv(x,y++);
    printf("    ■■      ");
    mv(x,y++);
    printf("    ■■      ");
    mv(x,y++);
    printf("    ■■      ");
    mv(x,y++);
    printf("    ■■      ");
    mv(x,y++);
    printf("    ■■      ");
    mv(x,y++);
    printf("    ■■      ");

    x+=13,y=YR;
    SetConsoleTextAttribute(hOut,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    mv(x,y++);
    printf("■■■■■");
    mv(x,y++);
    printf("■■■■■");
    mv(x,y++);
    printf("■■");
    mv(x,y++);
    printf("■■");
    mv(x,y++);
    printf("■■■■■");
    mv(x,y++);
    printf("■■■■■");
    mv(x,y++);
    printf("■■");
    mv(x,y++);
    printf("■■");
    mv(x,y++);
    printf("■■■■■");
    mv(x,y++);
    printf("■■■■■");

    x+=11,y=YR;
    SetConsoleTextAttribute(hOut,FOREGROUND_BLUE| FOREGROUND_INTENSITY);
    mv(x,y++);
    printf("■■■■■■");
    mv(x,y++);
    printf("■■■■■■");
    mv(x,y++);
    printf("    ■■  ");
    mv(x,y++);
    printf("    ■■      ");
    mv(x,y++);
    printf("    ■■      ");
    mv(x,y++);
    printf("    ■■      ");
    mv(x,y++);
    printf("    ■■      ");
    mv(x,y++);
    printf("    ■■      ");
    mv(x,y++);
    printf("    ■■      ");
    mv(x,y++);
    printf("    ■■      ");

    x+=13,y=YR;
    SetConsoleTextAttribute(hOut,FOREGROUND_GREEN |FOREGROUND_BLUE| FOREGROUND_INTENSITY);
    mv(x,y++);
    printf("  ■■■");
    mv(x,y++);
    printf("■■■■■");
    mv(x,y++);
    printf("■■   ■■");
    mv(x,y++);
    printf("■■  ■■");
    mv(x,y++);
    printf("■■ ■■");
    mv(x,y++);
    printf("■■ ■■");
    mv(x,y++);
    printf("■■  ■■");
    mv(x,y++);
    printf("■■   ■■");
    mv(x,y++);
    printf("■■    ■■");
    mv(x,y++);
    printf("■■     ■■");

    x+=13,y=YR;
    mv(x,y++);
    SetConsoleTextAttribute(hOut,FOREGROUND_RED |FOREGROUND_BLUE| FOREGROUND_INTENSITY);
    printf("■■■■■■");
    mv(x,y++);
    printf("■■■■■■");
    mv(x,y++);
    printf("    ■■      ");
    mv(x,y++);
    printf("    ■■      ");
    mv(x,y++);
    printf("    ■■      ");
    mv(x,y++);
    printf("    ■■      ");
    mv(x,y++);
    printf("    ■■      ");
    mv(x,y++);
    printf("    ■■      ");
    mv(x,y++);
    printf("■■■■■■");
    mv(x,y++);
    printf("■■■■■■");
    mv(x,y++);
    x+=13,y=YR;
    mv(x,y++);
    SetConsoleTextAttribute(hOut,FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    printf("  ■■■■■  ");
    mv(x,y++);
    printf("■■     ■■");
    mv(x,y++);
    printf("■■      ");
    mv(x,y++);
    printf("  ■■      ");
    mv(x,y++);
    printf("    ■■      ");
    mv(x,y++);
    printf("      ■■      ");
    mv(x,y++);
    printf("         ■■      ");
    mv(x,y++);
    printf("          ■■");
    mv(x,y++);
    printf("■■      ■■");
    mv(x,y++);
    printf("  ■■■■■  ");
    mv(x,y++);

    SetConsoleTextAttribute(hOut,FOREGROUND_WHITE| FOREGROUND_INTENSITY);
    x=32,y=13;
    mv(x,y++);
    printf("Play");
    mv(x,y++);
    printf("Adjust Lv");
    mv(x,y++);
    printf("Exit");

    start:
    x=30;
    y=13;
    mv(x,y);
    SetConsoleTextAttribute(hOut,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    printf("▶");
    while(1){
            char key;
            if(kbhit()){
            key = getch();
            switch(key)
            {
            case ROT:
                mv(x,y);
                printf("  ");
                if(y==13)y=16;
                mv(x,y-=1);
                printf("▶");
                break;
            case DOWN:
                mv(x,y);
                printf("  ");
                if(y==15)y=12;
                mv(x,y+=1);
                printf("▶");
                break;
            case ENT:
                if(y==13)return 0;
                if(y==14){
                    x+=10;
                    outlv(x+1,y,l,1);
                    while(1){
                        char k;
                        if(kbhit()){
                            k=getch();
                            switch(k){
                            case ROT:
                                l++;
                                outlv(x+1,y,l,1);
                                break;
                            case DOWN:
                                if(l==0)break;
                                l--;
                                outlv(x+1,y,l,1);
                                break;
                            case ENT:
                                mv(x-10,14);
                                printf("  ");
                                outlv(x+1,y,l,0);
                                goto start;
                                break;
                            }
                        }
                    }
                }
                if(y==15)return 1;
                break;
            }
        }
    }
    return 0;
}
void outlv(int x, int y,int l,int jud)
{
    if(jud==1){
    mv(x,y++);
    printf(" ┌<Select LV!>┐");
    mv(x,y++);
    printf(" │     ▲     │");
    mv(x,y++);
    printf(" │     %2d     │",l);
    mv(x,y++);
    printf(" │     ▼     │");
    mv(x,y++);
    printf(" │ Press ENT  │");
    mv(x,y++);
    printf(" │ To Set     │");
    mv(x,y++);
    printf(" └──────┘");
    }
    else{

    mv(x,y++);
    printf("                 ");
    mv(x,y++);
    printf("                 ");
    mv(x,y++);
    printf("                 ");
    mv(x,y++);
    printf("                 ");
    mv(x,y++);
    printf("                 ");
    mv(x,y++);
    printf("                 ");
    mv(x,y++);
    printf("                 ");
    }
}
void counttime()
{
    int wt;
    int ct;
    const int XR=24;
    const int YR=5;
    int x=XR;
    int y=YR;
    SetConsoleTextAttribute(hOut,FOREGROUND_RED | FOREGROUND_INTENSITY);
    mv(x,y++);
    printf("  ■■■■");
    mv(x,y++);
    printf(" ■■   ■■");
    mv(x,y++);
    printf("      ■■");
    mv(x,y++);
    printf("    ■■");
    mv(x,y++);
    printf("      ■■");
    mv(x,y++);
    printf(" ■■   ■■");
    mv(x,y++);
    printf("  ■■■■");
    wt=clock();
    while(1){
        ct=clock()-wt;
        if(ct>1000)break;
    }
    boundary();
    x=XR;
    y=YR;
    SetConsoleTextAttribute(hOut,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    mv(x,y++);
    printf("  ■■■■");
    mv(x,y++);
    printf(" ■■   ■■");
    mv(x,y++);
    printf("      ■■");
    mv(x,y++);
    printf("    ■■");
    mv(x,y++);
    printf("  ■■");
    mv(x,y++);
    printf(" ■■   ■■");
    mv(x,y++);
    printf(" ■■■■■");
    wt=clock();
    while(1){
        ct=clock()-wt;
        if(ct>1000)break;
    }boundary();

    x=XR;
    y=YR;
    SetConsoleTextAttribute(hOut,FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    mv(x,y++);
    printf("    ■■");
    mv(x,y++);
    printf("  ■■■");
    mv(x,y++);
    printf("    ■■");
    mv(x,y++);
    printf("    ■■");
    mv(x,y++);
    printf("    ■■");
    mv(x,y++);
    printf("    ■■");
    mv(x,y++);
    printf(" ■■■■■");
    wt=clock();
    while(1){
        ct=clock()-wt;
        if(ct>1000)break;
    }
}
#endif // FRONT_INCLUDED
