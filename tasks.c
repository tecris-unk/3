//
// Created by intak on 08.03.2025.
//
#include "functions.h"

void task1()
{
    printf("Enter an integer\n");
    union code num;
    setNumber(&num.number);


    printf("here is number, that is smaller 8 times : %d\n", num.byte.a1);
}
void task2()
{
    printf("Enter amount of serials\n");
    int size;
    setNumber(&size);

    SerialInfo *serials;
    initSerials(&serials, size);

    outInfo(serials, size);

    findNumber(serials, size);

    deleteNameX(&serials, &size);
    outInfo(serials, size);

    freeSerials(&serials, size);
}