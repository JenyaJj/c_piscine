/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrekhov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 22:43:29 by egrekhov          #+#    #+#             */
/*   Updated: 2024/07/10 17:35:31 by egrekhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 31 && str[i] < 127)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include <string.h>
#include <stdio.h>

int     main(void)
{
        char    *str = "jj6978_u";
        int     n;

        n = ft_str_is_printable(str);
        printf("%d", n);
        return (0);
}*/
