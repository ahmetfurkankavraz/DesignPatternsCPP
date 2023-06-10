#pragma once

#include "ComplexSystem.hpp"

class FacadeController {
private:
  ComplexSystem* complexSystem;
public:
  FacadeController(ComplexSystem* complexSystem) {
    this->complexSystem = complexSystem;
  }

  // there are lots of methods in ComplexSystem
  // we only want to expose a few of them
  bool returnTrue() {
    return complexSystem->returnTrue();
  }
  double return2() {
    return complexSystem->return2();
  }  
};