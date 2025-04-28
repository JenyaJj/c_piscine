/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrekhov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 21:05:50 by egrekhov          #+#    #+#             */
/*   Updated: 2024/07/15 21:33:03 by egrekhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	neg_n;
	int	result;

	result = 0;
	neg_n = 0;
	while ((*str > 8 && *str < 13) || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg_n++;
		str++;
	}
	while (*str > 47 && *str < 58)
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	if (neg_n % 2)
		return (-result);
	return (result);
}
/*
int	main(void)
{
	char	*str = "---23";
	char	*str1 = "++23";
	char	*str2 = "tt123f";
	char	*str3 = "-2147483648";
	char	*str4 = "---+--+1234ab567";
	
	printf("%d\n", ft_atoi(str));
	printf("%d\n", ft_atoi(str1));
	printf("%d\n", ft_atoi(str2));
	printf("%d\n", ft_atoi(str3));
	printf("%d\n", ft_atoi(str4));
	return (0);
}*/
