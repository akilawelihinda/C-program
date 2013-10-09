#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void)
{
srand(time(NULL));
int x=0;
int array[13]={0};
	for(x=0; x<36000; x++)
	{
	array[2+rand()%6+rand()%6]++;
	}
printf("Sum\tFrequency\n");
for(x=2; x<=12; x++)
{
	printf("%d\t%d\n", x, array[x]);
}
}