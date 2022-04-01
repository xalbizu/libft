/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:45:23 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/04/01 12:13:34 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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