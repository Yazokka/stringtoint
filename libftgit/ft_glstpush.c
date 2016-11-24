#include "libft.h"

void	ft_glstpush(t_glist **start, t_glist *link)
{
	t_glist		*cur;

	if (*start == NULL)
	{
		*start = link;
	}
	else
	{
		cur = *start;
		while (cur->next != NULL)
			cur = cur->next;
		cur->next = link;
	}
}

