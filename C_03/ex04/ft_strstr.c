/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrekhov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 15:03:04 by egrekhov          #+#    #+#             */
/*   Updated: 2024/07/14 16:11:57 by egrekhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	similiarities_loop(char **str, char **to_find)
{
	while (**str == **to_find && (**str || **to_find))
	{
		(*str)++;
		(*to_find)++;
	}
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*start_str;
	char	*start_to_find;

	start_to_find = to_find;
	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			start_str = str;
			similiarities_loop(&str, &to_find);
			if (*str && *to_find)
				to_find = start_to_find;
			else if (*to_find == '\0')
				return (start_str);
			else
				return (NULL);
		}
		str++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*str1 = "hi. my name is Jenny";
	char	*str2 = "is";

	printf("%s", ft_strstr(str1, str2));
//	printf("%s", strstr(str1, str2));
	return (0);
}*/
