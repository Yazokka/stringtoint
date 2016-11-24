#include <stdlib.h>
#include "libft.h"

void	ft_glstdel(t_glist **start, void (*del)(void **ct))
{
	t_glist	*next;

	while (*start != NULL)
	{
		next = (*start)->next;
		ft_glstdelone(start, del);
		*start = next;
	}
}
