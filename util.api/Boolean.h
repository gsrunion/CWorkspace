#ifndef BOOLEAN_H_
#define BOOLEAN_H_

typedef enum Boolean {
	TRUE,
	FALSE,
	BOOLEAN_LAST,
} Boolean;

const char* const Boolean_ToString(Boolean b);

#endif
