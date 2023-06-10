#pragma once 

#include "FileSystemItem.hpp"

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class File : public FileSystemItem {
private:
  int size;
  string name;
public:
  File(int size, string name) : size(size), name(name) {}

  void print(int nested) {
    for (int i = 0; i < nested; i++) {
      cout << "--";
    }
    cout << ">";
    std::cout << "File: " << name << " (" << size << ")" << std::endl;
  }
};