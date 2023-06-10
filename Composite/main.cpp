#include "File.hpp"
#include "Folder.hpp"
#include "FileSystemItem.hpp"

#include <iostream>

using std::cout;
using std::endl;

int main(){

  Folder* rootDirectory = new Folder("root");
  rootDirectory->add(new File(10, "file1"));
  rootDirectory->add(new File(20, "file2"));
  
  Folder* folder1 = new Folder("folder1");
  folder1->add(new File(30, "file3"));
  folder1->add(new File(40, "file4"));
  rootDirectory->add(folder1);

  Folder* folder2 = new Folder("folder2");
  folder2->add(new File(50, "file5"));
  folder2->add(new File(60, "file6"));
  folder2->add(new File(70, "file7"));
  rootDirectory->add(folder2);

  FileSystemItem* fileSystem = rootDirectory;

  fileSystem->printFileSystem();
  
  return 0;
}
