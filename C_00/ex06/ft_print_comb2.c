/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrekhov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 18:52:52 by egrekhov          #+#    #+#             */
/*   Updated: 2024/07/08 17:22:23 by egrekhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	output(char a, char b, char c, char d)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, " ", 1);
	write (1, &c, 1);
	write (1, &d, 1);
	if (!(a == '9' && b == '8'))
		write (1, ", ", 2);
}

void	init_variables(char *a, char *b, char *c, char *d)
{
	*a = '0';
	*b = '0';
	*c = '0';
	*d = '1';
}

void	loop(char a, char b, char c, char d)
{
	while (b <= '9')
	{
		while (c <= '9')
		{
			while (d <= '9')
			{
				output(a, b, c, d);
				d++;
			}
			c++;
			d = '0';
		}
		b++;
		d = b + 1;
		c = a;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	init_variables(&a, &b, &c, &d);
	while (a <= '9')
	{
		loop(a, b, c, d);
		a++;
		b = '0';
		c = a;
	}
}
