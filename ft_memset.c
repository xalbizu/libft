/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:52:05 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/04/15 22:09:23 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*str2;
	unsigned char	ch;

	ch = (unsigned char)c;
	str2 = str;
	while (n--)
		*str2++ = ch;
	return (str);
}
