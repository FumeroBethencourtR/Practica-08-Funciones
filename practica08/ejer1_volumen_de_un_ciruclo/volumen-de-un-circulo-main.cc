/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file volumen-de-un-circulo-main.cc
  * @author Ricardo Fumero Bethencourt alu0101621944@ull.edu.es
  * @date Nov 08 2023
  * @brief The program calculate the volum of a circul 
  *        
  *        
  * @bug There are no known bugs
  * @see https://campusingenieriaytecnologia2324.ull.es/mod/page/view.php?id=17705
  */

#include "volumen-de-un-circulo.h"

int main(int argc, char *argv[]) {
  double radio = std::stod(argv[1]);
  double altura = std::stod(argv[2]);
  double result_volumen = Volumen(radio, altura);
  std::cout << result_volumen << std::endl;
  return 0;
}

