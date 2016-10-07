#include <stdio.h>
#include <ctype.h>

char ft_toupper(char *str)
{
	int index;

	index = 0;

	while(str[index] != '\0')
	{
		if (str[index] >= 97 && str[index] <= 122)
		{
			str[index] -= 32;
		}
		index++;
	}
	return (*str);
}

int main()
{
	char str[50] = "Hello World";
	ft_toupper(str);
	printf("%s", str);
	return 0;
}
