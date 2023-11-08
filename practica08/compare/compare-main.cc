/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file compare-main.cc
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

void Usage(const int argc, char *argv[]) {
  if (argc != 3) {
    std::cout << "Usage: " << argv[0] << " TEXT\n";
    std::cout << "Usa un numero de parametros inadecuado a la función\n";
    std::exit(EXIT_FAILURE);
  }
}
int main(int argc, char *argv[]) {
  Usage(argc, argv);
  compare(argc, argv);
  return 0;
}
