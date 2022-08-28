#include <stdio.h>
#include "pointers.h"

int main(void)
{
    int arreglo[] = {6, 1, 5, 2, 4, 3}, tamano = 6, v = 0;

    //Ver lista antes de pasarlo por una función
    for(int i = 0; i < tamano; i++){
        printf("%d ",arreglo[i]);
    }
    printf("\n");

    insertion_sort(arreglo, tamano);

    //Lista de resultados
    for(int i = 0; i < tamano; i++){
        printf("%d ",arreglo[i]);
    }
  return 0;
}
