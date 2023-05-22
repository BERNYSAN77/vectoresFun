#include <stdio.h>
#include "funciones.h"
#include "lecturas.h"


void ingresarCalificaciones(float arreglo[],int alumnos){
    int i;
    float nota;
    for(i=0;i<alumnos;i++){
        printf("Nota %d",i+1);
        nota = leerFlotanteEntre("ingrese la nota",1,10);
        //printf("Ingrese la nota %d",i+1);
        //scanf("%f",&arreglo[i]);
        arreglo[i]=nota;
    }

}

void mostrarCalificaciones(float arreglo[],int alumnos){
     int i;
    for(i=0;i<alumnos;i++){
        printf("\nLa nota %d es %f",i+1,arreglo[i]);
       
    }

}
void calcularCalificaciones(float arreglo[],int alumnos){
     int i;
     float menor=arreglo[0];
     float mayor=arreglo[0];
     int A =0,B=0,C=0,D=0,E = 0;
    for(i=0;i<alumnos;i++){
        if(arreglo[i] < 4)
            E++;
        else if(arreglo[i] < 6)
            D++;
        else if(arreglo[i] < 8)
            C++;
        else if(arreglo[i] < 9)
            B++;
        else
            A++;
        if(arreglo[i] > mayor)
            mayor = arreglo[i];
         if(arreglo[i] < menor)
            menor = arreglo[i];    
   
    }
    printf("A %d \nB %d \nC %d \nD %d \nE %d",A,B,C,D,E);
    printf("\nNota mínima: %.2f \nNota maxima %.2f",menor,mayor);

}

int menu(){
    int opc;
     printf("\n1. Ingresar calificaciones");
    printf("\n2. Mostrar calificaciones");
    printf("\n3. Calcular calificaciones");
    printf("\n4. Salir");
    opc = leerEnteroPositivo("Ingrese una opción");
    return opc;

}