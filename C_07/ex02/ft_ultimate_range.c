/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrekhov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 20:28:42 by egrekhov          #+#    #+#             */
/*   Updated: 2024/07/22 14:29:31 by egrekhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;
	int	*temp;

	i = 0;
	len = max - min;
	if (len <= 0)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(len * sizeof(int));
	if (*range == NULL)
		return (-1);
	temp = *range;
	while (i < len)
	{
		*temp = min;
		min++;
		temp++;
		i++;
	}
	return (len);
}
/*
int	main(void)
{
	char	min = -4;
	char	max = -8;
	int	*array = NULL;
	int	size;
	int	i;

	i = 0;
	size = ft_ultimate_range(&array, min, max);
	printf("the size of range = %d\n", size);
	while (i < size)
	{
		printf("%d ", array[i]);
		i++;
	}
	return (0);
}*/
