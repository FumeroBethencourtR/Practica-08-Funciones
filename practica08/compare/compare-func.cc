/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file compare-func.cc
  * @author Ricardo Fumero Bethencourt alu0101621944@ull.edu.es
  * @date Nov 07 2023
  * @brief The program 
  *        
  *        
  * @bug There are no known bugs
  * @see 
  */
#include <iostream>
#include <cmath>
#include "compare.h"
const double e = 2.7128;
bool AreEqual(const double number1, const double number2, const double epsilon = 1e-7) {
  return std::abs(number1 - number2) < epsilon;
}
void compare(const int argc, char *argv[]) {
  double number2 = std::strtod(argv[2], nullptr);
  double number1 = std::strtod(argv[1], nullptr);
  if (AreEqual(number1, number2)) {
    std::cout << "Los números son aproximadamente iguales." << std::endl;
  } else {
    std::cout << "Los números no son aproximadamente iguales." << std::endl;
  }
}
