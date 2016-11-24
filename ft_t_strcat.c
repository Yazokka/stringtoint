#include "libft.h"

void	ft_t_strcat(t_str *s1, t_str *s2)
{
	ft_memcat(s1->s, s2->s, s1->l, s2->l);
	s1->l += s2->l;
}
