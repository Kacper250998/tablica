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
int findMaximumValue(int *array){
    int max = *array;
    for(int i=0; i<SIZE; i++){
        if(*(array +i) > max){
            max = *(array +i);
        }
    }
    return max;
}
int findMinimumValue(int *array){
    int min = *array;
    for(int i=0; i<SIZE; i++){
        if(*(array +i) < min){
            min = *(array +i);
        }
    }
    return min;
}
