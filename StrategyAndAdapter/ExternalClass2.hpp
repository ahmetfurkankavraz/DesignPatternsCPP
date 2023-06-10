#pragma once

#include <iostream>

using std::cout;
using std::endl;

class ExternalClass2{
public:
  void doSomething(int x) {
    cout << "ExternalClass2::doSomething(" << x << ")" << endl;
  }
  void doSomethingElse(double a) {
    cout << "ExternalClass2::doSomethingElse(" << a << ")" << endl;
  }
};