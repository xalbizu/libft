/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 11:13:54 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/03/30 13:00:40 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	count;
	char	*str1;
	char	*str2;

	str2 = (char *)src;
	str1 = dest;
	count = 0;
	while (count < n)
	{
		str1[count] = str2[count];
		count++;
	}
	return (dest);
}
