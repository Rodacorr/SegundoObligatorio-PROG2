#include <stdio.h>
#include"arbol.h"
int main()
{
    expediente exp;
    cargarExpe(exp);
    mostrarExpe(exp);
    arbol a;

    Insert(a, exp);
    orden(a);
}

