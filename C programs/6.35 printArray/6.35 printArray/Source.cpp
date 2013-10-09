#include <stdio.h>
#define SIZE 10
void printArray(int array[], int size);

void main(void)
{
	int array[SIZE]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	printArray(array, SIZE);
}

void printArray(int array[], int size)
{
	if(size>1)
	printArray(array, size-1);
	int x=0;
	printf("\n");
	for(x=0; x<size; x++)
	{
		printf("%d ", array[x]);
	}
	
}