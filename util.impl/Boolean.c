#include <assert.h>

#include "StaticAssert.h"
#include "Boolean.h"

static const char* const trueString  = "true";
static const char* const falseString = "false";

STATIC_ASSERT(BOOLEAN_LAST == 2, Boolean_Enum_Should_Have_Two_Values);

const char* const Boolean_ToString(Boolean b) {
	switch(b) {
	case TRUE:
		return trueString;
	case FALSE:
		return falseString;
	default:
		assert(0);
		return "";
	}
}


