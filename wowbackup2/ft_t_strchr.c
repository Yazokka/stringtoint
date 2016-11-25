#include "libft.h"

char	*ft_t_strchr(t_str *str, char c)
{
	return (ft_memchr(str->s, c, str->l));
}
