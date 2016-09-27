#include <stdio.h>
 
int main()
{
	int i, fact;
	int input;

	i = 1;
	fact = 1;

	scanf("%d", &input);

	while(i <= input)
	{
		fact = fact * i;
		i++;
	}
	printf("%d %d \n", input, fact);
	return 0;
}
