#ifndef STACK_H_
#define STACK_H_

#include <stddef.h>

#include "Boolean.h"
#include "ResultCode.h"

typedef struct Stack Stack;

Stack*      Stack_Create  (size_t capacity, size_t itemSize);
ResultCode  Stack_Push    (Stack* stack, void* src);
ResultCode  Stack_Pop     (Stack* stack, void* dst);
size_t      Stack_Size    (Stack* stack);
size_t      Stack_Capacity(Stack* stack);
Boolean     Stack_IsFull  (Stack* stack);
Boolean     Stack_IsEmpty (Stack* stack);
void        Stack_Destroy (Stack* stack);

#endif
