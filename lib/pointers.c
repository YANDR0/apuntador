//
// Created by Josean Camarena on 07/07/22.
// Implemented by: Yael Alejandro Rodríguez Barreto
//

// PRUEBAS #########################################

#include "pointers.h"

int bubble_sort(int *collection, int count)
{
    int vueltas = 0, a, error;
    do{
        error = 0;
        for (int i = 0; i < count - 1; i++) {
            if (*(collection + i) > *(collection + i + 1) ) {
                error = 1;
                a = *(collection + i) ;
                *(collection + i) = *(collection + i + 1) ;
                *(collection + i + 1) = a;
            }
        }
        vueltas++;
    }while(error == 1);

    return (vueltas - 1);
}

void insertion_sort(int *collection, int count)
{

}

void reverse(int *collection, int count)
{

}

int calulate_frequency(int *collection, int count, int target)
{
  return 0;
}
