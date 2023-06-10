#include "SingletonFactory.hpp"

int main(){
  SingletonClass* factory = SingletonClass::getInstance();
  factory = SingletonClass::getInstance(); // This will not create a new instance
  factory = SingletonClass::getInstance();
  return 0;
}