#include "libft.h"

t_bool	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (true);
	}
	return (false);
}
