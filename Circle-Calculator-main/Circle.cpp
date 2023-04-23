#include "Circle.h"

// mutator method to set radius
void Circle::set_radius(float radius) { _radius = radius; }
// accessor method to get area
float Circle::get_area() {
  _area = PI * _radius * _radius;
  return _area;
}

float Circle::get_circumference(){
  _circumference = 2 * PI * _radius;
  return _circumference;
}


