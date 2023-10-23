#include<stdio.h>

int main()
{
	int accountNumber;
	double beginningBalance, totalCharges, totalCredits, creditLimit,newBalance;
	while (1)
	{
		printf("Eneter account number:");
		scanf_s("%d", &accountNumber);
		if (accountNumber == -1)
		{
			break;
		}
		printf("Enter beginning balance:");
		scanf_s("%lf", &beginningBalance);
		printf("Enter total charges:");
		scanf_s("%lf", &totalCharges);
		printf("Enter total credits:");
		scanf_s("%lf", &totalCredits);
		printf("Enter credit limit:");
		scanf_s("%lf", &creditLimit);
		newBalance = beginningBalance + totalCharges - totalCredits;
		if (newBalance > creditLimit)
		{
			printf("Account¡G%d\n", accountNumber);
			printf("Credit Limit¡G%lf\n", creditLimit);
			printf("New Balance¡G%lf\n", newBalance);
			printf("Credit Limit Exceeded.\n");
		}
	}
	return 0;
}