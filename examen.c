//Programa hecho por mi :)
#include <stdio.h>
#include <string.h>
#include "funciones.h"
//la formulacion de la funcion de login

//realizamos la funcion de la calculacion de precio de la ruta

//Realizamos la funcion y con estructuras para calcular el descuento

//Funcion para visualizar el costo, descuento y precio total

//Realizamos funcion de red social donde declaramos y realizamos estructuras para indicar mensajes......*/
//Funcion para el menu
int main() {
printf("--- Sistema de Transporte Publico ---\n");
if (login()) {
    menu();
} else {
    printf("Ingreso incorrecto. Fin del programa.\n");
}

return 0;
}