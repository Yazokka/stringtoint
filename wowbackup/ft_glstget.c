#include "libft.h"

t_glist	*ft_glstget(t_glist *start, int n)
{
	while (--n && start != NULL)
		start = start->next;
	return (start);
}
