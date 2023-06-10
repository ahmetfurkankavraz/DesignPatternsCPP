#pragma once

#include "Decorator.hpp"

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class FooterPrinter : public Decorator {
public:
  FooterPrinter(Component* component) : Decorator(component) {}

  void printTicket() override {
    Decorator::printTicket();
    cout << "Footer" << endl;
  }
};