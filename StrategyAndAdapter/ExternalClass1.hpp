#pragma once

#include <iostream>

using std::cout;
using std::endl;

class ExternalClass1{
public:
  void doSomething(bool y, int x) {
    cout << "ExternalClass1::doSomething(" << x << ", " << y << ")" << endl;
  }
  void doSomethingElse(int b, double a) {
    cout << "ExternalClass1::doSomethingElse(" << a << ", " << b << ")" << endl;
  }
};