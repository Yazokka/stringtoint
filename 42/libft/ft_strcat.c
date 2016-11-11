#include <string.h>
#include <stdio.h>
#include "libft.h"

char *ft_strcat(char *dest, const char *src)
{
	return(ft_strncat(dest, src, ft_strlen(dest)));
}
