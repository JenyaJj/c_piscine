/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrekhov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 11:42:10 by egrekhov          #+#    #+#             */
/*   Updated: 2024/07/14 12:37:55 by egrekhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*start_dest;

	start_dest = dest;
	i = 0;
	while (*dest)
		dest++;
	while (*src && i < nb)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (start_dest);
}
/*
int	main(void)
{
	char	str1[40] = "Hi ";
	char	str2[] = "my name is Jenya";
	unsigned int	n = 5; 

	printf("%s", ft_strncat(str1, str2, n));
//	printf("%s", strncat(str1, str2, n));
}*/
