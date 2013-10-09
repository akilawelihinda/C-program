#include <stdio.h>
	
int main(void)
{
	int x=0;
	printf("Number\tSquare\tCube\n");
		for(x=0; x<11; x++)
		{
		printf("%d\t%d\t%d\n", x, x*x, x*x*x);
		}
return 0;
}