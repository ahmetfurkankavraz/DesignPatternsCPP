#pragma once

#include <iostream>

using std::cout;
using std::endl;

class Printer {
protected:
  virtual void open() = 0;
  virtual void close() = 0;

public:
  Printer(){}
  
  void print() {
    
    // it is virtual method which differs in concrete objects
    open(); 

    // common code
    cout << "Printing..." << endl;

    // it is virtual method which differs in concrete objects
    close();
  }
};