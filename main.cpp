#include <iostream>
#include "array.h"

void menu(void){
    printf("\n1. Enter the values into array\n");
    printf("2. Display the content of the array\n");
    printf("3. Determine the maximum value\n");
    printf("4. Determine the minimum value\n");
    printf("0. EXIT\n");
    printf(" Select an option\n");
}

int main() {
    int array[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9,10,};
    printf("Simple array...\n");

    int option = 0;

    do {
        menu();
        scanf("%d",&option);

        switch(option){
            case 0:
                break;
            case 1:
                enterDataIntoArray(array);
                break;
            case 2:
                displayArray(array);
                break;
            case 3:
                printf("Maximum value = %d\n",findMaximumValue(array));
                break;
            case 4:
                printf("Minimum value = %d\n",findMinimumValue(array));
                break;

            default:
                printf("Choose the right option\n");
        }

    }while(option!=0);

    return 0;
}

