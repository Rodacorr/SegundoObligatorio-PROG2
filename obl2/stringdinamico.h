#ifndef STRINGDINAMICO_H_INCLUDED
#define STRINGDINAMICO_H_INCLUDED
#include <stdio.h>
#include "boolean.h"

const int MAX = 80;
typedef char * strings;
void strcrear (strings &s);
/* crea un string vac�o */
 void strdestruir (strings &s);
/* libera la memoria usada por el string */
int strlar (strings s);
/* devuelve el largo del string s */
void strcop (strings &s1, strings s2);
/* copia el contenido del string s2 en s1 */
void scan (strings &s);
/* lee el string s desde teclado */
void strcon (strings &s1, strings s2);
/* concatena el contenido de s2 al final de s1 */
void strswp (strings &s1, strings &s2);
/* intercambia los contenidos de s1 y s2 */
void print (strings s);
/* imprime el string s por pantalla */
boolean strmen (strings s1, strings s2);
/* determina si s1 es alfab�ticamente menor que s2 */
boolean streq (strings s1, strings s2);
/* determina si los strings s1 y s2 son iguales */

#endif // STRINGDINAMICO_H_INCLUDED
