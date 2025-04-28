/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrekhov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 22:45:01 by egrekhov          #+#    #+#             */
/*   Updated: 2024/07/09 22:57:37 by egrekhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
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
        ft_strupcase(str);
        printf("%s", str);
        return (0);
}*/
