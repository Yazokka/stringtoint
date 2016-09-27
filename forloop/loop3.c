#include <stdio.h>

int main()
{
	int i = 0;
	int j = 1;
	int p = 10;
	int result;

	for (i = 0; i < p; i++)
	{
		if (i % 2 == 0)
		{
			result += i;
			printf("%d", i);
		}
	}
	printf("\n %d \n", result);
	return 0;
}
