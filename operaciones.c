#include <stdio.h>

float calcularDescuento(float pre) {
    float descuento = 0.0;

    if (pre < 50.0) {
        descuento = 0.0;
    } else if (pre >= 50.0 && pre < 100.0) {
        descuento = pre * 0.05;
    } else if (pre >= 100.0 && pre < 500.0) {
        descuento = pre * 0.1;
    } else if (pre >= 500.0) {
        descuento = pre * 0.2;
    }

    return descuento;
}
float calcularPrecioRuta(char tpruta) {
    float pre;
// Realizamos los casos de los tipos de rutas 
    switch (tpruta) {
        case 'U':
            pre = 0.10;
            break;
        case 'I':
            pre = 0.15;
            break;
        case 'Y':
            pre = 0.20;
            break;
        default:
            printf("Tipo de ruta inválido.\n");
            pre = 0.0;
            break;
    }

    return pre;
}
