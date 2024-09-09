#ifndef ESTADO_H_INCLUDED
#define ESTADO_H_INCLUDED
typedef enum {SATISFACTORIA, INCOMPLETO, PENDIENTE}estado;

void cargarEstado(estado &est);
void mostrarEstado(estado est);
#endif // ESTADO_H_INCLUDED
