#include "expediente.h"

void cargarExpe( expediente &exp){
    strings s;
    printf("Ingrese el codigo del expediente:");
    scanf("%ld",&exp.codigo);
    printf("ingrese la caratula:");
    fflush(stdin);
    strcrear(s);
    scan(s);
    strcop(exp.caratula,s);
    CargarFecha(exp.fech);
    cargarEscri(exp.esc);
    printf("ingrese la cantidad de paginas:");
    scanf("%d",exp.cantpag);

}


void mostrarExpe( expediente exp){
    printf("%ld",exp.codigo);
    printf("\n");
    print(exp.caratula);
    MostrarFecha(exp.fech);
    fflush(stdin);
    //mostrarEscri(exp.esc);
    printf("%d",exp.cantpag);
}

long int darCodigo(expediente exp){
    return exp.codigo;
}
void darCaratula(expediente exp, strings &s){
    strcop(s,exp.caratula);
}


int darCantpaginas(expediente exp){
    return exp.cantpag;
}
