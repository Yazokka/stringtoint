#include "libft.h"

void	ft_t_strcpy(t_str *str, t_str *orig)
{
	ft_memcpy(str->s, orig->s, orig->l);
	str->l = orig->l;
}
