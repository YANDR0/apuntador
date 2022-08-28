//
// Created by Josean Camarena on 07/07/22.
// Implemented by: Yael Alejandro Rodríguez Barreto
//

// MASTER #########################################

#include "pointers.h"

//TERMINADO
int bubble_sort(int *collection, int count){
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


void insertion_sort(int *collection, int count){

}

//TERMINADO
void reverse(int *collection, int count){
    int a;
    for(int i = 0; i < count/2; i++){
        a = *(collection + i);
        *(collection + i) = *(collection + count - i - 1);
        *(collection + count - i - 1) = a;
    }
}


int calulate_frequency(int *collection, int count, int target){

    return 0;
}
