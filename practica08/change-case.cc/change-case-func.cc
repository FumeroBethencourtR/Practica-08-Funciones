#include "change-case.h"
/**
 * @brief cambia las letras minusculas a mayuscula y viceversa
 *
 * @param la serie de caracteres introducidos en una frase contenido en un
 *        string
 * @return la palabra con las letras cambiadas(mayus a minus) y al contrario
 */

std::string change(std::string palabra_input) {
  std::string palabra_output;
  for (char letra : palabra_input) {
    if (letra <= 'z' && letra >= 'a') {
      letra -= ('a' - 'A'); 
      palabra_output += letra;
    } else if (letra <= 'z' && letra >= 'A') {
      letra -= ('A' - 'a'); 
      palabra_output += letra;
    } else {
      palabra_output += letra;
    }
  }
  return palabra_output;
}

