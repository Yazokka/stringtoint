#include <stdlib.h>
#include <string.h>

char	*ft_memnew(size_t size)
{
	char	*new;

	return (new = (char *)malloc(sizeof(*new) * size));
}
