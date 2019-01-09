#include <iostream>
#include "add.h"
#include "sub.h"

int main() {
   std::cout << "The result is : " << add(100, 200) << std::endl;
   std::cout << "The result is : " << sub(400, 200) << std::endl;
}

/*
 * See the size of a.out
 * examine relocations: readelf --relocs a.out
 * examine the .plt contents
 *
 * Execute and see why it doesnt work
 * use ldd to see what is missing
 * So, what is LD_LIBRARY_PATH
 */
