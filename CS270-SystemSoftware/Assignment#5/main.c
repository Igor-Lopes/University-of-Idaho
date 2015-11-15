/*
 * CS270 - System Software
 * Homework #5
 * November 11th , 2015
 * Igor Lopes
*/

#include <stdio.h>
#include <stdlib.h>
#include "Functions.h"

int main(){

setArrayBubble();
printArrayBubble();
bubbleSort();
printArrayBubble();

setArrayQuick();
printArrayQuick();
quickSort();
printArrayQuick();

setArrayInsert();
printArrayInsert();
insertSort();
printArrayInsert();

return 0;
}
