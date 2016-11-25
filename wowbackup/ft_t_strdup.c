#include <string.h>
#include "libft.h"

t_str	*ft_t_strdup(t_str *orig)
{
	t_str	*new;
	char	*s;

	if ((s = ft_memdup(orig->s, orig->l)) == NULL)
		return (NULL);
	if ((new = ft_t_strnew(s, orig->l)) == NULL)
	{
		ft_memdel(&s);
		return (NULL);
	}
	return (new);
}
