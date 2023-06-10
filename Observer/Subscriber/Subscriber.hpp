#pragma once

#include <string>

using std::string;

class Subscriber {
public:
  virtual void handleEvent(string) = 0;
};
