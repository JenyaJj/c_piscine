/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrekhov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 23:00:53 by egrekhov          #+#    #+#             */
/*   Updated: 2024/07/09 23:02:20 by egrekhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
/*
#include <string.h>
#include <stdio.h>

int     main(void)
{
        char    str[] = "Aggg hh %%5 hhZFzzaa";
        ft_strlowcase(str);
        printf("%s", str);
        return (0);
}*/
