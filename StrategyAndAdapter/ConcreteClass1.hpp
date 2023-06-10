#pragma once

#include "AbstractClass.hpp"
#include "ExternalClass1.hpp"

class ConcreteClass1 : public AbstractClass {
private:
  ExternalClass1* externalClass1;
public:
  ConcreteClass1(ExternalClass1* externalClass1) : externalClass1(externalClass1) {}
  void primitiveOperation1(int x, bool y) override {
    externalClass1->doSomething(y, x);
  }
  void primitiveOperation2(double a, int b) override {
    externalClass1->doSomethingElse(b, a);
  }
};