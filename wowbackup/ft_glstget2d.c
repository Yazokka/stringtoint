#include <stdlib.h>
#include "libft.h"

t_glist	*ft_glstget2d(t_glist *start, int i, int j)
{
	if ((start = ft_glstget(start, i)) != NULL)
		start = ft_glstget(start, j);
	return (start);
}
