/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:24:20 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/03/30 13:00:00 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char			*str2;
	size_t			count;

	count = 0;
	str2 = s;
	while (count < n && str2[count] != '\0')
	{
		str2[count] = '\0';
		count++;
	}
}
