#pragma once 

#include "Decorator.hpp"

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class AnotherHeaderPrinter : public Decorator {
public:
  AnotherHeaderPrinter(Component* component) : Decorator(component) {}

  void printTicket() override {
    cout << "Another Header" << endl;
    Decorator::printTicket();
  }
};