#include <stdio.h>

int main(void)
{
		int paycode=0;
		float weeklySalary;
		float hourlyWage;
		float grossWeeklySales;
		float hours;
		float items;
		float commission;

		printf("Enter pay code\n");
		scanf("%d", &paycode);

		switch(paycode)
		{
		case 1:
		printf("Enter weekly salary\n");
		scanf("%f", &weeklySalary);
		printf("Salary: $%f\n", weeklySalary);
		break;

		case 2:
		printf("Enter hourly wage and amount of hours\n");
		scanf("%f%f", &hourlyWage, &hours);
			if(hours>40)
				printf("Salary: $%f\n", 40*hourlyWage+(hours-40)*1.5*hourlyWage);
			else
				printf("Salary: $%f\n", hours*hourlyWage);
		break;

		case 3:
		printf("Enter gross weekly sales\n");
		scanf("%f", &grossWeeklySales);
		printf("Salary: $%f\n", 250+0.057*grossWeeklySales);
		break;

		case 4:
		printf("Enter amount of items produced and commision per item\n");
		scanf("%f\n%f", &items, &commission);
		printf("Salary: $%f\n", items*commission);
		break;

		default:
		printf("The paycode you entered wasn't valid\n");
		break;
		}

return 0;
}