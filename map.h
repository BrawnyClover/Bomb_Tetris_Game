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
    printf("�������������\n");
        mv(x,y++);
    printf("��                    ��\n");
        mv(x,y++);
    printf("��                    ��\n");
        mv(x,y++);
    printf("��                    ��\n");
        mv(x,y++);
    printf("��                    ��\n");
        mv(x,y++);
    printf("��                    ��\n");
        mv(x,y++);
    printf("��                    ��\n");
        mv(x,y++);
    printf("��                    ��\n");
        mv(x,y++);
    printf("��                    ��\n");
        mv(x,y++);
    printf("��                    ��\n");
        mv(x,y++);
    printf("��                    ��\n");
        mv(x,y++);
    printf("��                    ��\n");
        mv(x,y++);
    printf("��                    ��\n");
        mv(x,y++);
    printf("��                    ��\n");
        mv(x,y++);
    printf("��                    ��\n");
        mv(x,y++);
    printf("��                    ��\n");
        mv(x,y++);
    printf("��                    ��\n");
        mv(x,y++);
    printf("��                    ��\n");
        mv(x,y++);
    printf("��                    ��\n");
        mv(x,y++);
    printf("��                    ��\n");
        mv(x,y++);
    printf("�������������\n");
}
void scor(int lv, int sco, int s)
{
    color(0);
    int x=42,y=0;
    mv(x,y++);
    printf("�����������\n");
    mv(x,y++);
    printf("                  ��\n");
    mv(x,y++);
    printf("                  ��\n");
    mv(x,y++);
    printf("   LV : %4d      ��\n",lv);
    mv(x,y++);
    printf("   Sc : %4d      ��\n",sco);
    mv(x,y++);
    printf("                  ��\n");
    mv(x,y++);
    if(s){
        printf("                  ��\n");
        mv(x,y++);
    }
    else{
        printf("    GAME OVER     ��\n");
    mv(x,y++);
    }//������������
    printf(" ��<Next Block>�� ��\n");
    mv(x,y++);
    printf(" ��            �� ��\n");
    mv(x,y++);
    printf(" ��            �� ��\n");
    mv(x,y++);
    printf(" ��            �� ��\n");
    mv(x,y++);
    printf(" ��            �� ��\n");
    mv(x,y++);
    printf(" ��            �� ��\n");
    mv(x,y++);
    printf(" ���������������� ��\n");
    mv(x,y++);
    printf("                  ��\n");
    mv(x,y++);
    printf("                  ��\n");
    mv(x,y++);
    printf("                  ��\n");
    mv(x,y++);
    printf("                  ��\n");
    mv(x,y++);
    printf("                  ��\n");
    mv(x,y++);
    printf("                  ��\n");
    mv(x,y++);
    printf("�����������\n");
}
void leftpt()
{
    color(0);
    int x=0,y=0;
    mv(x,y++);
    printf("����������\n");
    mv(x,y++);
    printf("�� Tetris_OH!     \n");
    mv(x,y++);
    printf("�� (c) 2015       \n");
    mv(x,y++);
    printf("�� JASON Corp.    \n");
    mv(x,y++);
    printf("�� All rights     \n");
    mv(x,y++);
    printf("�� reserved       \n");
    mv(x,y++);
    printf("�� Ver.1.0.1      \n");
    mv(x,y++);
    printf("��   ��   rotate  \n");
    mv(x,y++);
    printf("�� ��  �� LM,RM   \n");
    mv(x,y++);
    printf("��   ��   down   \n");
    mv(x,y++);
    printf("��                \n");
    mv(x,y++);
    printf("��                \n");
    mv(x,y++);
    printf("��                \n");
    mv(x,y++);
    printf("��                \n");
    mv(x,y++);
    printf("��                \n");
    mv(x,y++);
    printf("��                \n");
    mv(x,y++);
    printf("��                \n");
    mv(x,y++);
    printf("��                \n");
    mv(x,y++);
    printf("��                \n");
    mv(x,y++);
    printf("��                \n");
    mv(x,y++);
    printf("����������\n");
}
