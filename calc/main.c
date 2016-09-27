#include <stdio.h>
#include <stdlib.h>

float ft_add(float *a, float *b)
{
	float result;
	result = *a + *b;
	return (result);
}

float ft_minus(float *a, float *b)
{
	float result;
	result = *a - *b;
	return (result);
}

float ft_multiply(float *a, float *b)
{
	float result;
	result = *a * *b;
	return (result);
}

float ft_divide(float *a, float *b)
{
	float result;
	result = *a / *b;
	return (result);
}

int main()
{
	char opr;
	float result, number1, number2;
	printf("Enter the first number \n");
	scanf("%f", &number1);
	printf("Second number \n");
	scanf("%f", &number2);
start : printf("Operator \n");
	scanf("%s", &opr);

	if (opr == 'a' || opr == 'A')
	{
		printf("The result of adding is : %.0f", ft_add(&number1,&number2));
		return (0);
	}

	if (opr == 's' || opr == 'S')
	{
		printf("The result of substraction is : %.0f", ft_minus(&number1,&number2));
		return (0);
	}

	if (opr == 'm' || opr == 'M')
	{
		printf("The result of multilication is : %.0f", ft_multiply(&number1,&number2));
		return (0);
	}

	if (opr == 'd' || opr == 'D')
	{
		printf("The result of division is : %.2f", ft_divide(&number1,&number2));
		return (0);
	}

	if (opr != 'a' || opr != 'A' || opr != 's' || opr != 'S' || opr != 'm' || opr != 'M' || opr != 'd' || opr != 'D')
	{
		goto start;
	}
}
