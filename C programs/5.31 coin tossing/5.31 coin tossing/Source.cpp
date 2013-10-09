#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int toss(void);

void main(void)
{
int heads=0;
int tails=0;
int x=0;
srand(time(NULL));
	for(x=0; x<100; x++)
	{
		if(toss()==0)
		tails++;
		else
		heads++;
	}

	printf("Heads: %d\nTails: %d", heads, tails);
}

int toss(void)
{
	if(rand()%2==0)
		return 0;
		else
		return 1;
}

