#pragma once

class AbstractClass {
public:
  virtual void primitiveOperation1(int, bool) = 0;
  virtual void primitiveOperation2(double, int) = 0;
};