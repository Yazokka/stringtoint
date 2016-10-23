#include <string.h>

void *  ft_memset(void *str, int replace, size_t lenght)
{
        unsigned char *cur;

        if (lenght == 0)
                return str;
        cur = (unsigned char *) str;
        while (lenght != 0)
        {
                *cur = (unsigned char) replace;
                if (lenght)
                        cur++;
        }
        return str;
}

void bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
