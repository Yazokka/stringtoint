#include <string.h>
#include "libft.h"

char *ft_strnstr(const char *str1, const char *str2, size_t lenght)
{
	size_t lenght2;

	if (*str2 == '\0')
		return ((char *)str1);
	lenght2 = ft_strlen(str2);
	while(*str1 != '\0' && lenght-- >= lenght2)
	{
		if (*str1 == *str2 && ft_memcmp(str1, str2, lenght2) == 0)
			return ((char *)str1);
	       str1++;	
	}
	return (NULL);
}
