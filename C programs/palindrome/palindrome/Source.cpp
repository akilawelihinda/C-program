//3.35
//Palindrome Tester
//Akila Welihinda 6/18

#include <stdio.h>

int main(void)
{
	int number=0;
	
	printf("Enter number:\n");
	scanf("%d", &number);
		if(number/10000==number%10)
		{	
	
			if((number/1000)%10==(number/10)%10)
			{
			printf("Number is a palindrome\n");
			}
			else
			printf("Number is NOT a palindrome\n");
		}
		else
		printf("Number is NOT a palindrome\n");
		
	return 0;
}