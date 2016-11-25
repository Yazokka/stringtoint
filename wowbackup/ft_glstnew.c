#include <stdlib.h>
#include "libft.h"

t_glist		*ft_glstnew(void **ct, void (*del)(void **ct))
{
	t_glist		*new_link;

	if ((new_link = (t_glist *)malloc(sizeof(*new_link))) == NULL)
	{
		if (del != NULL)
			del(ct);
		return (NULL);
	}
	new_link->next = NULL;
	new_link->content = *ct;
	return (new_link);
}

