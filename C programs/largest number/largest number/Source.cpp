//3.24
//Find the Largest Number
//Akila Welihinda 6/18

#include <stdio.h>

int main(void)
{
	int counter=0;
	int largest=0;
	int currentNumber=0;
	
	while(counter<10)
	{
	printf("Enter number:");
	scanf("%d", &currentNumber);
		if(currentNumber>largest)
		{
		largest=currentNumber;
		}
	counter++;
	}
	
	printf("%s%d\n", "Largest Number:", largest);
	return 0;
}