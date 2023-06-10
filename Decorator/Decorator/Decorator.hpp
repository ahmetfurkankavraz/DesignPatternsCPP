#pragma once

#include "../Component.hpp"

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Decorator : public Component {
private:
  Component* component;
public:
  Decorator(Component* component) : component(component) {}

  void printTicket() override {
    component->printTicket();
  }
};