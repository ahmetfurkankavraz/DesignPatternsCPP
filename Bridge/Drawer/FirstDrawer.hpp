#pragma once

#include "Drawer.hpp"

#include <iostream>

using std::cout;
using std::endl;

class FirstDrawer : public Drawer {
public:
  void drawLine(int x1, int y1, int x2, int y2) {
    cout << "FirstDrawer::drawLine(" << x1 << ", " << y1 << ", " << x2 << ", " << y2 << ")" << endl;
  }

  void drawCircle(int x, int y, int r) {
    cout << "FirstDrawer::drawCircle(" << x << ", " << y << ", " << r << ")" << endl;
  }
};