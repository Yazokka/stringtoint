#include "libft.h"

void	ft_lstdel(t_list **link, void (*del)(void *, size_t))
{
	t_list	*next;

	while(*link != NULL)
	{
		next = (*link)->next;
		ft_lstdelone(link, del);
		*link = next;
	}
}
