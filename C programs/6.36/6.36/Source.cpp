#include <stdio.h>
#define ARRAYSIZE 7

void stringReverse(char joe[], int arraySize);

void main(void)
{
	char array[]="iamfat";
	stringReverse(array, 0);
printf("%d", array[5]);
}

void stringReverse(char joe[], int on)
{
	if(joe[on]=!"\0")
		stringReverse(joe, ++on);
	printf("%c", joe[on]);
	
}