#include "AbstractClass.hpp"

#include <iostream>

using std::cout;
using std::endl;

class Client {
private:
  AbstractClass* abstractClass;
public:
  Client(AbstractClass* abstractClass) : abstractClass(abstractClass) {}

  void doSomething() {
    abstractClass->primitiveOperation1(1, true);
    abstractClass->primitiveOperation2(2.0, 3);
    cout << endl;
  }
};