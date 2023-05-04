#include <iostream>
#include <string>

std::string DELETE_LOWERCASE(std::string str) {
  std::string result = "";
  for (char c : str) {
    if (!islower(c)) {
      result += c;
    }
  }
  return result;
}

int main() {
  std::string str = "Hello World";
  std::cout << DELETE_LOWERCASE(str) << std::endl;
  return 0;
}
