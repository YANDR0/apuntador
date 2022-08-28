#include <stdio.h>
#include "pointers.h"

int main(void)
{
    int arreglo[] = {6, 1, 6, 6, 4, 1}, tamano = 6, num = 1, veces;

    //Ver lista antes de pasarlo por una función
    for(int i = 0; i < tamano; i++){
        printf("%d ",arreglo[i]);
    }

    veces = calulate_frequency(arreglo, tamano, num);

    printf("\nEL numero %d aparece %d veces", num, veces);



  return 0;
}
