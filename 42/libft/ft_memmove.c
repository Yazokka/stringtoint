#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void    *ft_memcpy_bwd(void *s1, const void *s2, size_t n)
{
        char    *c1;
        char    *c2;

        if (n == 0 || s1 == s2)
                return (s1);
        c1 = (char *)s1;
        c2 = (char *)s2;
        while (n--)
        {
                c1[n] = c2[n];
        }
        return (s1);
}


void    *ft_memcpy(void *s1, const void *s2, size_t n)
{
        char    *c1;
        char    *c2;

        if (n == 0 || s1 == s2)
                return (s1);
        c1 = (char *)s1;
        c2 = (char *)s2;
        while (--n)
                *c1++ = *c2++;
        *c1 = *c2;
        return (s1);
}


void    *ft_memmove(void *s1, const void *s2, size_t n)
{
        if (s1 < s2)
                return (ft_memcpy(s1, s2, n));
        if (s1 > s2)
                return (ft_memcpy_bwd(s1, s2, n));
        return (s1);
}
int main()
{
   char csrc[100] = "Geeksfor";
   ft_memmove(csrc+5, csrc, strlen(csrc)+1);
   printf("%s", csrc);
   return 0;
}
