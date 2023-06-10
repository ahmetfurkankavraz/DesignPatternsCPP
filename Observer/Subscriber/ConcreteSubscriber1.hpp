#pragma once

#include "Subscriber.hpp"

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class ConcreteSubscriber1 : public Subscriber {
public:
  void handleEvent(string eventName) override {
    if (eventName == "event2")
      cout << "ConcreteSubscriber1::handleEvent(" << eventName << ")" << endl;
    else if (eventName == "event3")
      cout << "ConcreteSubscriber1::handleEvent(" << eventName << ")" << endl;
  }
};
