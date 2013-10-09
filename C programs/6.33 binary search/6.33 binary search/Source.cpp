#include <stdio.h>
#define SIZE 20
int search(int array[], int key, int low, int high);

void main(void)
{
	int x=0;
	int array[SIZE];
	int key=0;
		for(x=0; x<10; x++)
		array[x]=2*x;
	printf("Enter key:\n");
	scanf("%d", &key);

		if(search(array, key, 0, SIZE-1)!=-1)
			printf("Key found at %d\n", search(array, key, 0, SIZE-1));
		else
			printf("Key not found\n");

}

int search(int array[], int key, int low, int high)
{
int middle=(high+low)/2;


	if(key==array[middle])
		return middle;
	else if(low>high)
		return -1;
	else if(key>array[middle])
		search(array, key, middle+1, high);
	else
		search(array, key, low, middle-1);

}
