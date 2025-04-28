/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrekhov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:52:11 by egrekhov          #+#    #+#             */
/*   Updated: 2024/07/15 21:12:37 by egrekhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_exceptions(int nb)
{
	if (nb == 0)
		write(1, "0", 1);
	else
		write(1, "-2147483648", 11);
}

int	print_sign(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		return (-nb);
	}
	return (nb);
}

void	ft_putnbr(int nb)
{
	char	str_nb[11];
	int		i;
	int		temp;

	i = 0;
	if (nb == 0 || nb == -2147483648)
	{
		print_exceptions(nb);
		return ;
	}
	temp = print_sign(nb);
	while (temp != 0)
	{
		str_nb[i] = (temp % 10) + 48;
		temp = temp / 10;
		i++;
	}
	while (i > 0)
	{
		i--;
		write(1, &str_nb[i], 1);
	}
}
/*
int	main(void)
{
	int	num = -4448;

	ft_putnbr(num);
	return (0);
}*/
