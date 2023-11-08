#include "random_numbers.h"

bool validad (const int argc, char *argv[]) {
  if (argc == 3 && std::stoi(argv[1]) < std::stoi(argv[2])) {
    return true;
  }
  return false;
}
int random_num (char *argv[]) {
  return std::stoi(argv[1]) + std::rand() % (std::stoi(argv[2]) - std::stoi(argv[1]) + 1);
}
