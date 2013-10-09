#include <stdio.h>

int main(void)
{
	int x=0;
	int y=0;

	for(x=0; x<10; x++)
	{
		for(y=0; y<10; y++)
		{
			
			if(x<=4)
			{
			if(y>=5-x && y<=5+x)
				printf("*");
			else
				printf(" ");
			}	
				if(x>4)
				{
					if(y>=x-3 && y<=9-(x-4))
					printf("*");
					else
					printf(" ");
				}
		}
	printf("\n");
	}

return 0;
}