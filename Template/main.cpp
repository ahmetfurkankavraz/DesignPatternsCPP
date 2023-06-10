#include "Printer.hpp"
#include "PrinterType1.hpp"
#include "PrinterType2.hpp"

int main(){

  Printer* printer1 = new PrinterType1();
  Printer* printer2 = new PrinterType2();

  printer1->print();
  printer2->print();

  return 0;
}