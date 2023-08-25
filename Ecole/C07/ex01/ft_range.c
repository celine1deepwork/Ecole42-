

#include <stdlib.h>

int *ft_range(int min, int max)
{
	int *tab;
	int i;

	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (i < max - min)
		{
			tab[i] = min + i;
			i++;
		}
		return (tab);
	}
}
