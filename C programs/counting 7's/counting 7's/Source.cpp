//3.39
//Counting 7's
//Akila Welihinda 6/18

#include <stdio.h>

int main(void)
{
	 int number=0;
	int sevenCounter=0;
	
	printf("Enter your number:");
	scanf("%d", &number);
		while(number>0)
		{
			if((number%10)==7)
			{
			sevenCounter=sevenCounter+1;
			}
		number=number/10;
		}
	printf("%s%d\n", "Number of 7's: ", sevenCounter);
	return 0;
}