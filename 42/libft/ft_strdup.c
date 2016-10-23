#include <string.h>
#include <stdio.h>
#include <stdlib.h>

size_t ft_strlen(const char *str)
{
	int index;
	while(str[index] != '\0')
	{
		index++;
	}
	return (index);
}

char *ft_strdup(const char *str)
{
    size_t len = ft_strlen(str);
    size_t i = 0;
    char *result = malloc(len + 1);
    while ( i <= len)
    {
        result[i] = str[i];
	i++;
    }
    return result;
}

int main()
{
	char str[9] = "123456789";
	char *istr;

	istr = ft_strdup(str);

	printf("%s", istr);
	return 0;
}
