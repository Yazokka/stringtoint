#include <string.h>

char *ft_strncat(char *dest, const char *src, size_t n)
{
	size_t index = 0;
	size_t indexx = 0;

	while (dest[index] != '\0')
	{
		index++;
	}

	while (indexx < n)
	{
		dest[index] = src[indexx];
		index++;
		indexx++;
	}
	return dest;
}
