#include <stdio.h>
#include <math.h>

void main(void)
{
//growth rate 1.1%
//population 7.096 billion
float population=7.096;
float rate=1.011;
int x=0;
printf("%s\t%s\t%s", "Year", "Population(billions)", "Increase(millions)\n");
	for(x=1; x<=75; x++)
	{
	printf("%d\t%0.3f\t\t\t%0.6f\n", x, population*pow(rate, x), population*pow(rate, x)*1000*0.011);
	}
}