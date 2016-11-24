#include "libft.h"

t_glist	*ft_glstdup(t_glist *orig, void *(*dup)(void *ct), \
void (*del)(void **ct))
{
	void		*content;
	t_glist		*new_link;

	if ((content = dup(orig->content)) == NULL)
		return (NULL);
	new_link = ft_glstnew(&(content), del);
	return (new_link);
}
