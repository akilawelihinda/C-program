//3.17
//Gas Mileage
//Akila Welihinda 6/18

#include <stdio.h>

int main(void)
{
	float miles=0;
	float gallons=0;
	float totalMiles=0;
	float totalGallons=0;
	
		while((int)gallons!=-1)
		{
		printf("\nEnter the gallons used (-1 to end):\n");
		scanf("%f", &gallons);	
			if((int)gallons==-1)
			{
				break;
			}
		totalGallons=totalGallons+gallons;
		printf("Enter the miles driven: \n");
		scanf("%f", &miles);
		totalMiles=totalMiles+miles;
		printf("The miles / gallon for this tank was: %f", miles/gallons);
			
		}
	printf("The overall average miles/gallon was %f\n", totalMiles/totalGallons);
	
	return 0;
}