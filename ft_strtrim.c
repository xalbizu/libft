/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 12:25:45 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/04/16 11:11:15 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		findchar(const char *str, char ch);
char	*setstr(char const *s1, int index1, int index2);
char	*ft_search(char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{	
	char	*str;

	if (set[0] == '\0')
	{
		str = setstr(s1, 0, ft_strlen(s1));
		return (str);
	}
	str = ft_search(s1, set);
	return (str);
}

char	*ft_search(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	int		index1;
	int		index2;

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
		i++;
		j = 0;
	}
	return (setstr(s1, index1, index2));
}

char	*setstr(char const *s1, int index1, int index2)
{
	char	*str;

	str = ft_substr(s1, index1, index2 - index1 + 1);
	if (!str)
		return (NULL);
	return (str);
}

int	findchar(const char *str, char ch)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == ch)
			return (1);
		i++;
	}
	return (0);
}
