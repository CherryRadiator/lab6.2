#include <fstream>
#include <iostream>

void isFileExists (const std::ifstream& fin) {
  if (!fin.is_open()) {
    std::cerr << "File can't be open" << std::endl;
    exit(1);
  }
}