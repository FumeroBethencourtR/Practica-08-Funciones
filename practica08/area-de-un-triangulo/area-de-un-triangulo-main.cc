/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file area-de-un-triangulo-main.cc
  * @author Ricardo Fumero Bethencourt alu0101621944@ull.edu.es
  * @date Nov 08 2023
  * @brief The program calcul the area of a triangle 
  *        
  *        
  * @bug There are no known bugs
  * @see https://campusingenieriaytecnologia2324.ull.es/mod/page/view.php?id=17705
  */

#include "area-de-un-triangulo.h"

int main (int argc, char *argv[]) {
  int lado = std::stod(argv[1]);
  double result = Area(lado);
  std::cout << result << std::endl;
}
