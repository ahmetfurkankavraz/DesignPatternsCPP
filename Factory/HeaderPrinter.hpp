#pragma once
#include "Printer.hpp"

#include <iostream>

using std::cout;

class HeaderPrinter : public Printer {
public:
  HeaderPrinter(){}

  void print() {
      std::cout << "Header" << std::endl;
  }
};