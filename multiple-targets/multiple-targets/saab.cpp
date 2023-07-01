#include <iostream>
#include "cars/car.h"

int main() {
  std::cout << "A car rental" << std::endl;
  Car saab;
  std::cout << "saab: " << saab.honk() << std::endl;
  return 0;
}
