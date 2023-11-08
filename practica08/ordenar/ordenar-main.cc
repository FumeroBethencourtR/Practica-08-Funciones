/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file ordenar-main.cc
  * @author Ricardo Fumero Bethencourt alu0101621944@ull.edu.es
  * @date Nov 08 2023
  * @brief The program 
  *        
  *        
  * @bug There are no known bugs
  * @see 
  */
#include "ordenar.h"

int main (int argc, char *argv[]) {
  std::string palabra;
  palabra += argv[1];
  if (Comprobar_orden(palabra)) {
    std::cout << "esta ordenado" << std::endl;
  } else {
    std::cout << "no esta ordenado" << std::endl;
  }
}
