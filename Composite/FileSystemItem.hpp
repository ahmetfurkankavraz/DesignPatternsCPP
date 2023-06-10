#pragma once

class FileSystemItem {
public:
  virtual void print(int) = 0;
  void printFileSystem() {
    print(0);
  }
};