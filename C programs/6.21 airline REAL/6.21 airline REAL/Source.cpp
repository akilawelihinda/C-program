#include <stdio.h>
#define ArraySize 10

int seatsTaken=0;
void printTicket(int ticketNumber, int choice);
int placeFirst(int array[]);
int placeEconomy(int array[]);
void main(void)
{
	int choice=0;
	int array[ArraySize]={0};
	int arraySum=0;
	int x=0;
	
	while(seatsTaken!=10)
	{
	arraySum=0;
	printf("Please type 1 for first class or 2 for economy class");
	scanf("%d", &choice);

		if(choice==1)
		placeFirst(array);	

		if(choice==2)
		placeEconomy(array);
	
	}

}

int placeFirst(int array[])
{
int x=0;
int choice=0;
static int firstClassSeats=0;
	for(x=0; x<5; x++)
			{
				if(array[x]==0)
				{
				firstClassSeats++;
				seatsTaken++;
				array[x]=1;
				printTicket(x+1, 1);
				break;
				}
			}	

			if(firstClassSeats==ArraySize/2 & seatsTaken!=10)
			{
				printf("There is no space left in first class. Would you like to be placed in the economy class? Enter 0 for yes and 1 for no.");
				scanf("%d", &choice);
					if(choice==0)
						placeEconomy(array);
					else
						printf("The next flight leaves in 3 hours");
			}
return firstClassSeats;
}

int placeEconomy(int array[])
{
int y=0;
int choice=0;
static int economyClassSeats=0;
	for(y=5; y<10; y++)
			{
				if(array[y]==0)
				{
				economyClassSeats++;
				seatsTaken++;
				array[y]=1;
				printTicket(y+1, 2);
				break;
				}
			}	

	if(economyClassSeats==ArraySize/2 & seatsTaken!=10)
			{
				printf("There is no space left in economy class. Would you like to be placed in the first class? Enter 0 for yes and 1 for no.");
				scanf("%d", &choice);
					if(choice==0)
						placeFirst(array);
					else
						printf("The next flight leaves in 3 hours");
			}
return economyClassSeats;
}

void printTicket(int seatNumber, int choice)
{
	if(choice==1)
		printf("Seat Number: %d\nClass: First Class\n", seatNumber);
	else
		printf("Seat Number: %d\nClass: Economy Class\n", seatNumber);

}