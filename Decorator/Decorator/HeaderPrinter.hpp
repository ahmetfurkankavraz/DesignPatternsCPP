#pragma once

#include "Decorator.hpp"

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class HeaderPrinter : public Decorator {
public:
  HeaderPrinter(Component* component) : Decorator(component) {}

  void printTicket() override {
    cout << "Header" << endl;
    Decorator::printTicket();
  }
};