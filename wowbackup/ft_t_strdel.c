#include <stdlib.h>
#include "libft.h"

void	ft_t_strdel(t_str **str)
{
	free((*str)->s);
	free(*str);
	*str = NULL;
}
