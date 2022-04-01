/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 11:40:18 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/04/01 14:55:23 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	char	*st1;
	char	*st2;
	size_t	count;

	count = 0;
	st1 = (char *)str1;
	st2 = (char *)str2;
	if (!str1 && !str2)
		return (NULL);
	if (str1 < str2)
	{
		return (ft_memcpy(str1, str2, n));
	}
	while (n--)
	{
		st1[n] = st2[n];
	}
	return (str1);
}
