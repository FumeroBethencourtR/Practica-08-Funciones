#include "change-case.h"

int main (int argc, char *argv[]) {
  if (argc < 2) {
    std::cerr << "error" << std::endl;
    return 1;
  } 
  std::string palabra_input = argv[1];
  std::string resultado = change(palabra_input);
  std::cout << resultado << std::endl;
  return 0;
}
