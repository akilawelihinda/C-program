#include <stdio.h>
#include <math.h>
int primeTester(int number);

void main(void)
{
int x=0;
	for(x=1; x<10000; x+=2)
	{
		if(primeTester(x))
		{
		printf("%d ", x);
		}
	}
}

int primeTester(int number)
{
int x=0;
	if(number==1)
		return 1;
	for(x=2; x<sqrt((double)number); x++)
	{
		if(number%x==0)
			return 0;
	}
return 1;
}

