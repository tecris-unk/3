//
// Created by intak on 10.03.2025.
//

#include "functions.h"

void initSerials(SerialInfo **serials, int size)
{
    *serials = (SerialInfo*)malloc(size * sizeof(SerialInfo));
    if(*serials == NULL)
    {
        printf("malloc failed\n");
        return;
    }
    for(int i = 0; i < size; ++i)
    {
        printf("%d Serial :", i+1);
        printf("\nEnter amount of series ");
        setNumber(&(*serials)[i].seriesAmount);
        printf("Enter name of the serial ");
        int nameSize = 0;
        (*serials)[i].name = NULL;
        scanString(&(*serials)[i].name, &nameSize);
        printf("\n");
    }
}
void outInfo(SerialInfo *serials, int size)
{
    printf("\nhere are your serials\n");
    for(int i = 0; i < size; ++i)
    {
        printf("%d Serial :", i+1);
        printf("\nAmount of series %d\n", serials[i].seriesAmount);
        printf("Name of the serial %s\n", serials[i].name);
    }
}
void freeSerials(SerialInfo **serials, int size)
{
    for(int i = 0; i < size; ++i)
    {
        free((*serials)[i].name);
    }
    free(*serials);
}
void findNumber(SerialInfo *serials, int size)
{
    printf("\nEnter number of series\n");
    int seriesX;
    setNumber(&seriesX);

    printf("Serials with series amount smaller than %d:\n", seriesX);
    for(int i = 0; i < size; ++i)
    {
        if(serials[i].seriesAmount < seriesX)
        {
            printf("%s ", serials[i].name);
        }
    }
    printf("\n");
}
void deleteNameX(SerialInfo **serials, int *size)
{
    char *nameX = NULL;
    int sizeX=0;
    printf("Enter serial name that you need to delete:\n");
    scanString(&nameX, &sizeX);

    for(int i = 0; i < *size; ++i)
    {
        if(isEqualStr((*serials)[i].name, nameX)){
            delete(serials, size, i);
            i--;
        }
    }
    free(nameX);
}
static void delete(SerialInfo **serials, int *size, int pos)
{
    for(int i = pos; i < *size - 1; ++i)
    {
        printf("%d ", i);
        (*serials)[i] = (*serials)[i+1];
    }
    *serials = realloc(*serials, (*size-1) * sizeof(SerialInfo));
    (*size)--;
}