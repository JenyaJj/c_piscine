/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrekhov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 16:29:05 by egrekhov          #+#    #+#             */
/*   Updated: 2024/07/17 16:30:07 by egrekhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 1 || nb == 0)
		return (1);
	else if (nb > 1)
	{
		while (nb > 1)
		{
			result = result * nb;
			nb = nb - 1;
		}
		return (result);
	}
	else
		return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int	number = 2;
	int	number1 = 3;
	int	number2 = -5;
	int	number3 = 0;
	int	number4 = 1;

	printf("%d\n", ft_iterative_factorial(number));
	printf("%d\n", ft_iterative_factorial(number1));
	printf("%d\n", ft_iterative_factorial(number2));
	printf("%d\n", ft_iterative_factorial(number3));
	printf("%d\n", ft_iterative_factorial(number4));
	return (0);
}*/
