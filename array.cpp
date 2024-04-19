#include <iostream>
#include "array.h"

void enterDataIntoArray(int *array){
    for (int i = 0; i < SIZE; i++) {
        printf("*(array +%d) = ", i);
        scanf("%d", &*(array +i));
    }
}

void displayArray(int *array){

    for(int i=0; i<SIZE; i++){
        printf("*(array +%d) = %d\n", i, *(array+i));
    }
}

