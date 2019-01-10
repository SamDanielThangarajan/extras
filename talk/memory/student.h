#pragma once

#include <stdint.h>
#include <string>

class Student {
   public:
      // Constructor
      Student(std::string name) {
         std::cout << "Student " << name << " created" << std::endl;
         name_m = name;
      }

      // Copy constructor
      Student(const Student& other) {
         std::cout << "(copy) Student " << other.name_m << " created" << std::endl;
         name_m = other.name_m;
      }

      // Destructor   
      virtual ~Student() {
         std::cout << "Student " << name_m << " destructed" << std::endl;
      }

   private:
      std::string name_m;
};
