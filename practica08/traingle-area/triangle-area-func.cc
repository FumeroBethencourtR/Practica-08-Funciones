#include "triangle-area.h"

bool validad (const int argc, char *argv[]) {
  if (argc == 4 && argv[1] > 0 && argv[2] > 0 && argv[3] > 0) {
      return true;
  }
  return false;
}
double calculo (char *argv[]) {
  double num1 = std::stod(argv[1]);
  double num2 = std::stod(argv[2]);
  double num3 = std::stod(argv[3]);
  double simperimetro = (num1 + num2 + num3) / 2;
  double result = (simperimetro * (simperimetro - num1) * (simperimetro - num2) * (simperimetro - num3));
  if (result < 0) {
    return result;
  } else {
    return std::sqrt(result);
  }
}
