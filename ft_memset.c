/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:52:05 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/03/30 13:01:08 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char			*str2;
	unsigned char	ch;
	size_t			count;

	count = 0;
	ch = (unsigned char)c;
	str2 = str;
	while (count < n && str2[count] != '\0')
	{
		str2[count] = ch;
		count++;
	}
	return (str);
}
