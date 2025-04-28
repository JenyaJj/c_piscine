/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalsang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 13:12:43 by avalsang          #+#    #+#             */
/*   Updated: 2024/07/07 16:08:42 by avalsang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

// function that prints one single line
// takes the length of the row x plus start, middle, and
// end characters as arguments
// count handles which character to print based on parameter x
void	print_line(int x, char startchar, char midchar, char endchar)
{
	int	count;

	count = 1;
	while (count <= x)
	{
		if (count == 1)
		{
			ft_putchar(startchar);
			count++;
			continue ;
		}
		else if (count < x)
		{
			ft_putchar(midchar);
			count++;
			continue ;
		}
		else
		{
			ft_putchar(endchar);
			break ;
		}
	}
	ft_putchar('\n');
}

// takes x and y to generate a box
// row number keeps track of where we are
void	rush(int x, int y)
{
	int	row_number;

	row_number = 1;
	while (row_number <= y)
	{
		if (row_number == 1)
		{
			print_line(x, '/', '*', '\\');
			row_number++;
			continue ;
		}
		else if (row_number < y)
		{
			print_line(x, '*', ' ', '*');
			row_number++;
			continue ;
		}
		else
		{
			print_line(x, '\\', '*', '/');
			break ;
		}
	}
}
