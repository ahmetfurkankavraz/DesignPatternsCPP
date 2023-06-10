#pragma once

#include "Printer.hpp"

#include <iostream>

using std::cout;
using std::endl;

class PrinterType2 : public Printer {
private:
  void open() {
    cout << "PrinterType2::open()" << endl;
  }
  void close() {
    cout << "PrinterType2::close()" << endl;
  }
};