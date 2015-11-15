/*
 * CS270 - System Software
 * Homework #1
 * September 09, 2015
 * Igor Lopes
*/

#include <stdio.h>
#include <stdlib.h>

int array[10];

void setArrayBubble(){
	int i;
        for(i = 0; i < 10; i ++){
                array[i] = rand() % 1000 + 1;
        }
}

void printArrayBubble(){
	int i;
	printf("----------BubbleSort--------------\n");
         for(i = 0; i < 10; i ++){
                printf("%d\n", array[i]);
        }
        printf("----------------------------------\n");
}

void bubbleSort(){
        int flag = 1;
        int aux;
        while(flag == 1){
                flag = 0;
		int i;
                for(i = 0; i < 9; i++){
                        if(array[i] > array[i+1]){
                                aux = array[i];
                                array[i] = array[i+1];
                                array[i+1] = aux;
                                flag = 1;
                        }

                }
        }


}
