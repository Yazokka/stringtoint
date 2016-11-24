#include "libft.h"

void	ft_glstiter(t_glist *lst, void (*f)(t_glist *elem))
{
	while (lst != NULL)
	{
		f(lst);
		lst = lst->next;
	}
}
