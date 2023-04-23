#ifndef CIRCLE_H
#define CIRCLE_H

#define PI 3.14159265

class Circle {
 public:
  void set_radius(float radius);
  float get_area();
  float get_circumference();
  
 private:
  float _radius;
  float _area;
  float _circumference;
};



#endif

