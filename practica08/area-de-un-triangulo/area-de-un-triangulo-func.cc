/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file area-de-un-triangulo-func.cc
  * @author Ricardo Fumero Bethencourt alu0101621944@ull.edu.es
  * @date Nov 08 2023
  * @brief The program calcul the area of a triangle 
  *        
  *        
  * @bug There are no known bugs
  * @see https://campusingenieriaytecnologia2324.ull.es/mod/page/view.php?id=17705
  */

#include "area-de-un-triangulo.h"
/**
 * @brief calcula el area de un triangulo
 *
 * @param el valor que tiene el lado
 * @return el resultado de la formula de area de un triangulo
 */

double Area (const int lado) {
  return std::sqrt(3.0) * (lado * lado) / 4.0;
}
