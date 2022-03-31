/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:59:27 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/03/31 12:47:29 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	count;

	count = 0;
	while (((unsigned char)str1[count]
			|| (unsigned char)str2[count]) && count < n)
	{
		if ((unsigned char)str1[count] > (unsigned char)str2[count])
		{
			return (1);
		}
		else if ((unsigned char)str1[count] < (unsigned char)str2[count])
		{
			return (-1);
		}
		count++;
	}
	return (0);
}
