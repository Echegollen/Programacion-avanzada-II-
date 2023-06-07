#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int dato = 5;
    int *Ptrdato;

    Ptrdato = &dato;

    printf("Dato: %i\n", dato);
    printf("Direccion de dato: %p\n", &dato);
    printf("Puntero de dato: %p\n", Ptrdato);
    printf("Direccion de puntero de dato: %p\n\n", &Ptrdato);
}