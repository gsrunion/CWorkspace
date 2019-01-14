#ifndef STATICASSERT_H_
#define STATICASSERT_H_

#define STATIC_ASSERT(COND,MSG) typedef char static_assertion_##MSG[(COND)?1:-1]

#endif
