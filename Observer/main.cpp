#include "Publisher.hpp"
#include "Subscriber/ConcreteSubscriber1.hpp"
#include "Subscriber/ConcreteSubscriber2.hpp"

#include <iostream>

using std::cout;
using std::endl;

int main(){

  Publisher* publisher = new Publisher();

  ConcreteSubscriber1* subscriber1 = new ConcreteSubscriber1();
  ConcreteSubscriber2* subscriber2 = new ConcreteSubscriber2();

  publisher->addSubscriber(subscriber1);
  publisher->addSubscriber(subscriber2);

  publisher->publishEvent("event1"); // only second subscriber will handle this event
  publisher->publishEvent("event2"); // only first subscriber will handle this event
  publisher->publishEvent("event3"); // only first subscriber will handle this event
  publisher->publishEvent("event4"); // no subscriber will handle this event

  return 0;
}