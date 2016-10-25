#include <stdio.h>
#include <string.h>

int main()
{
	char str[50] = "Hello";
	char dest[50] = "Word";
	

	printf("%lu", strlcat(dest, str, 6));
}
