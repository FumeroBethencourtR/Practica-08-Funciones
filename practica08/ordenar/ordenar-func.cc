/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file ordenar-func.cc
  * @author Ricardo Fumero Bethencourt alu0101621944@ull.edu.es
  * @date Nov 08 2023
  * @brief The program 
  *        
  *        
  * @bug There are no known bugs
  * @see 
  */
#include "ordenar.h"
/**
 * @brief comprieba si esta ordenado
 *
 * @param la palabra
 * @return si esta o no ordenada
 */
bool Comprobar_orden(const std::string palabra) {
  int size = palabra.size();
  for (int i = 0; i < size - 1; ++i) {
    char letra = palabra[i];
    if (letra > palabra[i + 1]) {
      return false;
    }
  }
  return true;
}
    
