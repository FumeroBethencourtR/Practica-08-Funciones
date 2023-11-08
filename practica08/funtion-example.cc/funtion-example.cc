#include "calculo.h"

int main (int argc,char *argv[]) {
  if(argc != 4) {
    std::cerr << "error" << std::endl;
    return 1;
  }
  double num1 = std::stod(argv[1]);
  double num2 = std::stod(argv[2]);
  double num3 = std::stod(argv[3]);
  double result = calculo (num1, num2, num3);
  std::cout << result << std::endl;
  return 0;
}
