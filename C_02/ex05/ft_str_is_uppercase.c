/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrekhov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 22:11:54 by egrekhov          #+#    #+#             */
/*   Updated: 2024/07/09 22:16:46 by egrekhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
        char    *str = "AZZZF";
        int     n;

        n = ft_str_is_uppercase(str);
        printf("%d", n);
        return (0);
}*/
