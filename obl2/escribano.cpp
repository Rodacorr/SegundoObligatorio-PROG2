#include"escribano.h"

void cargarEscri(escrib esc){
    printf("ingrese el apellido del escribano:");
    fflush(stdin);
    strcrear(esc.apellido);
    scan(esc.apellido);
    printf("ingrese el nombre del escribano:");
    fflush(stdin);
    strcrear(esc.nombre);
    scan(esc.nombre);
}
void mostrarEscri(escrib esc){
    print(esc.apellido);
    print(esc.nombre);
}

void darApellido(escrib esc, strings &s){
    strcop(s,esc.apellido);

}

void darNombre (escrib esc, strings &s){
    strcop(s, esc.nombre);
}
