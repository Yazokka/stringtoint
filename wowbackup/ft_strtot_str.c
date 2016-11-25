#include "libft.h"

t_str	*ft_strtot_str(char *str)
{
	return (ft_t_strnew(str, ft_strlen(str)));
}
