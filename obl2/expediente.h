#ifndef EXPEDIENTE_H_INCLUDED
#define EXPEDIENTE_H_INCLUDED
#include "Fecha.h"
#include "escribano.h"
typedef struct{
    long int codigo;
    strings caratula;
    Fecha fech;
    escrib esc;
    int cantpag;
}expediente;

void cargarExpe( expediente &exp); //carga el esxpediente
void mostrarExpe( expediente exp);// muestra el expediente
boolean estaExpe (expediente exp);//esta sin hacer

//selectoras
long int darCodigo(expediente exp);
void darCaratula(expediente exp, strings &s);
//ya esta en fecha
//ya esta en escribano
int darCantpaginas(expediente exp);

// hay que implementar uno que dado un codigo imprime el expediente

#endif // EXPEDIENTE_H_INCLUDED
