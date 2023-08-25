
char *ft_strcat(char *dest, char *src)
{
	int c;
	int d;

	c = 0;
	while (dest[c] != '\0')
		c++;
	d = 0;
	while (src[d] != '\0')
	{
		dest[c + d] = src[d];
		d++;
	}
	dest[c + d] = '\0';
	return (dest);
}
