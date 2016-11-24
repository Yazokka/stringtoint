#include "libft.h"

int		ft_t_strtoi(t_str *str)
{
	return (ft_memtoi(str->s, str->l));
}
