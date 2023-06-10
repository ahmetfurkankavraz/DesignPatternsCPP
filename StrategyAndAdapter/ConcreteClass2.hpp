#pragma once

#include "AbstractClass.hpp"
#include "ExternalClass2.hpp"

class ConcreteClass2 : public AbstractClass {
private:
  ExternalClass2* externalClass2;
public:
  ConcreteClass2(ExternalClass2* externalClass2) : externalClass2(externalClass2) {}
  void primitiveOperation1(int x, bool y) override {
    externalClass2->doSomething(x);
  }
  void primitiveOperation2(double a, int b) override {
    externalClass2->doSomethingElse(a);
  }
};