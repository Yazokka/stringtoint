#include <stdio.h>
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

int main()
{
	char str[50] = "Hello World";
	
	printf("%s \n", str);
	ft_memset(str, 's', 5);
	printf("%s", str);

	return 0;
}

