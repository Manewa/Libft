int	ft_toupper(int i)
{
	if (i >= 97 && i <= 122)
		i = i - 32;
	return (i);
}

#include<stdio.h>
int main()
{
	int c;

	c = 33;
	printf("%c\n", ft_toupper(c));
	return (0);
}
