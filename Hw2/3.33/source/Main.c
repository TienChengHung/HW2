#include<stdio.h>

int main()
{
	int i, j, length, width;
	printf("Enter the length¡G");
	scanf_s("%d", &length);
	printf("Enter the width¡G");
	scanf_s("%d", &width);
	for (i = 0; i < length; i++)
	{
		for (j = 0; j < width; j++)
		{
			if ((i == 0) || (i == (length - 1)))
			{
				printf("+");
			}
			else if ((i > 0) && (i < (length - 1)) && (j == 0))
				printf("+");
			else if ((i > 0) && (i < (length - 1)) && (j == (width - 1)))
				printf("+");
			else
				printf(" ");
		}
		printf("\n");
	}
}