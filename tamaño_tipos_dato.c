#include <stdio.h>
#define TAMANO 10

int main ()
{
    char c;
    int x;
    int ARREGLO[TAMANO];
    double y;

    printf("El tamano en bytes de una variable char es: %lu\n", sizeof(c));
    printf("El tamano en bits de una variable char es: %lu\n", (8*sizeof(c)));
    printf("El tamano en nibble de una variable char es: %lu\n", (sizeof(c)*2));

    printf("\n\nEl tamano en bytes de una variable int es: %lu\n", sizeof(x));
    printf("El tamano en bits de una variable int es: %lu\n", (8*sizeof(x)));
    printf("El tamano en nibble de una variable int es: %lu\n", (sizeof(x)*2));

    printf("\n\nEl tamano en bytes de un arreglo es: %lu\n", sizeof(ARREGLO[TAMANO]));
    printf("El tamano en bits de un arreglo es: %lu\n", (8*sizeof(ARREGLO[TAMANO])));
    printf("El tamano en nibble de un arreglo es: %lu\n", (sizeof(ARREGLO[TAMANO])*2));

    printf("\n\nEl tamano en bytes de una variable double es: %lu\n", sizeof(y));
    printf("El tamano en bits de una variable double es: %lu\n", (8*sizeof(y)));
    printf("El tamano en nibble de una variable double es: %lu\n", (sizeof(y)*2));

    return 0;
}