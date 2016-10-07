#include <stdio.h>
#include <ctype.h>

char ft_tolower(char *str)
{
	int index;

	index = 0;

	while (str[index] != '\0')
	{
		if (str[index] >= 65 && str[index] <= 90)
		{
			str[index] += 32;
		}
		index++;
	}
	return(*str);
}

int main()
{
	char str[50] = "MAZAFAKA";

	ft_tolower(str);

	printf("%s", str);
	return 0;
}
