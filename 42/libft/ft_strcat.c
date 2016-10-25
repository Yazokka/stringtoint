#include <string.h>

char *ft_strcat(char *dest, const char *src)
{
	size_t index = 0;
	size_t indexx = 0;

	while (dest[index] != '\0')
	{
		index++;
	}

	while (src[indexx] != '\0')
	{
		dest[index] = src[indexx];
		index++;
		indexx++;
	}
	return dest;	
}
