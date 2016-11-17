#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str)
{
	int i = 0;
	int index = 0;

	while(str[index] != '\0')
	{
		if (str[index] > 48 && str[index] < 57)
		{
			i = str[index] - '0';
		}
		return (i);
		index++;
	}
	return (0);
}

int main()
{
	char str[] = "-23456";
	int index = 0;
	int sum = 0;

		printf("%d", ft_atoi(str));
	

}


