#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	int	len;
	char	*str;

	str = "gg k";
	len = ft_strlen(str);
	printf("%d", len);
	return (0);
}*/
