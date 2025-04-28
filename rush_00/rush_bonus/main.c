/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalsang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 12:31:15 by avalsang          #+#    #+#             */
/*   Updated: 2024/07/07 16:09:19 by avalsang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	rush(int x, int y);

// program arguments are of type string
// rush only accepts int as arguments
// so this function converts string to int 
// does not accept number larger than 10 digits
// does not accept number larger than INT_MAX = 2147483647
int	convert_str_to_int(char *str)
{
	int			i;
	long long	result;

	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		if ((i == 11 && str[i] != '\0') || result > 2147483647)
		{
			write(1, "Number too large!\n", 18);
			exit (0);
		}
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			write(1, "Invalid input! Please enter a positive integer.\n", 48);
			exit (0);
		}
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	if (argc != 3)
	{
		write(1, "Please enter two numbers!", 25);
		return (0);
	}
	x = convert_str_to_int(argv[1]);
	y = convert_str_to_int(argv[2]);
	rush(x, y);
	return (0);
}
