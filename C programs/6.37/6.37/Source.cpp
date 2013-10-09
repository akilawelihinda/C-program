#include <stdio.h>
#define ARRAYSIZE 10

int recursiveMinimum(int array[], int size);

void main(void)
{
	int array[]={3,4,2,4,100,4,5,2,1,323};
	printf("%d", recursiveMinimum(array, ARRAYSIZE));
}

int recursiveMinimum(int array[], int size)
{
static int min=array[0];
static int x=0;
	if(x<size)
	{
	x++;
		if(min>array[x-1])
		{
		min=array[x-1];
		}
	recursiveMinimum(array, ARRAYSIZE);
	}
return min;
}