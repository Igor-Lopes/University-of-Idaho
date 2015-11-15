/*
 * CS270 - System Software
 * Homework #1
 * September 09, 2015
 * Igor Lopes
*/

#include <stdio.h>
#include <stdlib.h>

int array[10];

void setArrayQuick(){
	int i;
        for(i = 0; i < 10; i ++){
                array[i] = rand() % 1000 + 1;
        }
}

void printArrayQuick(){
	int i;
	printf("---------QuickSort----------------\n");
         for(i = 0; i < 10; i ++){
                printf("%d\n", array[i]);
        }
        printf("----------------------------------\n");
}

void swapElements(int array[], int leftIndex, int rightIndex){
                int tmp_left = array[leftIndex];
                int tmp_right = array[rightIndex];
                array[leftIndex] = tmp_right;
                array[rightIndex] = tmp_left;
}

void sort(int a[], int left, int right) { //Quick Sort Algorithm

                int left_Id, right_Id, x;
                left_Id = left;
                right_Id = right;
                x = a[(left + right) / 2];
                while(left_Id <= right_Id)
                {
                        while(a[left_Id] < x && left_Id < right){
                                left_Id++;
                        }
                        while(a[right_Id] > x && right_Id > left){
                                right_Id--;
                        }
                        if(left_Id <= right_Id){
                                swapElements(a, left_Id, right_Id); //Swap elements
                                left_Id++;
                                right_Id--;
                        }
                }
                if(right_Id > left){
                        sort(a, left, right_Id);
                }
                if(left_Id < right){
                        sort(a, left_Id, right);
                }
}

void quickSort(){
        sort(array, 0, 9);
}

