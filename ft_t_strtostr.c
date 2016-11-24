#include <stdlib.h>
#include "libft.h"

char	*ft_t_strtostr(t_str *str)
{
	char	*new;

	if ((new = (char *)malloc(sizeof(*new) * (str->l + 1))) == NULL)
		return (NULL);
	ft_memcpy(new, str->s, str->l);
	new[str->l + 1] = '\0';
	return (new);
}
