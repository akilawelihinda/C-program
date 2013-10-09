#include <stdio.h>

int gcd(int x, int y);

void main(void)
{
int x=0;
int y=0;
printf("enter two numbers\n");
scanf("%d\n%d", &x, &y);
printf("%d", gcd(x,y));
}

int gcd(int x, int y)
{
	if(x==0)
		return y;
	else if(y==0)
		return x;
	else
		return gcd(y, x%y);
}

