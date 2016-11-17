#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

void ft_putchar(char c);
size_t ft_strlen(const char *str);
void *ft_memcpy(void *dest, const void *str, size_t lenght);
int ft_memcmp(const void *s1, const void *s2, size_t n);
char *ft_strnstr(const char *str1, const char *str2, size_t lenght);
char *ft_strstr(const char *str1, const char *str2);
char *ft_strdup(const char *str);
char *ft_strcat(char *dest, const char *src);
char *ft_strncat(char *dest, const char *src, size_t n);
int ft_strcmp(const char *s1, const char *s2);
int ft_strequ(const char *s1, const char *s2);
#endif
