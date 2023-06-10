#pragma once

#include "FileSystemItem.hpp"

#include <vector>
#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::vector;
using std::string;

class Folder : public FileSystemItem {
private:
  string name;
  vector<FileSystemItem*> fileSystems;

public:
  Folder(std::string name) : name(name) {}

  void add(FileSystemItem* fileSystem) {
    fileSystems.push_back(fileSystem);
  }

  void print(int nested) {
    for (int i = 0; i < nested; i++) {
      cout << "--";
    }
    cout << ">";
    std::cout << "Folder: " << name << std::endl;
    for (auto fileSystem : fileSystems) {
      fileSystem->print(nested + 1);
    }
  }
};