/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:45:23 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/03/30 17:37:48 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str);

char	*ft_strdup(const char *str)
{
	char	*s;
	int		count;

	count = 0;
	s = (char *)malloc(sizeof(str) * ft_strlen(str));
	while (str[count])
	{
		s[count] = str[count];
		count++;
	}
	s[count] = '\0';
	return (s);
}

size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}
