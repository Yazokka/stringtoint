#include <stdio.h>

int main()
{
	int input;
	int i;

	scanf("%d", &input);

	printf("\n");
	printf("\n");

	for (i = 1; i != 11; i++)
	{
		printf("%d %d %d \n",input, i, (input * i));
	}
	return 0;
}
