/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrekhov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 12:23:58 by egrekhov          #+#    #+#             */
/*   Updated: 2024/07/14 11:34:32 by egrekhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*first_dest;

	first_dest = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (first_dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[40] = "hello ";
	char	str2[] = "my name is jenya";
	printf("%s", ft_strcat(str1, str2));
	return (0);
}*/
