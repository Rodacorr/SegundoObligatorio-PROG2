#include "revicion.h"
void cargarRevision (revicion &rev){
    CargarFecha(rev.fecRealizado);
    printf("ingrese el motivo de la revision:");
    fflush(stdin);
    strcrear(rev.motivoRev);
    scan(rev.motivoRev);
    cargarEstado(rev.est);
}

void mostrarRevision(revicion rev){
    MostrarFecha(rev.fecRealizado);
    print(rev.motivoRev);
    printf("%ld",rev.codigo);
    mostrarEstado(rev.est);
}

void darMotivo(revicion rev, strings &s){
    strcop(s, rev.motivoRev);
}
long int darCodigoRev(revicion rev){
    return rev.codigo;
}
estado darEstado(revicion rev){
    return rev.est;
}
