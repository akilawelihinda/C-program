#include <stdio.h>


	int main(void)
	{
		static int x=0;
		if(x<10)
		{
			x++;
			main();		
		}
		else
		printf("I am done");
	return 0;
	}
