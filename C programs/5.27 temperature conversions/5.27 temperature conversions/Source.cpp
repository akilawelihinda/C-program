#include <stdio.h>

double fah(double cel);
double cel(double fah);

void main(void)
{
int x=0;
	printf("Celsius: \t Fahrenheit:\n");
		for(x=0; x<=100; x++)
		{
		printf("%d\t\t%0.2f\n", x, fah(x));
		}
	printf("\n");
		printf("Fahrenheit: \t Celsius:\n");
		for(x=32; x<=212; x++)
		{
		printf("%d\t\t%0.2f\n", x, cel(x));
		}
}

double fah(double cel)
{
	return (9.0/5.0)*cel+32;
}

double cel(double fah)
{
	return (5.0/9.0)*(fah-32);
}