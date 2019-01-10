#include <iostream>
#include "student.h"

static Student student("Mathew");
static Student student2("Mark");
static Student student3("Luke");

int main() {
   std::cout << "Main program created..." << std::endl;
   std::cout << "Main program destructed..." << std::endl;
}
