#include<stdio.h>

int main()
{
	int payCode;
	while (1)
	{
		printf("Enter the pay code(Maneger:1,Hourly worker:2,Commission worker:3,Piece worker:4):");
		scanf_s("%d", &payCode);
		double salary;
		int hours;
		double hourlyWage;
		double sales;
		double pieceRate, products;
		switch (payCode)
		{
		case 1:
			printf("Enter the fixed salary:");
			scanf_s("%lf", &salary);
			break;
		case 2:
			printf("Enter hourly worker hours worked:");
			scanf_s("%d", &hours);
			printf("Enter hourly worker hourly wage:");
			scanf_s("%lf", &hourlyWage);
			if (hours <= 40)
			{
				salary = hours * hourlyWage;
			}
			else
			{
				salary = ((40 * hourlyWage) + ((hours - 40)*1.5*hourlyWage));
			}
			break;
		case 3:
			printf("Enter weekly sales:");
			scanf_s("%lf", &sales);
			salary = 250 + sales * 0.057;
			break;
		case 4:
			printf("Enter the fixed amount for each item producted:");
			scanf_s("%lf", &pieceRate);
			printf("Enter the number of items produced: ");
			scanf_s("%lf", &products);
			salary = pieceRate * products;
			break;
		}
		printf("Salary is $%lf\n", salary);
	}
	return 0;
}