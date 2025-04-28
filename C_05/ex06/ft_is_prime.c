/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrekhov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:00:44 by egrekhov          #+#    #+#             */
/*   Updated: 2024/07/17 16:35:47 by egrekhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	result;
	int	x1;
	int	x2;

	x1 = 1;
	x2 = 1;
	result = 1;
	if (nb < 2)
		return (0);
	while (result <= nb && x1 < nb)
	{
		x1++;
		while (result <= nb && x2 < nb)
		{
			x2++;
			result = x1 * x2;
		}
	}
	x2--;
	if (nb == (x1 * x2))
		return (0);
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(-4));
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(7));
	printf("%d\n", ft_is_prime(29));
	printf("%d\n", ft_is_prime(28));
	printf("%d\n", ft_is_prime(97));
	return (0);
}*/
