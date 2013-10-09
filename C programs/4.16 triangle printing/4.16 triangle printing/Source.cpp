#include <stdio.h>

int main(void)
{
	int x=0;
	int y=0;
	int a=0;
		for(x=0; x<10; x++)
		{
			for(y=0; y<=x; y++)
			{
			printf("*");
			}
		printf("\n");
		}

		printf("\n");

		for(x=0; x<10; x++)
		{
			for(y=x; y<10; y++)
			{
			printf("*");
			}
		printf("\n");
		}

		printf("\n");

		for(x=0; x<10; x++)
		{
			for(y=0; y<10; y++)
			{
				if(y<x)
				printf(" ");
				else
				printf("*");
			}
		printf("\n");
		}
		

}