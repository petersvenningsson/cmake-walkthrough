#include <iostream>
#include "cars/car.h"
#include "msg.pb.h"

int main() {
  std::cout << "A car rental" << std::endl;
  Car volvo;
  std::cout << volvo.honk() << std::endl;
  return 0;
}
