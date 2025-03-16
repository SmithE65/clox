//
// Created by Bluman on 3/15/2025.
//

#ifndef VALUE_H
#define VALUE_H

#include "common.h"

typedef double Value;

typedef struct {
    int capacity;
    int count;
    Value* values;
} ValueArray;

void initValueArray(ValueArray* array);
void freeValueArray(ValueArray* array);
void writeValueArray(ValueArray* array, const Value value);
void printValue(const Value value);

#endif //VALUE_H
