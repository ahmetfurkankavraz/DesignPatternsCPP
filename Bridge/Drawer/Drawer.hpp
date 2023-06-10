#pragma once

class Drawer {
public:
  virtual void drawLine(int x1, int y1, int x2, int y2) = 0;
  virtual void drawCircle(int x, int y, int radius) = 0;
};