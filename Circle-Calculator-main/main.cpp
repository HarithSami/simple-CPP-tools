#include <iostream>
#include "Circle.h"

int main() {
  float raduis;
  Circle circle;
  std::cout << "The circle has a raduis of ";
  std::cin >> raduis;
  circle.set_radius(raduis);
  float area = circle.get_area();
  std::cout << "The circle has an area of " << area << " m^2.\n";
  float circumference = circle.get_circumference();
  std::cout << "The circle has a circumference of " << circumference << " m.\n";
  return 0;
}


