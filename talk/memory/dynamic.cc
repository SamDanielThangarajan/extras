#include <iostream>
#include "student.h"

void create_students_in_heap() {
   for (int i = 0; i < 5; i++ ) {
      // Object exists in heap but not accessible
      new Student(std::to_string(i));
   }
}

void create_student_in_heap_n_access() {

   int32_t variable1 = 0;
   int32_t variable2 = 0;
   int32_t variable3 = 0;
   variable1++;
   variable2++;
   variable3++;

   Student *s = new Student("mathew");

   std::cout << "Memory locations..." << std::endl;
   std::cout << "Address of variable1: " << &variable1 << std::endl;
   std::cout << "Address of variable2: " << &variable2 << std::endl;
   std::cout << "Address of variable3: " << &variable3 << std::endl;
   std::cout << "Address of s: " << &s << std::endl;
   std::cout << "Address s is pointing to: " << s << std::endl;

   delete s;

}

int main() {
   /*
    * No destruct will be called...
    */
   // create_students_in_heap();

   create_student_in_heap_n_access();
}

