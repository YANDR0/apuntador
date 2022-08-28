#include <stdio.h>
#include "pointers.h"
#include "pointers.c"

int main(void)
{
    int arreglo[] = {6, 3, 5, 2, 4, 1}, tamano = 6;

    //Ver lista antes de pasarlo por una función
    for(int i = 0; i < tamano; i++){
        printf("%d ",arreglo[i]);
    }
    printf("\n");

    bubbble_sort(arreglo, tamano);

  return 0;
}
