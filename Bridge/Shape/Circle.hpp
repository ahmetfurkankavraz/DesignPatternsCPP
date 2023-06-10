#pragma once

#include "Shape.hpp"

class Circle : public Shape {
private:
  double x;
  double y;
  double radius;

public:
  Circle(Drawer* drawer, double x, double y, double radius) : Shape(drawer) {
    this->x = x;
    this->y = y;
    this->radius = radius;
  }

  void draw() {
    drawer->drawCircle(x, y, radius);
  }
};
