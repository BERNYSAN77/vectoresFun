#include <stdio.h>
#include "lecturas.h"
#include "funciones.h"
#define MAX 5



int main(void) {
 float arreglo[MAX];
 int opc,cantidad;
 do{
        opc = menu();
        //printf("opc %d",opc);
    switch(opc){
        case 1:{
            
            cantidad = leerEnteroEntre("Ingrese la cantidad de alumnos",1,MAX);
            ingresarCalificaciones(arreglo,cantidad);
            
           

        }break;
        case 2:{
            mostrarCalificaciones(arreglo,cantidad);
        }break;
        case 3:{
            calcularCalificaciones(arreglo,cantidad);

        }break;
        case 4:{
            printf("gracias");

        }break;
        default:
            printf("\nopcion no válida");
    }


 }while(opc!=4);
 
}

