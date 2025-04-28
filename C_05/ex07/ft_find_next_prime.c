/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrekhov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:25:57 by egrekhov          #+#    #+#             */
/*   Updated: 2024/07/17 16:23:43 by egrekhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_find_next_prime(int nb)
{
        int     result;
        int     x1;
        int     x2;

	x1 = 1;
	x2 = 1;
	result = 1;
	if (nb <= 2)
		return (2);
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
	printf("x1 = %d, x2 = %d\n", x1, x2);
	if (nb == (x1 * x2))
	{
		nb++;
		ft_find_next_prime(nb);
	}
	return (nb);
}

#include <stdio.h>

int	main(void)
{
//	printf("%d\n", ft_find_next_prime(13));
	printf("%d\n", ft_find_next_prime(32));
//	printf("%d\n", ft_find_next_prime(15));
//	printf("%d\n", ft_find_next_prime(16));
//	printf("%d\n", ft_find_next_prime(17)); // 17
//	printf("%d\n", ft_find_next_prime(20)); // 23
//	printf("%d\n", ft_find_next_prime(90)); // 97
	return (0);
}
