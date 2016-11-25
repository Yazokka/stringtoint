#include <stdlib.h>
#include "libft.h"

void	ft_glstdelone(t_glist **link, void (*del)(void **ct))
{
	if (del != NULL)
		del(&((*link)->content));
	free(*link);
	*link = NULL;
}
