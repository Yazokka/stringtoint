#include "libft.h"

int			ft_atoi(const char *str)
{
	int		sign;
	char	*cur;
	int		result;

	result = 0;
	cur = (char *)str;
	while (ft_isspace(*cur))
		cur++;
	sign = (*cur == '-') ? -1 : 1;
	cur = (*cur == '+' || *cur == '-') ? cur + 1 : cur;
	while (*cur >= '0' && *cur <= '9')
	{
		result = result * 10 + *cur - 48;
		cur++;
	}
	result *= sign;
	return (result);
}
