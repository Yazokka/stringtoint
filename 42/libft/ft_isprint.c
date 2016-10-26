#include <stdio.h>
#include <string.h>

int ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (true);
	}
	else
		return (false);
}

int main()
{
	int var1 = 'k';
	int var2 = '\t';

	if (ft_isprint(var1))
	{
		printf("Is printable");
	}
	else
		printf("Is not printable");

	if (ft_isprint(var2))
	{
		printf("Is printable");
	}
	else
		printf("Is not printable");
}
