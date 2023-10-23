#include<stdio.h>

int main()
{
	while (1)
	{
		double sales, salary;
		printf("Enter sales in dollars(-1 to end):");
		scanf_s("%lf", &sales);
		if (sales == -1)
		{
			break;
		}
		salary = 200 + (sales*0.09);
		printf("Salary is %lf¡G\n", salary);
	}
	return 0;
}