#include <string.h>
#include "libft.h"
#include <stdlib.h>

char *ft_strdup(const char *str)
{
    size_t len = ft_strlen(str);
    size_t i = 0;
    char *result = malloc(len + 1);
    while ( i <= len)
    {
        result[i] = str[i];
	i++;
    }
    return result;
}
