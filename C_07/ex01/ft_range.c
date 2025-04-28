/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrekhov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 18:02:01 by egrekhov          #+#    #+#             */
/*   Updated: 2024/07/22 16:59:46 by egrekhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	*array;

	len = max - min;
	if (min >= max)
		return (NULL);
	array = (int *)malloc(len * sizeof(int));
	if (array == NULL)
		return (NULL);
	while (len > 0)
	{
		array[len - 1] = max - 1;
		len--;
		max--;
	}
	return (array);
}
/*
int	main(void)
{
	int	start = -8;
	int	end = 0;
	int	size = end - start;
	int	*range = ft_range(start, end);

	for (int i = 0; i < size; i++)
		printf("%d ", range[i]);
	printf("\n");
//	free(range);
	return (0);
}*/
