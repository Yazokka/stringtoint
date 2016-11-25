#include <string.h>
#include "libft.h"

char * ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	size_t	i;
	
	str = ft_strdup((const char *)s);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != 0)
	{
		str[i] = f(str[i]);
		i++;
	}
	return (str);
}
