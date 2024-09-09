#include "arbol.h"
void crear (arbol &a)
{
    a=NULL;

}
boolean esVacio (arbol a){
    boolean es=TRUE;
    if (a!=NULL)
    es=FALSE;
    return es;
}

int darRaiz (arbol a){
    return (a->info.codigo);
}
arbol hijoIzquierdo (arbol a){
    return (a->hizq);
}
arbol hijoDerecho (arbol a)

{
    return (a->hder);
}
/*
void cons (arbol i, arbol d, int valor, arbol &a){

    a=new nodo;
    a->info=valor;
    a->hizq=i;
    a->hder=d;

}

arbol cons (arbol i, arbol d, int valor){
    arbol a=new nodo;
    a->info=valor;
    a->hizq=i;
    a->hder=d;
    return a;
    }

void preOrden(arbol a){
    if(a!=NULL){
        printf("%d",a->info);
        preOrden(a->hizq);
        preOrden(a->hder);
    }
}
*/
void orden(arbol a){
    if(a!=NULL){
        orden(a->hizq);
        mostrarExpe(a->info);
        orden(a->hder);
    }
}


int contarNodos(arbol a){
    int b=0;
    if(a!=NULL){
        return 1 + contarNodos(a->hder)+contarNodos(a->hizq);
    }
    else
        return 0;
}
boolean pertenece (arbol a, expediente exp)
{
 if (a == NULL)
 return FALSE;
 else
 if (a -> info.codigo == exp.codigo)
 return TRUE;
 else
 if (exp.codigo < a -> info.codigo)
 return pertenece (a -> hizq, exp);
 else
 return pertenece (a -> hder, exp);
}
void Insert (arbol &a, expediente exp)
{
    if(!pertenece(a, exp)){
     if (a == NULL)
     {
     a = new nodo;
     a -> info = exp;
     a -> hizq = NULL;
     a -> hder = NULL;
     }
     else
     {
     if (exp.codigo < a->info.codigo)
     Insert (a -> hizq, exp);
     else
     Insert (a -> hder, exp);
    }
    }
}


/*
boolean perteneceiter (arbol a, int e)
{
 boolean encontre = FALSE;
 while (a != NULL && !encontre)
 {
 if (e == a -> info)
 encontre = TRUE;
 else
 if (e < a -> info)
 a = a -> hizq;
 else
 a = a -> hder;
 }
 return encontre;
}
*/
void minValue (arbol a)
{
 if (a -> hizq == NULL)
    mostrarExpe(a->info);
 else
    return minValue (a -> hizq);
}
/*
int minimoIter (arbol a)
{
 while (a -> hizq != NULL)
 a = a -> hizq;
 return (a->info);
}

int sumElem (arbol a){
    if(a==NULL)
        return 0;
    else
        return a->info+sumElem(a->hder)+sumElem(a->hizq);

}
*/
void listElem (arbol a){
    if(a!=NULL){
        if(a->info.codigo %2!=0){
            listElem(a->hder);
            listElem(a->hizq);
            mostrarExpe(a->info);
        }
        else{
            listElem(a->hder);
            listElem(a->hizq);
        }
    }
}

int maxValue (arbol a){
    if(a->hder==NULL)
        return a->info.codigo;
    else return maxValue(a->hder);
}

int cantExpe(arbol a, strings ape){
    strings s;

    if (a == NULL)
        return 0;
    else{
        darApellido(a->info.esc, s);

        if (streq(s,ape))
            return 1 + cantExpe(a->hder, ape)+cantExpe(a->hizq,ape);
        else
            return cantExpe(a->hder, ape)+cantExpe(a->hizq, ape);
    }
}


