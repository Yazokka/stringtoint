#include <stdio.h>

int main()
{
	int index = 0;
	int input, j;

	scanf("%d", &input);

	for (index = 0; index < input; index++)
	{
		if (index % 2 != 0)
		{
			printf("%d", index);
		}
	}
	return 0;
}
