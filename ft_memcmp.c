/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 08:59:27 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/03/31 12:41:14 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			count;
	unsigned char	*aux1;
	unsigned char	*aux2;

	aux1 = (unsigned char *)str1;
	aux2 = (unsigned char *)str2;
	count = 0;
	while (count < n)
	{
		if (aux1[count] != aux2[count])
			return (aux1[count] - aux2[count]);
		count++;
	}
	return (0);
}
