/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrekhov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 12:31:38 by egrekhov          #+#    #+#             */
/*   Updated: 2024/07/17 16:34:40 by egrekhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;
	int	result;

	n = 1;
	result = 1;
	if (nb <= 0)
		return (0);
	while (result <= nb)
	{
		n++;
		result = n * n;
	}
	n--;
	if ((n * n) == nb)
		return (n);
	else
		return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(6));
	printf("%d\n", ft_sqrt(-4));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(121));
	return (0);
}*/
