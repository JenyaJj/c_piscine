/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrekhov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 16:05:05 by egrekhov          #+#    #+#             */
/*   Updated: 2024/07/22 13:58:53 by egrekhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

char	*ft_fill_str(char *temp, char **strs, char *sep, int size)
{
	int		j;
	int		i;
	char	*temp_str;
	char	*sep_temp;

	i = 0;
	j = 0;
	while (j < size)
	{
		temp_str = strs[j];
		j++;
		while (*temp_str)
			temp[i++] = *temp_str++;
		if (j < size)
		{
			sep_temp = sep;
			while (*sep_temp)
				temp[i++] = *sep_temp++;
		}
	}
	temp[i] = '\0';
	return (temp);
}

int	ft_str_count(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*temp;
	char	*empty_str;
	int		i;
	int		len;

	i = 0;
	len = 0;
	if (size == 0)
	{
		empty_str = (char *)malloc(1);
		if (empty_str == NULL)
			return (NULL);
		*empty_str = '\0';
		return (empty_str);
	}
	while (i < size)
		len = len + ft_str_count(strs[i++]);
	len = len + (size - 1) * ft_str_count(sep) + 1;
	temp = (char *)malloc(len * sizeof(char));
	if (temp == NULL)
		return (NULL);
	temp = ft_fill_str(temp, strs, sep, size);
	return (temp);
}
/*
int	main(void)
{
	char	*array[]={"heey", "my name", "is Jenny"};
	int	size = 3;
	char	*sep = " ";
	char	*string;

	string = ft_strjoin(size, array, sep);
	printf("final string = %s", string);
	free(string);
	return (0);
}*/
