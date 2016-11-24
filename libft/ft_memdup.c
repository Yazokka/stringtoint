#include <string.h>
#include "libft.h"

char	*ft_memdup(char *s, size_t size)
{
	char	*new;

	if ((new = ft_memnew(size)) == NULL)
		return (NULL);
	ft_memcpy(new, s, size);
	return (new);
}
