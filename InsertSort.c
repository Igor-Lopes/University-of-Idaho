/*
 * CS270 - System Software
 * Homework #1
 * September 09, 2015
 * Igor Lopes
*/

#include <stdio.h>
#include <stdlib.h>

int array[10];

void setArray(){
        for(int i = 0; i < 10; i ++){
                array[i] = rand() % 1000 + 1;
        }
}

void printArray(){
         for(int i = 0; i < 10; i ++){
                printf("%d\n", array[i]);
        }
        printf("----------------------------------\n");
}

void insertSort(){
        int j, aux;
        for(int i = 1; i < 10; i++){
                j = i;
                while(j > 0 && array[j-1] > array[j]){
                        aux = array[j];
                        array[j] = array[j-1];
                        array[j-1] = aux;
                        j--;
                }
        }
}

int main (){

setArray();
printArray();
insertSort();
printArray();
return 0;
}


