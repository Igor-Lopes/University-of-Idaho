all: prog5 clean

prog5: main.o BubbleSort.o QuickSort.o InsertSort.o
	gcc main.o BubbleSort.o QuickSort.o InsertSort.o -o prog5

main.o: main.c
	gcc -c main.c

BubbleSort.o: BubbleSort.c
	gcc -c BubbleSort.c

QuickSort.o: QuickSort.c
	gcc -c QuickSort.c

InsertSort.o: InsertSort.c
	gcc -c InsertSort.c

clean:
	rm *o
