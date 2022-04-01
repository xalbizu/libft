/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 12:25:45 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/04/01 13:43:07 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		findchar(const char *str, char ch);
char	*setstr(char const *s1, int index1, int index2);

char	*ft_strtrim(char const *s1, char const *set)
{	
	size_t	i;
	size_t	j;
	int		index1;
	int		index2;
	char	*str;

	i = 0;
	j = 0;
	index1 = -1;
	index2 = 0;
	while (s1[i])
	{
		while (set[j])
		{
			if (findchar(set, s1[i]) == 0 && index1 == -1)
				index1 = i;
			if (findchar(set, s1[i]) == 0)
				index2 = i;
			j++;
		}
		j = 0;
		i++;
	}
	str = setstr(s1, index1, index2);
	return (str);
}

char	*setstr(char const *s1, int index1, int index2)
{
	char	*str;

	str = malloc(index2 - index1 + 1);
	str = ft_substr(s1, index1, index2 - index1 + 1);
	return (str);
}

int	findchar(const char *str, char ch)
{
	int	i;

	i = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == ch)
			return (1);
		i++;
	}
	return (0);
}
