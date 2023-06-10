#pragma once

#include "Printer.hpp"

#include <iostream>

using std::cout;
using std::endl;

class PrinterType1 : public Printer {
private:
  void open() {
    cout << "PrinterType1::open()" << endl;
  }
  void close() {
    cout << "PrinterType1::close()" << endl;
  }
};