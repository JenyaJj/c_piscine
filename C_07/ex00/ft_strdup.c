/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrekhov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:00:07 by egrekhov          #+#    #+#             */
/*   Updated: 2024/07/20 20:26:43 by egrekhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	char	*start_dup;
	char	*temp;
	int		len;

	len = 0;
	temp = src;
	while (*temp)
	{
		len++;
		temp++;
	}
	len++;
	dup = (char *)malloc(len * sizeof(char));
	if (dup == NULL)
		return (NULL);
	start_dup = dup;
	while (*src)
	{
		*dup = *src;
		src++;
		dup++;
	}
	*dup = '\0';
	return (start_dup);
}
/*
int	main(void)
{
	char	string[] = "hi hello";
	char	*duplicate;

	duplicate = ft_strdup(string);
	printf("before dupl: %s\n", string);
	printf("after dupl: %s\n", duplicate);
	return (0);
}*/
