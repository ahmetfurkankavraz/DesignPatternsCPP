#pragma once

#include "Subscriber/Subscriber.hpp"

#include <list>
#include <string>

using std::list;
using std::string;

class Publisher {
private:
  list<Subscriber*> subscribers;

public:
  void addSubscriber(Subscriber* subscriber) {
    subscribers.push_back(subscriber);
  }

  void publishEvent(string eventName){
    for (auto subscriber : subscribers) {
      subscriber->handleEvent(eventName);
    }
  }

};
