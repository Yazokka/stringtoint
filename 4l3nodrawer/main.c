#include <stdio.h>

int main()
{
	int razmer;
	int index = 0;

	scanf("%d", &razmer);

	if (razmer == 69)
	{
		printf("U got dirty mind :/");
		return 0;
	}

	if (razmer > 69)
	{
		printf(" \n The hui is too big \n");
		return 0;
	}
	else
		if(razmer <= 3)
		{
			printf("The hui is too small");
			return (0);
		}

	printf("           _____ \n");

		if (razmer < 8 && razmer > 3 && razmer <= 69)
		{
			while (razmer != 0)
			{
				printf("          |     |  \n");
				razmer--;
			}
		}
		else
		if (razmer >= 8)
		{
			while(razmer != 0)
			{
				if (index == 0)
				{
					printf("          |  |  |  \n");
					printf("          |-----|  \n");
				}
				printf("          |     |  \n");
				razmer--;
				index++;
			}
		}
		printf("        --      --  \n");
		printf("       |          | \n");
		printf("       |          | \n");
		printf("        ---------- \n");
}
