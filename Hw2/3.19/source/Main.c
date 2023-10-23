#include<stdio.h>

int main()
{
	int days;
	double loanPrincipal, interestRate,interestCharge;
	while (1)
	{
		printf("Enter loan principal¡G");
		scanf_s("%lf", &loanPrincipal);
		if (loanPrincipal == -1)
		{
			break;
		}
		printf("Enter interest rate¡G");
		scanf_s("%lf", &interestRate);
		printf("Enter term of the loan in days ¡G");
		scanf_s("%d", &days);
		interestCharge = (loanPrincipal*interestRate*days / 365);
		printf("The interest charge is ¡G%lf\n", interestCharge);
	}
	return 0;
}