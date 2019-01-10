#include <iostream>
#include <limits>

/*
 * Compile with -O1 and -O3 and compare the perform_recusrsion function.
 * - tail recusrsion saves stack
 */  

uint32_t perform_recursion(uint32_t id) {

   if (id == std::numeric_limits<uint32_t>::max()) {
      return id;
   }
   return perform_recursion(++id);
}

int main() {
   uint32_t max = perform_recursion(0);
   std::cout << "The max : " << max << std::endl;
}
