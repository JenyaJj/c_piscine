/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrekhov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 12:44:14 by egrekhov          #+#    #+#             */
/*   Updated: 2024/07/18 15:58:53 by egrekhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char *arg)
{
	while (*arg)
	{
		write(1, arg, 1);
		arg++;
	}
	write(1, "\n", 1);
}

void	ft_swap(char **arg1, char **arg2)
{
	char	*temp;

	temp = *arg1;
	*arg1 = *arg2;
	*arg2 = temp;
}

char	ft_compare(char *arg1, char *arg2)
{
	while ((*arg1 || *arg2) && *arg1 == *arg2)
	{
		arg1++;
		arg2++;
	}
	return (*arg1 - *arg2);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	if (argc < 2)
		return (0);
	while (i < argc - 1)
	{
		j = 1;
		while (j < argc - 1 - i)
		{
			if (ft_compare(argv[j], argv[j + 1]) > 0)
				ft_swap(&argv[j], &argv[j + 1]);
			j++;
		}
		i++;
	}
	j = 1;
	while (j < argc)
	{
		ft_print(argv[j]);
		j++;
	}
	return (0);
}
