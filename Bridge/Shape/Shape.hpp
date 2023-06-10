#pragma once

#include "../Drawer/Drawer.hpp"

class Shape {
protected:
  Drawer* drawer;

public:
  Shape(Drawer* drawer) : drawer(drawer) {}
  virtual void draw() = 0;
};