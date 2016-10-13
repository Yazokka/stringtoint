#include <stdio.h>

size_t ft_strlen(const char *str);

int main()
{
	char str[50] = "Hello World";

	printf("%zu", ft_strlen(str));
}
