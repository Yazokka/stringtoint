#include <string.h>
#include <stdlib.h>
#include "libft.h"

t_str	*ft_t_strnew(char *s, size_t size)
{
	t_str	*new;

	if ((new = (t_str *)malloc(sizeof(*new))) == NULL)
		return (NULL);
	new->l = size;
	new->s = s;
	if (new->s == NULL && new->l > 1 && (new->s = ft_memnew(new->l)) == NULL)
	{
		ft_t_strdel(&new);
		return (NULL);
	}
	return (new);
}
