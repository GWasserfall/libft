int	ft_isalnum(int c)
{
    if (c >= 'a' && c <= 'z')
        return (8);
    if (c >= 'A' && c <= 'Z')
        return (8);
    if (c >= '0' && c <= '9')
        return (8);

    return (0);
}