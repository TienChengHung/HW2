#include<stdio.h>

int main()
{
	int workHours;
	double hourlyRate,salary;
	while (1)
	{
		printf("Enter # of hours worked(-1 to end)¡G");
		scanf_s("%d", &workHours);
		if (workHours == -1)
		{
			break;
		}
		printf("Enter hourly rate of the worker($00.00)¡G");
		scanf_s("%lf", &hourlyRate);
		if (workHours <= 40)
		{
			salary = (workHours*hourlyRate);
		}
		else
		{
			salary = ((40 * hourlyRate) + ((workHours - 40)*1.5*hourlyRate));
		}
		printf("Salary is %lf\n", salary);
	}
}