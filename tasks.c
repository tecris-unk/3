//
// Created by intak on 08.03.2025.
//
#include "functions.h"

void task1()
{
    printf("Enter an integer\n");
    int number;
    setNumber(&number);

    printf("here is number, that is smaller 8 times : %d\n", number>>3);
}
void task2()
{
    printf("Enter amount of serials\n");
    int size;
    setNumber(&size);
    SerialInfo *serials = (SerialInfo*)malloc(size * sizeof(*serials));
    if(serials == NULL)
    {
        printf("malloc failed\n");
        return;
    }
    initSerials(&serials, size);
    outInfo(serials, size);
    printf("\nEnter number of series\n");
    int seriesX;
    setNumber(&seriesX);
    findNumber(serials, size, seriesX);
    char *nameX;
    int sizeX=0;
    printf("Enter serial name that you need to delete:\n");
    scanString(&nameX, &sizeX);
    deleteNameX(&serials, &size, nameX);
    outInfo(serials, size);
    freeSerials(&serials, size);
}