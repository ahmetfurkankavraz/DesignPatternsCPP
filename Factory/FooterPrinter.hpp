#pragma once
#include "Printer.hpp"

#include <iostream>

using std::cout;

class FooterPrinter : public Printer {
public:
  FooterPrinter(){}

  void print() {
      std::cout << "Footer" << std::endl;
  }
};