int ft_isalnum(int c)
{
    if (c >= 'a' && c <= 'z')
        return (1);
    if (c >= 'A' && c <= 'Z')
        return (2);
    if (c >= '0' && c <= '9')
        return (3);

    return (0);
}


void main()
{
    ft_isalnum('T');
}