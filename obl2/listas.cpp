#include "listas.h"
/*
void crear (lista &L){
    L = NULL;
}

void imprimir(lista L){
    while(L!=NULL){
        printf("%d",L->info);
        L=L->sig;}
}
boolean vacia (lista L){
    boolean es = FALSE;

    if (L == NULL)
        es = TRUE;
    return es;
}

// Precondición: lista NO vacía
revicion primero (lista L){
    return L-> info;
}

// Precondición: lista NO vacía
void resto (lista & L){
    lista aux = L;
    L = L -> sig;
    delete aux;
}

void insFront (lista & L, revicion e){
    lista aux = new nodo;
    aux -> info = e;
    aux -> sig = L;
    L = aux;
}
int largoIter (lista L){
    int a=0;
    while(L!= NULL){
        a++;
        L= L->sig;
    }
    return a;
}
revicion ultimoIter (lista L){
    while(L!=NULL){
        L=L->sig;
    }
    return L->info;
}


int contarIter ( lista L, revicion a){
    int x=0;
    while(L!=NULL){
        if(streq(L->info,a)){
            x++;
            L= L->sig;
            }
        else
            L= L->sig;
    }
    return x;
}

boolean perteneceIter (lista L, int a){
    boolean pertenece= FALSE;
    while(L!=NULL && !pertenece){
        if(L->info==a)
            pertenece=TRUE;
        else
            L=L->sig;
    }
return pertenece;
}
/*
void sustituirIter (lista &L, int a, int b){
    while(L!=NULL){
        if(L->info==a)
            L->info=b;
        L=L->sig;
        }
    }

int maximoIter(lista L){
    int a=L->info;
    while(L!=NULL){
        if(L->info>=a){
            a=L->info;
            L=L->sig;
        }
        else
            L=L->sig;
    }
}
void paresImparesIter(lista L,lista &L1,lista &L2){
    while(L!=NULL){
        if(L->info%2==0)
            L1->info=L->info;
        else
            L2->info=L->info;
    }
}
void insBackIter(lista &L, int a){
    while(L!=NULL){
        if(L==NULL)
            L->info=a;
        else
            L=L->sig;
    }
}

*/

