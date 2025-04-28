/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrekhov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 16:17:01 by egrekhov          #+#    #+#             */
/*   Updated: 2024/07/09 14:41:43 by egrekhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	x;
	int	y;
	int	temp_size;

	x = 0;
	y = 0;
	temp_size = size - 1;
	while (x < temp_size)
	{
		while (y < temp_size)
		{
			if (tab[y] > tab[y + 1])
			{
				temp = tab[y];
				tab[y] = tab[y + 1];
				tab[y + 1] = temp;
			}
			y++;
		}
		y = 0;
		x++;
	}
}
