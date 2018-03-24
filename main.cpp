#include "bits/stdc++.h"
#include <conio.h>
#include "game.h"
#include "map.h"
#include "front.h"

///y는 세로, x는 가로를 의미합니다.

int sq[21][4][4]={

   {{1,1,0,0},{1,1,0,0},{0,0,0,0},{0,0,0,0}},///0
   {{1,0,0,0},{1,1,1,0},{0,0,0,0},{0,0,0,0}},///1
   {{0,1,0,0},{0,1,0,0},{1,1,0,0},{0,0,0,0}},///2
   {{1,1,1,0},{0,0,1,0},{0,0,0,0},{0,0,0,0}},///3
   {{1,1,0,0},{1,0,0,0},{1,0,0,0},{0,0,0,0}},///4
   {{0,0,1,0},{1,1,1,0},{0,0,0,0},{0,0,0,0}},///5
   {{1,0,0,0},{1,0,0,0},{1,1,0,0},{0,0,0,0}},///6
   {{1,1,1,0},{1,0,0,0},{0,0,0,0},{0,0,0,0}},///7
   {{1,1,0,0},{0,1,0,0},{0,1,0,0},{0,0,0,0}},///8
   {{0,1,0,0},{1,1,1,0},{0,0,0,0},{0,0,0,0}},///9
   {{1,0,0,0},{1,1,0,0},{1,0,0,0},{0,0,0,0}},///10
   {{1,1,1,0},{0,1,0,0},{0,0,0,0},{0,0,0,0}},///11
   {{0,1,0,0},{1,1,0,0},{0,1,0,0},{0,0,0,0}},///12
   {{1,1,0,0},{0,1,1,0},{0,0,0,0},{0,0,0,0}},///13
   {{0,1,0,0},{1,1,0,0},{1,0,0,0},{0,0,0,0}},///14
   {{0,1,1,0},{1,1,0,0},{0,0,0,0},{0,0,0,0}},///15
   {{1,0,0,0},{1,1,0,0},{0,1,0,0},{0,0,0,0}},///16
   {{1,0,0,0},{1,0,0,0},{1,0,0,0},{1,0,0,0}},///17
   {{1,1,1,1},{0,0,0,0},{0,0,0,0},{0,0,0,0}},///18
   {{0,9,0,0},{9,9,9,0},{0,9,0,0},{0,0,0,0}},///19
   {{-3,-3,0,0},{-3,-3,0,0},{0,0,0,0},{0,0,0,0}}///20
};///all kinds of blocks
int score,lv=1;
int r,r2;///r is current block, r2 is next block
int imr;///temporary random block number
int mapt[23][12]={{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
                  {-1,0,0,0,0,0,0,0,0,0,0,-1},
                  {-1,0,0,0,0,0,0,0,0,0,0,-1},
                  {-1,0,0,0,0,0,0,0,0,0,0,-1},
                  {-1,0,0,0,0,0,0,0,0,0,0,-1},
                  {-1,0,0,0,0,0,0,0,0,0,0,-1},
                  {-1,0,0,0,0,0,0,0,0,0,0,-1},
                  {-1,0,0,0,0,0,0,0,0,0,0,-1},
                  {-1,0,0,0,0,0,0,0,0,0,0,-1},
                  {-1,0,0,0,0,0,0,0,0,0,0,-1},
                  {-1,0,0,0,0,0,0,0,0,0,0,-1},
                  {-1,0,0,0,0,0,0,0,0,0,0,-1},
                  {-1,0,0,0,0,0,0,0,0,0,0,-1},
                  {-1,0,0,0,0,0,0,0,0,0,0,-1},
                  {-1,0,0,0,0,0,0,0,0,0,0,-1},
                  {-1,0,0,0,0,0,0,0,0,0,0,-1},
                  {-1,0,0,0,0,0,0,0,0,0,0,-1},
                  {-1,0,0,0,0,0,0,0,0,0,0,-1},
                  {-1,0,0,0,0,0,0,0,0,0,0,-1},
                  {-1,0,0,0,0,0,0,0,0,0,0,-1},
                  {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}};
void remov(int y, int x);

void bomb(int y, int x)///if the block is bomb and it hits the ground, then clear near blocks
{
    int i,j;
    remov(y,x);
    for(i=0;i<4;i++){
        if(y+i>=20)return;
        for(j=0;j<4;j++){
            if(x+j>=11)break;
            if(mapt[y+i][x+j]<0)mapt[y+i][x+j]++;
        }
    }
}
void remov(int y, int x)///remove block from map while dropping the blocks
{
    int i,j;
    int k1=0,k2=0;
    for(i=y;i<=y+3;i++){
        if(y>=20)return;
        for(j=x;j<=x+3;j++){
            if(sq[r][k1][k2]!=0){
                mapt[i][j] = 0;
            }
            k2++;
        }
        k1++;
        k2=0;
    }
}
void ins(int y, int x)///insert block
{
    int k1=0,k2=0;
    int i,j;
    for(i=y;i<=y+3;i++){
        for(j=x;j<=x+3;j++){
            if(sq[r][k1][k2]==0){
                    k2++;
                continue;
            }
            mapt[i][j] = sq[r][k1][k2++];
        }
        k1++;
        k2=0;
    }
}
int around(int y, int x, int w)///check around to make sure whether the block can change its position or not
{
    int i,j;
    if(w == 1){
        for(i=0;i<4;i++){
            if(r==20){
                if(i==0)continue;///if the block is unbreakable block, check from second part
            }
            for(j=0;j<4;j++){
                if(sq[r][i][j]){
                    if(mapt[y+i+1][x+j]<0)return 1;
                }
            }
        }
    }
    if(w == LEFT){
        for(i=0;i<4;i++){
            for(j=0;j<4;j++){
                if(sq[r][i][j]){
                    if(mapt[y+i][x+j-1]<0)return 1;
                    if(x+j-1<1)return 1;
                }
            }
        }
    }
    if(w == RIGHT){
        for(i=0;i<4;i++){
            for(j=0;j<4;j++){
                if(sq[r][i][j]){
                    if(mapt[y+i][x+j+1]<0)return 1;
                    if(x+j+1>18)return 1;
                }
            }
        }
    }
    if(w==3){
        for(i=0;i<4;i++){
            for(j=0;j<4;j++){
                if(sq[imr][i][j]){
                    if(mapt[y+i][x+j]<0)return 1;
                }
            }
        }
    }
    return 0;
}
void output()///output maps
{
    int i,j,k=1;
    mv(20,k);
    k++;
    for(i=1;i<20;i++){
        for(j=1;j<11;j++){
                color(mapt[i][j]);
                if(mapt[i][j]==0)printf("  ");
                else if(mapt[i][j]==1){
                    printf("■");
                }
                else if(mapt[i][j] == 9){
                        printf("▩");
                }
                else {
                    printf("▨");
                }
        }
        mv(20,k);
        k++;
    }
}

int isful(int k)///check whether the line is full or not
{
    int i;
    for(i=1;i<11;i++){
        if(mapt[k][i]>-1)return 0;
    }
    return 1;
}
void clean(int k)///clean full lines
{
    int i,j;
    int temp[12]={0};
    for(i=1;i<11;i++){
        mapt[k][i]++;
        if(mapt[k][i]==0)temp[i]=1;
        output();
        Sleep(10);
    }
    for(i=k;i>2;i--){
        for(j=1;j<11;j++){
            if(temp[j]==1){
                mapt[i][j]=mapt[i-1][j];
            }
        }
    }
}
void line()///overall line-removing task
{
    int i;
    for(i=1;i<20;i++){
        if(isful(i)){
            clean(i);
            score+=100;
            if(score%1000==0)lv++;
        }
    }
}

void harden(int y, int x)///if the block hit ground, make 1 to -1
{
    int i,j;
    for(i=y;i<=y+3;i++){
        for(j=x;j<=x+3;j++){
            if(mapt[i][j] == 1){
                mapt[i][j] = -1;
            }
        }
    }
}
void down(int y, int x)///if down pressed, put the block as low as it can be
{
    int i;
    for(i=y;i<20;i++){
        if(around(i,x,1)){
            if(r == 19){
                    bomb(i,x);
                    return;
            }
            ins(i,x);
            harden(i,x);
            line();
            return;
        }
    }
}
void rot(int y, int x)///rotate block
{
    remov(y,x);
    if(r == 0)return;
    else if(r == 8)imr=5;
    else if(r == 12)imr=9;
    else if(r == 4)imr=1;
    else if(r==18||r==16||r==14)imr=r-1;
    else if(r>=19)return;
    else imr=r+1;
    if(around(y,x,3))return;
    r=imr;
    ins(y,x);
}
void ran()///random block
{
    if(r2 == 0)return;
    else if(r2 == 8)r2=5;
    else if(r2 == 12)r2=9;
    else if(r2 == 4)r=1;
    else if(r2==18||r2==16||r2==14)r2--;
    else if(r2>=19)return;
}
void nexttile()///output a block which will be dropped next
{
    int x=45,y=9;
    mv(x,y++);
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(sq[r2][i][j])printf("■");
            else printf("  ");
        }
        mv(x,y++);
    }
}
void movetile()///overall block moving tasks
{
    int sy = 1;
    int sx = 5;
    srand((unsigned)time(NULL));
    r=rand()%21;
    r2=rand()%21;
    ran();
    while(1){
        ins(sy,sx);
        output();
        if(around(sy,sx,1)){
            if(r==19)bomb(sy,sx);
            harden(sy,sx);
            line();
            output();
            if(sy==1)return;///if the block hit the ceiling, end game
            calc:
            sy=1;
            sx=5;
            r=r2;
            r2=(rand()%21);
            ran();
        }
        else sy++;
        scor(lv,score,1);
        nexttile();
        if(sy!=1) remov(sy-1,sx);
        int ct,wt = clock();
        while(1){
            char key;
            if(kbhit()){
            key = getch();
            switch(key)
            {
            case ROT:
                rot(sy,sx);
                break;
            case DOWN:
                remov(sy,sx);
                down(sy,sx);
                output();
                goto calc;
                break;
            case LEFT:
                if(around(sy,sx,75)==1)break;
                remov(sy,sx);///현재 블록 위치 삭제
                ins(sy,--sx);///왼쪽으로 이동해서 저장
                mv(18,0);
                output();
                break;
            case RIGHT:
                if(around(sy,sx,77)==1)break;
                remov(sy,sx);
                ins(sy,++sx);
                mv(18,0);
                output();
                break;
            case 49:///1
                r2=17;
                break;
            case 50:///2
                r2=19;
                break;
            case 51:///3
                r=17;
                break;
            case 52:///4
                imr=19;
                if(around(sy,sx,3))break;
                remov(sy,sx);
                r=19;
                break;
            case 53:///5
                r2=rand()%20;
                break;
            case 54:///6
                imr=rand()%20;
                if(around(sy,sx,3))break;
                remov(sy,sx);
                r=imr;
                break;
            case 55:///7
                r=20;
            }
            }
            ct+=clock()-wt;
            if(ct>=200000/lv*10){
                ct = 0;
                break;
            }
        }
    }
}

int main()
{
    int st = frontpage(lv);
    if(st==1)return 0;
    system("cls");
    leftpt();
    boundary();
    scor(lv,score,1);
    counttime();
    movetile();
    scor(lv,score,0);
    return 0;
}
