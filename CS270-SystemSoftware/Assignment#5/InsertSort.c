/*
 * CS270 - System Software
 * Homework #1
 * September 09, 2015
 * Igor Lopes
*/

#include <stdio.h>
#include <stdlib.h>

int array[10];

void setArrayInsert(){
	int i;
        for(i = 0; i < 10; i ++){
                array[i] = rand() % 1000 + 1;
        }
}

void printArrayInsert(){
	int i;
	printf("----------InsertSort--------------\n");
         for(i = 0; i < 10; i ++){
                printf("%d\n", array[i]);
        }
        printf("----------------------------------\n");
}

void insertSort(){
        int i, j, aux;
        for(i = 1; i < 10; i++){
                j = i;
                while(j > 0 && array[j-1] > array[j]){
                        aux = array[j];
                        array[j] = array[j-1];
                        array[j-1] = aux;
                        j--;
                }
        }
}

