char ft_memcpy(char *dest, char *str, int lenght)
{
	int index;

	index = 0;
	while(index < lenght)
	{
		dest[index] = str[index];
		index++;
	}
	return *dest;
}
