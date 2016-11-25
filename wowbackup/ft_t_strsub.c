#include <string.h>
#include "libft.h"

t_str	*ft_t_strsub(t_str *str, size_t start, size_t size)
{
	t_str	*new;

	if ((new = ft_t_strnew(NULL, size)) == NULL)
		return (NULL);
	ft_memcpy(new->s, str->s + start, size);
	return (new);
}
