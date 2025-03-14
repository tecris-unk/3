//
// Created by intak on 08.03.2025.
//
#include "functions.h"
void setNumber(int* number)
{
    rewind(stdin);
    *number = 0;
    int digit;
    while((digit = getchar()) != '\n' && digit != ' ')
    {
        if(digit < '0' || digit > '9'){
            printf("Incorrect number\n");
            while((digit = getchar()) != '\n' && digit != ' ');
            *number = 0;
        }
        else{*number = *number * 10 + digit - '0';}
    }
}
void gotoxy(short x, short y)
{
    COORD p = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
}

void consoleOut(int x, int y, char output)
{
    DWORD dw;
    COORD here;
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

    here.X = (short)x;
    here.Y = (short)y;

    char c = ' ';
    WriteConsoleOutputCharacter(hStdOut, &c, 1, here, &dw);
    gotoxy((short)x, (short)y);
    printf("%c", output);
}
int getAnswer()
{
    int x = 40, xt = 0;
    int y = 0, yt = 0;

    gotoxy(40, 0);
    printf("yes   no");
    while(1)
    {
        consoleOut(x, y+1, '*');
        xt = x;
        int ch = _getch();
        switch(ch)
        {
            case 'd':
            case 'D':
            case 77 :
                x+=5;
                break;
            case 'a':
            case 'A':
            case 75 :
                x-=5;
                break;
            case ENTER:
                if(x == 40){return 1;}
                else{return 0;}
        }
        if(x <40 || x > 45){x = xt;}
        consoleOut(xt, yt+1, ' ');
    }
}