#include <stdio.h>

int exponent(int a, int b);

void main(void)
{
	int number=0;
	int power=0;
	printf("Enter number and the power\n");
	scanf("%d\n%d", &number, &power);
	printf("%d\n", exponent(number, power));
}

int exponent(int number, int power)
{
	if(power<2)
	return number;

	else
	return number*exponent(number, power-1);
}