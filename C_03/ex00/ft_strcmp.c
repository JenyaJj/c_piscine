/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrekhov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:12:25 by egrekhov          #+#    #+#             */
/*   Updated: 2024/07/15 16:48:03 by egrekhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			return (*s1 - *s2);
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str1 = "hello";
	char	*str2 = "hellq";
	int	n;

	n = ft_strcmp(str1, str2);
	printf("%d", n);
	return (0);
}*/
