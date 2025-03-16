//
// Created by Bluman on 3/15/2025.
//

#ifndef MEMORY_H
#define MEMORY_H

#include "common.h"

void* reallocate(void* pointer, size_t oldSize, size_t newSize);

#define GROW_CAPACITY(capacity) \
  ((capacity) < 8 ? 8 : (capacity) * 2)

#define GROW_ARRAY(type, pointer, oldCount, newCount) \
  (type*)reallocate(pointer, sizeof(type) * (oldCount), \
    sizeof(type) * (newCount))

#define FREE_ARRAY(type, pointer, oldCount) \
  reallocate(pointer, sizeof(type) * (oldCount), 0)

#endif //MEMORY_H
