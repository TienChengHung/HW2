#include<stdio.h>
#include <math.h>

int main()
{
	double principal = 5000;
	int years = 15;
	double rate, compoundInterest;
	for (rate = 0.10; rate <= 0.12; rate += 0.005)
	{
		compoundInterest = principal * pow(1.0 + rate, years);
		printf("Compound Interest is ¡G$%.2lf\n", compoundInterest);
	}
	return 0;
}