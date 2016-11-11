#include <string.h>
#include <stdio.h>

char * ft_strrchr(const char *str, int i)
{
	size_t index = 0;
	char *dest;

	while (str[index] != i)
	{
		index++;
	}

	while(str[index] != '\0')
	{
		dest[index] = str[index];
		index++;
	}
	return dest;
}

int main()
{
	char str[] = "Hello";

	printf("%s", ft_strrchr(str, 'e'));
}
