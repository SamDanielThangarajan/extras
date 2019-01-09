#include <iostream>

#define KEY 717


bool is_valid(int32_t input) {
   if (KEY == input) {
      return true;
   }
   return false;
}

int main() {
   int32_t input;

   std::cout << "Enter the key : ";
   std::cin >> input;

   if (!is_valid(input)) {
      std::cerr << "Access Denied!" << std::endl;
      return 1;
   }
   std::cout << "Access Granted!" << std::endl;
}

/*
 * 1. What is typedef?
 *   - typedef int32_r keytype_t
 * 2. option O3 to g++ command line
 */
