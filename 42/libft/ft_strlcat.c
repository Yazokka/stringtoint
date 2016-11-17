#include <stdio.h>
#include <string.h>

int main()
{
	char str[50] = "1234";
	char dest[50] = "5678";
	
	printf("%lu", strlcat(dest, str, 3));
}
