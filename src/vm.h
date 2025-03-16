//
// Created by Bluman on 3/16/2025.
//

#ifndef VM_H
#define VM_H

#include "chunk.h"
#include "value.h"

#define STACK_MAX 256

typedef struct {
  Chunk* chunk;
  uint8_t* ip;
  Value stack[STACK_MAX];
  Value* stackTop;
} VM;

typedef enum {
  INTERPRET_OK = 0,
  INTERPRET_COMPILE_ERROR = 1,
  INTERPRET_RUNTIME_ERROR = 2
} InterpretResult;

void initVM();
void freeVM();
InterpretResult interpret(const char* source);

// VM stack manipulation
void push(Value value);
Value pop();

#endif //VM_H
