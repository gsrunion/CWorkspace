#include <string.h>
#include <stdlib.h>

#include "Array.h"

struct Array {
	unsigned int itemSize;
	unsigned int length;
	void* data;
};

Array* Array_Create(size_t length, size_t itemSize) {
	Array* array = calloc(1, sizeof(Array));
	array->itemSize = itemSize;
	array->length = length;
	array->data = calloc(length, itemSize);
	return array;
}

ResultCode Array_Set(Array* array, size_t index, void* src) {
	if (index >= array->length) {
		return INDEX_OUT_OF_BOUNDS;
	}
	memcpy(array->data + index * array->itemSize, src, array->itemSize);
	return OK;
}

ResultCode Array_Get(Array* array, size_t index, void* dst) {
	if (index >= array->length) {
		return INDEX_OUT_OF_BOUNDS;
	}
	memcpy(dst, array->data + index * array->itemSize, array->itemSize);
	return OK;
}

size_t Array_Length(Array* array) {
	return array->length;
}

void Array_ForEach(Array* array, VoidFunction op) {
	size_t x = 0;
	for(; x < array->length; x++) {
		op(array->data + x * array->itemSize);
	}
}

void Array_Destroy(Array* array) {
	free(array->data);
	free(array);
}



