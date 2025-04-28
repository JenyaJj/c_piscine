/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrekhov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 11:15:18 by egrekhov          #+#    #+#             */
/*   Updated: 2024/07/25 13:08:27 by egrekhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 
#include "ft_stock_str.h"
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcopy(char *str, int size)
{
	char	*result;
	int		i;

	i = 0;
	result = (char *)malloc(sizeof(char) * (size + 1));
	if (result == NULL)
		return (NULL);
	while (str[i])
	{
		result[i] = str[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*result;
	int			i;

	i = 0;
	result = malloc(sizeof(t_stock_str) * (ac + 1));
	if (result == NULL)
		return (NULL);
	while (i < ac)
	{
		result[i].size = ft_strlen(av[i]);
		result[i].str = av[i];
		result[i].copy = ft_strcopy(av[i], result[i].size);
		i++;
	}
	result[i].str = 0;
	return (result);
}
/*
int	main(void)
{
	char	*string[2];
	char	*string0 = "heey";
	char	*string1 = "hello";


        string[0] = string0;
	string[1] = string1;
	int	size = 2;

	t_stock_str *array = ft_strs_to_tab(size, string);
	for (int i = 0; i < size; i++)
	{
		if (array[i].str && array[i].copy)
		{
			printf("Original: %s, Copy: %s, Length: %d\n", 
			array[i].str, array[i].copy, array[i].size);
		}
	}
	return (0);
}*/
