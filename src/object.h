//
// Created by Bluman on 3/20/2025.
//

#ifndef OBJECT_H
#define OBJECT_H

#include "common.h"
#include "value.h"

#define OBJ_TYPE(value) (AS_OBJ(value)->type)

#define IS_STRING(value) isObjType(value, OBJ_STRING)

#define AS_STRING(value) ((ObjString*)AS_OBJ(value))
#define AS_CSTRING(value) (((ObjString*)AS_OBJ(value))->chars)

typedef enum {
    OBJ_STRING,
} ObjType;

struct Obj {
    ObjType type;
};

struct ObjString {
    Obj obj;
    int length;
    char* chars;
};

static inline bool isObjType(const Value value, const ObjType type) {
    return IS_OBJ(value) && AS_OBJ(value)->type == type;
}

#endif //OBJECT_H
