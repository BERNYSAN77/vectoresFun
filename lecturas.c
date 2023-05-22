
#include <stdio.h>
#include "lecturas.h"

int leerEnteroPositivo(char *mensaje){
    int valor;
    
    do{
        printf("\n%s ",mensaje);
        scanf("%d",&valor);

    }while(valor <= 0);
    return valor;

}

int leerEnteroEntre(char *mensaje, int menor, int mayor){
     int valor;
    
    do{
        printf("\n%s entre %d y %d ",mensaje,menor,mayor);
        scanf("%d",&valor);

    }while(valor < menor || valor > mayor);
    return valor;

}
float leerFlotanteEntre(char *mensaje, float menor, float mayor){
     float valor;
    
    do{
        printf("\n%s entre %.2f y %.2f ",mensaje,menor,mayor);
        scanf("%f",&valor);

    }while(valor < menor || valor > mayor);
    return valor;


}