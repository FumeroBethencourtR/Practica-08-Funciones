#include "random_numbers.h"

int main (int argc, char *argv[]) {
  std::srand(std::time(nullptr));
  if (!validad(argc, argv)) {
    std::cerr << "error" << std::endl;
    return 1;
  }
  int num = random_num(argv);
  std::cout << num << std::endl;
  return 0;
}
