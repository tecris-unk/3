//
// Created by intak on 10.03.2025.
//

#ifndef INC_3_SERIALS_H
#define INC_3_SERIALS_H

#include "functions.h"

void initSerials(SerialInfo **serials, int size);
void outInfo(SerialInfo *serials, int size);
void freeSerials(SerialInfo **serials, int size);
void findNumber(SerialInfo *serials, int size, int seriesX);
void deleteNameX(SerialInfo **serials, int *size, char *nameX);

#endif //INC_3_SERIALS_H
