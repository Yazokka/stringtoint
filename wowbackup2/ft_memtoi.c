#include <string.h>
#include "libft.h"

int		ft_memtoi(char *s, size_t size)
{
	int		sign;
	int		result;

	if (size == 0)
		return (0);
	sign = 1;
	result = 0;
	while (--size && ft_isspace(*s))
		++s;
	++size;
	if (size && (*s == '-' || *s == '+'))
	{
		sign = (*s == '-') ? -1 : 1;
		s++;
		size--;
	}
	while (size-- > 0 && ft_isdigit(*s))
	{
		result = result * 10 + *s - 48;
		if (size)
			s++;
	}
	result *= sign;
	return (result);
}
