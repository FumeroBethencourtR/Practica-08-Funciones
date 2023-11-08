/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file volumen-de-un-circulo-func.cc
  * @author Ricardo Fumero Bethencourt alu0101621944@ull.edu.es
  * @date Nov 08 2023
  * @brief The program calculate the volum of a circul 
  *        
  *        
  * @bug There are no known bugs
  * @see 
  */

#include "volumen-de-un-circulo.h"
/**
 * @brief Calcula el area
 *
 * @param Entra los numeros introducidos
 * @return Sale el area
 */
double Area (const double radio) {
  const double kPI{3.141592653589793};
  return kPI * radio * radio;
}
/**
 * @brief Calculo el volumen
 *
 * @param Entra el radio y la altura
 * @return Sale el volumen
 */
double Volumen (const double radio, const double altura) {
  double result_area = Area(radio);
  return altura * result_area;
}
