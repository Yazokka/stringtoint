#include <stdlib.h>
#include "libft.h"

t_glist		*ft_glstcpy(t_glist *link)
{
	t_glist		*new;

	new = ft_glstnew(&(link->content), NULL);
	new->next = NULL;
	return (new);
}
