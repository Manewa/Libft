char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	if (!s[i])
		return (NULL);

	while (s[i] && s[i] != (char)c)
	{
		i++;
	}
	return ((char *)&s[i]);
}
