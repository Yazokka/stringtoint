#include <string.h>

void *ft_memcpy(void *dest, const void *str, size_t lenght)
{
	char *c1;
	char *c2;

	if (lenght == 0 || dest == str)
		return (dest);
	c1 = (char *)dest;
	c2 = (char *)str;
	while (--lenght)
		*c1++ = *c2++;
	*c1 = *c2;
	return (dest);
}
