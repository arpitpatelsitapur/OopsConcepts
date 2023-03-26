#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  string line;
  ifstream inputFile("file.txt");

  while (!inputFile.eof()) {
    getline(inputFile, line);
    cout << line << endl;
  }

  inputFile.close();
  return 0;
}

