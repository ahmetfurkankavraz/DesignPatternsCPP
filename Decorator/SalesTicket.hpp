#pragma once

#include "Component.hpp"

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class SalesTicket : public Component {
public:
  void printTicket() override {
    cout << "Ticket is printing..." << endl;
  }
};