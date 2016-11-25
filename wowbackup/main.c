#include <stdio.h>
int main()
{
	char	string[80];
	int	nc = 0, sum = 0, count;
	float	result, secondnc, secondsum;

	printf("Enter the string containing both digits and alphabet \n");
	scanf("%s", string);
	for (count = 0; string[count] != '\0'; count++)
	{
		if (string[count] == '1' && string[count + 1] == '0')
		{
			nc += 1;
			sum += 10;
			count += 2;
		}

		if (string[count] >= '0' && string[count] <= '9')
		{
			nc += 1;
			sum += (string[count] - '0');									       
		}
	}
		printf("NO. of Digits in the string = %d\n", nc);
		printf("Sum of all digits = %d\n", sum);
		if (sum % nc  == 0)
		{
			secondnc = nc;
			secondsum = sum;
			result = secondsum /  secondnc;
			printf("The average is %.0f", result);
		}
		else
		{
			secondnc = nc;
			secondsum = sum;
			result = secondsum / secondnc;
			printf("The average is %.2f", result);
		}
		return 0;
}

