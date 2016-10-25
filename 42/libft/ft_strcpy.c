#include <string.h>

char * ft_strcpy( char * destptr, const char * srcptr )
{
	size_t index = 0;

	while (srcptr[index] != '\0')
	{
		destptr[index] = srcptr[index];
		index++;
	}
	destptr[index] = '\0';
	return destptr;
}
