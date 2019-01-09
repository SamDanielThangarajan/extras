#include <iostream>
#include <vector>

/*
 * What is function overloading? And what is the function signature
 */

int add(int a, int b) {
   std::cout << "Executing add(int,int)" << std::endl;
   return a+b;
}


int main() {
   std::cout << add(1,2) << std::endl;
   //std::cout << add(1,2.1f) << std::endl;
   //std::cout << add(1,2,3) << std::endl;
   //std::cout << add(1.1f,2.1f) << std::endl;

   // Complicated name mangling
   //std::vector<int> vec;
   //vec.push_back(100);
}
