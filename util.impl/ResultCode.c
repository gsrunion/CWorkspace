#include <assert.h>


#include "ResultCode.h"
#include "StaticAssert.h"

const char* const okString = "ok";
const char* const failString = "fail";
const char* const illegalArgumentString = "illegal argument";
const char* const indexOutOfBoundsString = "index out of bounds";

STATIC_ASSERT(RESULT_CODE_LAST == 4, Result_Code_Enum_Should_Have_Two_Values);


const char* const ResultCode_ToString(ResultCode r) {
	switch (r) {
	case OK:
		return okString;
	case FAIL:
		return failString;
	case ILLEGAL_ARGUMENT:
		return illegalArgumentString;
	case INDEX_OUT_OF_BOUNDS:
		return indexOutOfBoundsString;
	default:
		assert(0);
		return "";
	}
}

