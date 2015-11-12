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
void bubbleSort(){
        int flag = 1;
        int aux;
        while(flag == 1){
                flag = 0;
                for(int i = 0; i < 9; i++){
                        if(array[i] > array[i+1]){
                                aux = array[i];
                                array[i] = array[i+1];
                                array[i+1] = aux;
                                flag = 1;
                        }

                }
        }


}


int main (){

setArray();
printArray();
bubbleSort();
printArray();
return 0;
}
