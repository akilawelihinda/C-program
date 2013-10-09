#include <stdio.h>

void stringReverse(char joe[]);

void main(void)
{
	char array[10]="iamfat";
	stringReverse(array);
}

void stringReverse(char *a)
{
	if(*a!='\0')
	stringReverse(a+1);

	printf("%c", *a);
}