#include <stdlib.h>

#include "Stack.h"
#include "Array.h"

struct Stack {
	Array* array;
	size_t size;
};

Stack* Stack_Create(size_t capacity, size_t itemSize) {
	Stack* stack = calloc(1, sizeof(Stack));
	stack->array = Array_Create(capacity, itemSize);
	stack->size = 0;
	return stack;
}

ResultCode Stack_Push(Stack* stack, void* src) {
	if (Stack_IsFull(stack) == TRUE) {
		return FAIL;
	}
	return Array_Set(stack->array, stack->size++, src);
}

ResultCode Stack_Pop(Stack* stack, void* dst) {
	if (Stack_IsEmpty(stack) == TRUE) {
		return FAIL;
	}
	return Array_Get(stack->array, stack->size--, dst);
}

size_t Stack_Size(Stack* stack) {
	return stack->size;
}

size_t Stack_Capacity(Stack* stack) {
	return Array_Length(stack->array);
}

Boolean Stack_IsFull(Stack* stack) {
	return stack->size == Array_Length(stack->array);
}

Boolean Stack_IsEmpty(Stack* stack) {
	return stack->size == 0;
}

void Stack_Destroy(Stack* stack) {
	Array_Destroy(stack->array);
	free(stack);
}
