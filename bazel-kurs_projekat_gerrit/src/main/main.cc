#include <iostream>
#include "src/lib/matematika.h"

int main() {
  Matematika m;
  std::cout << m.saberi(2,3) << std::endl;
  std::cout << m.oduzmi(3,2) << std::endl;
  std::cout << m.mnozi(2,3) << std::endl;  
  std::cout << m.deli(6,2) << std::endl;  
  return 0;
}

