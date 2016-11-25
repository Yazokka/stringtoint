#include <string.h>

size_t	ft_strlen(const char *s)
{
	const char	*eos;

	eos = s;
	while (*eos != '\0')
		eos++;
	return (eos - s);
}
