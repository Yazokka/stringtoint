#include <stdio.h>
#include <stdlib.h>

int main()
{
	int input, count = 0, sum = 0;
	float medium;

	printf("Gimme input");
scanning : scanf("%d", &input);

	while(input != 0)
	{
		if(input >= 1 && input <= 10)
		{
			sum += input;
			count++;
			goto scanning;
		}
		else
		{
			printf("Numar gresit");
			goto scanning;
		}
	}
	medium = sum / count;
	printf("Suma este : %d \n", sum);
	printf("Count : %d \n", count);
	printf("Average is : %.2f", medium);
}

