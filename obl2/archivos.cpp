#include "archivos.h"

void agregar(strings nomArch, int ent){
    FILE *f;
    f = fopen("nomArch","ab");
    fwrite(&ent,sizeof(int),1,f);
    fclose(f);
}
boolean existe (strings nomArch){
    boolean existe=FALSE;

    FILE*f=fopen(nomArch,"rb");
    if  (f!=NULL){
        fclose(f);
        existe=TRUE;
    }
    return existe;
}


boolean vacio (strings nomArch){
    boolean vacio=FALSE;
    FILE*f=fopen(nomArch,"rb");
    fseek(f,0,SEEK_END);
    if(ftell(f)==0)
        vacio=TRUE;
    fclose(f);
    return vacio;
}
