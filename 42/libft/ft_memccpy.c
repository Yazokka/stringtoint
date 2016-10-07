#include <stdio.h>
#include <string.h>

char ft_memccpy(char *str, char *dest, char found, int bytes)
{
	int index;

	index = 0;
	while (index < bytes)
	{
		if (str[index] == found)
		{
			dest[index] = found;
			return *dest;
		}	
		dest[index] = str[index];
		index++;
	}
	return *dest;
}

int main()
{
	char str[50] = "JORIC IS A PIDOR";
	char dest[50];

	printf("%s\n", dest);
	ft_memccpy(str, dest, 'I', 4);
	printf("%s", dest);


}
