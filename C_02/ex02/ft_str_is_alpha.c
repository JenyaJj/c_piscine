/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrekhov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 20:25:02 by egrekhov          #+#    #+#             */
/*   Updated: 2024/07/10 17:40:05 by egrekhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	int	alph;

	char	*str = "ttJJ";
	alph = ft_str_is_alpha(str);
	printf("%d", alph);
	return (0);
}*/
