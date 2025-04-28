/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrekhov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 16:32:52 by egrekhov          #+#    #+#             */
/*   Updated: 2024/07/14 20:09:56 by egrekhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	len(char *str)
{
	unsigned int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	copy_size;
	unsigned int	src_size;
	unsigned int	dest_size;
	int				i;
	int				j;

	dest_size = 0;
	src_size = 0;
	i = 0;
	dest_size = len(dest);
	src_size = len(src);
	if (size <= dest_size)
		return (size + src_size);
	copy_size = size - dest_size - 1;
	j = dest_size;
	while (src[i] && copy_size > 0)
	{
		dest[j] = src[i];
		j++;
		i++;
		copy_size--;
	}
	dest[j] = '\0';
	return (dest_size + src_size);
}
/*
int	main(void)
{
	char	str1[20] = "Hello, ";
	char	*str2 = "World!";
	unsigned int	n = 9;

	printf("%d\n", ft_strlcat(str1, str2, n));
	printf("Final string: %s\n", str1);	
	return (0);
}*/
