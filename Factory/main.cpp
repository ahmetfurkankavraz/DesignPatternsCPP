#include "SingletonFactory.hpp"

int main(){
  SingletonFactory* factory = SingletonFactory::getInstance();

  factory = SingletonFactory::getInstance(); // This will not create a new instance
                                             // beside, it will return the same instance

  factory->getPrinter("header")->print();
  factory->getPrinter("footer")->print();

  return 0;
}