#ifndef ESCRIBANO_H_INCLUDED
#define ESCRIBANO_H_INCLUDED
#include"stringdinamico.h"
typedef struct{
    strings nombre;
    strings apellido;
}escrib;

void cargarEscri(escrib esc);

void mostrarEscri(escrib esc);

void darNombre(escrib esc, strings &s);

void darApellido (escrib esc, strings &s);

#endif // ESCRIBANO_H_INCLUDED
