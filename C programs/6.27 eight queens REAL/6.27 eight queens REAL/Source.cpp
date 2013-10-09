#include <stdio.h>
#define ROWS 8
#define COLUMNS 8
#include <time.h>
#include <stdlib.h>

void labelAttackedSquares(int array[][COLUMNS], int x, int y);
void assignRandomSquares(int queensPlacement[][COLUMNS], int attackedSquares[][COLUMNS]);
void wipeArrays(int array1[][COLUMNS], int array2[][COLUMNS]);

void main(void)
{
	//srand(time(NULL));
	int x=0;
	int y=0;
	int failure=1;
	int attackedSquares[ROWS][COLUMNS]={0};
	int queensPlacement[ROWS][COLUMNS]={0};
	while(failure)
	{
	failure=0;
	wipeArrays(attackedSquares, queensPlacement);
	assignRandomSquares(queensPlacement, attackedSquares);
		for(x=0; x<ROWS; x++)
		{
			for(y=0; y<COLUMNS; y++)
			{
				if((queensPlacement[x][y]==1) & (attackedSquares[x][y]==1))
				failure=1;
			}
		}
	}
	
	printf("success");

}

void labelAttackedSquares(int attackedSquares[][COLUMNS], int row, int column)
{
	int x=0;
	int y=0;
	int factor=1;

	for(x=0; x<8; x++)
	{
		if(x!=column)
		attackedSquares[row][x]=1;
		if(x!=row)
		attackedSquares[x][column]=1;
	}
	
	while(((row-factor)!=-1 & (column-factor)!=-1))
	{
		attackedSquares[row-factor][column-factor]=1;
		factor++;
	}
	factor=1;
	while(((row+factor)!=8 & (column+factor)!=8))
	{
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

void wipeArrays(int array1[][COLUMNS], int array2[][COLUMNS])
{
int x=0; 
int y=0;
	for(x=0; x<ROWS; x++)
	{
		for(y=0; y<COLUMNS; y++)
		{
			array1[x][y]=0;
			array2[x][y]=0;
		}
	}
}
