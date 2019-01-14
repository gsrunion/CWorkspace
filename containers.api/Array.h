#ifndef ARRAY_H_
#define ARRAY_H_

#include <stdlib.h>

#include "ResultCode.h"
#include "Function.h"

typedef struct Array Array;

Array*      Array_Create (size_t length, size_t itemSize);
ResultCode  Array_Set    (Array* array, size_t index, void* src);
ResultCode  Array_Get    (Array* array, size_t index, void* dst);
void        Array_ForEach(Array* array, VoidFunction operation);
size_t      Array_Length (Array* array);
void        Array_Destroy(Array* array);

#endif
