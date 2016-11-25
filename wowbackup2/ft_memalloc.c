#include <stdlib.h>
#include <string.h>

void	*ft_memalloc(size_t size)
{
	char	*t;
	size_t	i;

	if ((t = malloc(size)) == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		t[i] = 0;
		i++;
	}
	return (t);
}
