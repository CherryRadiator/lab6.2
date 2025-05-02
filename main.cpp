#include <iostream>
#include <fstream>

int main() {
  int number;
  std::ifstream fin("first.txt");  
  std::ofstream fout("second.txt");
  if (!fin.is_open()) {
    std::cerr << "File can't be open" << std::endl;
    return 1;
  }
  
  while (fin >> number) {
    int square = static_cast<int>(number) * number;
    fout << square << " ";
  }

  fin.close();
  fout.close();
  return 0;
}