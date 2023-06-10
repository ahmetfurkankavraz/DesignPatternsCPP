#pragma once 

#include "Shape.hpp"

class Rectangle : public Shape {
private:
  double x;
  double y;
  double width;
  double height;

public:
  Rectangle(Drawer* drawer, double x, double y, double width, double height) : Shape(drawer) {
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
  }

  void draw() {
    drawer->drawLine(x, y, x + width, y);
    drawer->drawLine(x + width, y, x + width, y + height);
    drawer->drawLine(x + width, y + height, x, y + height);
    drawer->drawLine(x, y + height, x, y);
  }
};