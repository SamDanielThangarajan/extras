#include <iostream>
#include "add.h"
#include "sub.h"

int main() {
   std::cout << "The result is : " << add(100, 200) << std::endl;
   std::cout << "The result is : " << sub(400, 200) << std::endl;
}

/*
 * g++ main.cc? Fails at linker
 * g++ main.cc lib.a
 * objdump -dCr a.out and watch for the functions
 */
