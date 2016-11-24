#include <string.h>

size_t	ft_strchrcnt(const char *s, char c)
{
	size_t	occ;

	occ = 0;
	while (*s != '\0')
	{
		if (*s == c)
			occ++;
		s++;
	}
	return (occ);
}

