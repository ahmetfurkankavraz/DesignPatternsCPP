#pragma once

#include "Printer.hpp"
#include "FooterPrinter.hpp"
#include "HeaderPrinter.hpp"

#include <string>
using std::string;

class SingletonFactory{
private:
  static SingletonFactory* instance;
  SingletonFactory() {}

public:
  static SingletonFactory* getInstance() {
    if (instance == nullptr) {
      instance = new SingletonFactory();
    }
    return instance;
  }

  Printer* getPrinter(string type){
    if(type == "header"){
      return new HeaderPrinter();
    }
    else if(type == "footer"){
      return new FooterPrinter();
    }
  }
};

SingletonFactory* SingletonFactory::instance = nullptr;
