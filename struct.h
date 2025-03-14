//
// Created by intak on 07.03.2025.
//

#ifndef INC_3_STRUCT_H
#define INC_3_STRUCT_H

typedef struct{
    char date[10];
    int seasonAmount;
}NewSerialInfo;

typedef struct {
int seriesAmount;
char* name;
NewSerialInfo newSerialInfo;
}SerialInfo;


#endif //INC_3_STRUCT_H
