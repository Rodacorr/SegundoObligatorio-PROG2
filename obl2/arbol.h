#ifndef ARBOL_H_INCLUDED
#define ARBOL_H_INCLUDED
#include <stdio.h>
#include"boolean.h"
#include  "expediente.h"
typedef struct nodoA{
    expediente info; // de xpediente
    nodoA *hizq;
    nodoA *hder;
}nodo;
typedef nodo *arbol;


void crear (arbol &a);
boolean esVacio (arbol a);
int darRaiz (arbol a);  //da el codigo de la raiz
arbol hijoIzquierdo (arbol a);
arbol hijoDerecho (arbol a);
void cons (arbol i, arbol d, int valor, arbol &a);
arbol cons (arbol i, arbol d, int valor);

void preOrden(arbol a);
void orden(arbol a); // en orden
int contarNodos(arbol a);// cantidad de expedientes

boolean pertenece (arbol a, expediente exp);  // compara un codigo del expediente si esta o no en el arbol
void Insert (arbol &a, expediente exp); // inserta el codigo del expediente en el arbol, como long int

boolean perteneceiter (arbol a, int e); //no usmos iterativo solo recursivo
void minValue (arbol a); // muestra el exoediente mas de codigo mas chico
int minimoIter (arbol a); //no usmos iterativo solo recursivo

int sumElem (arbol a);//no lo usamos
void listElem (arbol a); // muestra los codigos que no son mod 2

int maxValue (arbol a); // muestra el codigo mas grande de expediente

int cantExpe(arbol a, strings ape);

#endif // ARBOL_H_INCLUDED
