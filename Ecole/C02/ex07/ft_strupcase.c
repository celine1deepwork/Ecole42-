

char *ft_strupcase(char *str)
{
    int c;

    c = 0;
    while (str[c] != '\0')
    {
        if ((str[c] >= 'a') && (str[c] <= 'z'))
            str[c] -= 'a' - 'A';
        c++;
    }
    return (str);
}
