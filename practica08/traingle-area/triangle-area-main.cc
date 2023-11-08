#include "triangle-area.h"

int main (int argc, char *argv []) {
  if (!validad(argc, argv)) {
    std::cerr << "error" << std::endl;
    return 1;
  }
  if (calculo(argv) < 0) {
    std::cerr << "Not a valid Triangle" << std::endl;
    return 1;
  } else {
    double result = calculo(argv);
    std::cout << result << std::endl;
    return 0;
  }
}
