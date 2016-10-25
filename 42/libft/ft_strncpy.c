#include <string.h>

char *ft_strncpy(char * dst, const char * src, size_t len)
{
	size_t temp = 0;

	while (src[temp] != '\0' && temp < len)
	{
		dst[temp] = src[temp];
		temp++;
	}
	while(temp < len)
	{
		dst[temp] = '\0';
		temp++;
	}
	return dst;
}
