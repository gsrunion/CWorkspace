#ifndef RESULTCODE_H_
#define RESULTCODE_H_

typedef enum ResultCode {
	OK,
	FAIL,
	ILLEGAL_ARGUMENT,
	INDEX_OUT_OF_BOUNDS,
	RESULT_CODE_LAST,
} ResultCode;

const char* const ResultCode_ToString(ResultCode r);

#endif
