//
// Created by intak on 07.03.2025.
//

#ifndef INC_3_FUNCTIONS_H
#define INC_3_FUNCTIONS_H

#define ENTER 13

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include "struct.h"
#include "mystring.h"
#include "serials.h"

void task1();
void task2();

void setNumber(int* number);
void gotoxy(short x, short y);
void consoleOut(int x, int y, char output);
int getAnswer();
#endif //INC_3_FUNCTIONS_H
