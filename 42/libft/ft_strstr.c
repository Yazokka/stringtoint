#include <string.h>
#include "libft.h"

char * ft_strstr(const char *str1, const char *str2)
{
	return(ft_strnstr(str1, str2, ft_strlen(str1)));
}
