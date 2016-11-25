#include <string.h>
#include "libft.h"

t_str	*ft_t_strcutchr(t_str *str, char c)
{
	size_t	size;
	char	*fst_c;
	t_str	*slice;

	fst_c = str->s;
	size = str->l;
	while (size--)
	{
		if (*fst_c == c)
		{
			size = fst_c - str->s;
			if ((slice = ft_t_strsub(str, 0, size)) == NULL)
				return (NULL);
			ft_memcpy_bwd(str->s, fst_c, str->l - size);
			str->l -= size;
			return (slice);
		}
		if (size)
			fst_c++;
	}
	return (NULL);
}
