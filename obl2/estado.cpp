#include <stdio.h>
#include"estado.h"

void cargarEstado(estado &est){
    int n=0;
    printf("ingrese el estado de la revision, 1 para satisfactoria, 2 para incompleto, 3 para pendiente");
    scanf("%d",n);
    if(n==1)
        est=SATISFACTORIA;
    else if (n==2)
        est=INCOMPLETO;
    else est=PENDIENTE;
}

void mostrarEstado(estado est){
    if(est==SATISFACTORIA)
        printf("satisfactoria");
        else if (est==INCOMPLETO)
            printf("incompleto");
            else
                printf("pendiente");
}

