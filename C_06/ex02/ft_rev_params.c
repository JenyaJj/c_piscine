/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrekhov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:38:38 by egrekhov          #+#    #+#             */
/*   Updated: 2024/07/17 20:45:41 by egrekhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char *argv)
{
	while (*argv)
	{
		write(1, argv, 1);
		argv++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	while (argc > 1)
	{
		argc--;
		ft_print(argv[argc]);
	}
	return (0);
}
