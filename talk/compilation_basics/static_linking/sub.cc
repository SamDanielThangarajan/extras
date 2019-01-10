#include "sub.h"

int32_t sub(const int32_t input1, const int32_t input2) {
   return input1 - input2;
}

/*
 * g++ -c sub.cc
 * ar rvs lib.a sub.o
 */
