#include <iostream>
#include "student.h"

/*
 * What is stack? FILO
 */

void test_function_scope() {
   std::cout << "test_function_scope>> created..." << std::endl;
   Student mathew("Mathew");
   Student mark("Mark");
   Student luke("Luke");
   std::cout << "test_function_scope>> finished..." << std::endl;
   // destruction sequence:
   //   - Luke destroyed
   //   - Mark destroyed
   //   - Mathew destroyed
}

void test_inner_scope() {
   std::cout << "test_inner_scope>> created..." << std::endl;

   Student mathew("Mathew");

   {
      Student mark("Mark");
   }

   {
      Student luke("Luke");
   }

   std::cout << "test_inner_scope>> finished..." << std::endl;
}

void find_out_the_sequence(Student s1, Student s2) {
   std::cout << "find_out_the_sequence>> entered..." << std::endl;
   Student mathew("Mathew");
   std::cout << "find_out_the_sequence>> existed..." << std::endl;
}

int main() {
   std::cout << "main>>  program created..." << std::endl;

   // test_function_scope();

   // test_inner_scope();

   //find_out_the_sequence

   {
      Student sam("Sam");
      Student daniel("Daniel");
      find_out_the_sequence(sam, daniel);
   }


   std::cout << "main>>  program destructed..." << std::endl;
}
