#include <string.h>
#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	len;
	size_t	len2;
	int		result;

	len = ft_strlen(s1);
	len2 = ft_strlen(s2);
	len = (len <= len2) ? len + 1 : len2 + 1;
	len = (len <= n) ? len : n;
	result = ft_memcmp(s1, s2, len);
	return (result);
}
