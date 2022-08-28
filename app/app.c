#include <stdio.h>
#include "pointers.h"

int main(void)
{
    int arreglo[] = {6, 3, 5, 2, 4, 1}, tamano = 6, v = 0;

    //Ver lista antes de pasarlo por una función
    for(int i = 0; i < tamano; i++){
        printf("%d ",arreglo[i]);
    }
    printf("\n");

    v = bubble_sort(arreglo, tamano);

    for(int i = 0; i < tamano; i++){
        printf("%d ",arreglo[i]);
    }
    printf("\nSe dieron %d vueltas",v);

  return 0;
}
