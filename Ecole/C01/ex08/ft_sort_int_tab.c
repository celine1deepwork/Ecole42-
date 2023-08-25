
void ft_sort_int_tab(int *tab, int size)
{
    int i;
    int k;
    int bucket;

    i = 0;
    k = 0;
    while (i < size)
    {
        while (k < size)
        {
            if (tab[k] > tab[k + 1])
            {
                bucket = tab[k];
                tab[k] = tab[k + 1];
                tab[k + 1] = bucket;
            }
            k++;
        }
        i++;
        k = 0;
    }
}
