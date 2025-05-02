#include <iostream>
#include <fstream>
#include "isFileEmpty.h"
#include "isFileExists.h"

int main() {
  long long number;
  std::ifstream fin("first.txt");  
  isFileExists(fin);
  isFileEmpty(fin);
  fin.seekg(0);
  std::ofstream fout("second.txt");
  
  while (fin >> number) {
    long long square = static_cast<long long>(number) * number;
    fout << square << " ";
  }

  fin.close();
  fout.close();
  return 0;
}