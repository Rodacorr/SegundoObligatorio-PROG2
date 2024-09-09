#ifndef LISTAS_H_INCLUDED
#define LISTAS_H_INCLUDED
#include "boolean.h"
#include"revicion.h"
typedef struct nodoL {
    revicion info; // para escribano no
    nodoL * sig;
 } nodo;
typedef nodo * lista;

// cera una lista de escribanos hay que cambiar las funciones a procedimientos

void crear (lista &L);

void imprimir(lista L);

boolean vacia (lista L);

revicion primero (lista L);

void resto (lista &L);

void insFront (lista &L, revicion e); //arreglar

int largoIter (lista L);

revicion ultimoIter (lista L); //no anda

int contarIter ( lista L, revicion a); // arreglar

boolean perteneceIter (lista L, int a); //pasatr a escrib

//void sustituirIter (lista &L, int a, int b);

int maximoIter(lista L);

void paresImparesIter(lista L,lista &L1,lista &L2);

void insBackIter(lista &L, int a);
#endif // LISTAS_H_INCLUDED
