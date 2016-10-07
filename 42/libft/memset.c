#include <stdio.h>
#include <string.h>

char ft_memset(char *str, char replace, int lenght)
{
	int index;

	index = 0;
	while (index < lenght)
	{
		str[index] = replace;
		index++;
	}
	return *str;
}

int main()
{
	char str[50] = "Hello World";
	
	printf("%s \n", str);
	ft_memset(str, '5', 6);
	printf("%s", str);

	return 0;
}

