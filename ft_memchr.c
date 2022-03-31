/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:22:17 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/03/31 13:42:12 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	count;
	char	*result;

	count = 0;
	result = (char *)str;
	while (count < n)
	{
		if (result[count] == c)
		{
			return (&result[count]);
		}
		count++;
	}
	return (0);
}
