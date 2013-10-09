#include <stdio.h>
#define ROWS 8
#define COLUMNS 8
#include <time.h>
#include <stdlib.h>

void labelAttackedSquared(int array[][COLUMNS], int x, int y);
void assignRandomSquares(int queensPlacement[][COLUMNS], int attackedSquares[][COLUMNS]);

void main(void)
{
	//srand(time(NULL));
	int x=0;
	int y=0;
	int failure=1;
	int attackedSquares[ROWS][COLUMNS];
	int queensPlacement[ROWS][COLUMNS];

	while(failure)
	{
	failure=0;
	assignRandomSquares(queensPlacement, attackedSquares);
		for(x=0; x<ROWS; x++)
		{
			for(y=0; y<COLUMNS; y++)
			{
				if(queensPlacement[x][y]==1 & attackedSquares[x][y]==1)
				{
				failure=1;
				}
			}
		}
	}
	
	printf("success");

}

void labelAttackedSquares(int attackedSquares[][COLUMNS], int row, int column)
{
	int x=0;
	int factor=1;
	for(x=0; x<ROWS; x++)
	{
		attackedSquares[row][x]=1;
		attackedSquares[x][column]=1;
	}
	
	while(((row-factor)!=-1 & (column-factor)!=-1)&((row+factor)!=8 & (column+factor)!=8))
	{
		attackedSquares[row-factor][column-factor]=1;
		attackedSquares[row+factor][column+factor]=1;
		factor++;
	}
}

void assignRandomSquares(int queensPlacement[][COLUMNS], int attackedSquares[][COLUMNS])
{
	int total=0;
	int x=0;
	int y=0;
		while(total!=8)
		{
		x=rand()%8;
		y=rand()%8;
			if(queensPlacement[x][y]==0)
			{
				queensPlacement[x][y]=1;
				total++;
				labelAttackedSquares(attackedSquares, x, y);
			}
		}
}
