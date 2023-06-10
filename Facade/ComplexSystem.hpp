#pragma once

#include <iostream>

using std::cout;
using std::endl;

class ComplexSystem {
public:
  void doSomething(bool y, int x) {
    cout << "ComplexSystem::doSomething(" << x << ", " << y << ")" << endl;
  }
  void doSomethingElse(int b, double a) {
    cout << "ComplexSystem::doSomethingElse(" << a << ", " << b << ")" << endl;
  }
  int return1() {
    return 1;
  }
  double return2() {
    return 2.0;
  }
  bool returnTrue() {
    return true;
  }
};