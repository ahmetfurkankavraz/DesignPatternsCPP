#pragma once

#include "Subscriber.hpp"

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class ConcreteSubscriber2 : public Subscriber {
public:
  void handleEvent(string eventName) override {
    if (eventName == "event1")
      cout << "ConcreteSubscriber2::handleEvent(" << eventName << ")" << endl;
  }
};
