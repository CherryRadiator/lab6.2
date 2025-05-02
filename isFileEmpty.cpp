#include "isFileEmpty.h"
#include <iostream>

void isFileEmpty(std::ifstream& fin) {
  fin.seekg(0);
  while (!fin.eof()) {
    if (std::isdigit(static_cast<int>(fin.get()))) {
      return;
    }
  }
  std::cerr << "File is empty" << std::endl;
  exit(1);
}