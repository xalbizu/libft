/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 09:18:17 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/03/30 13:02:52 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	num;

	j = 0;
	i = 0;
	num = 0;
	while (to_find[num])
		num++;
	if (num == 0)
		return ((char *)&str[0]);
	while (str[i] && i < n)
	{
		if (str[i] == to_find[j])
		{
			while (str[j + i] == to_find[j] && to_find[j] && n > i + j)
				j++;
			if (j == num)
				return ((char *)&str[i]);
		}
		j = 0;
		i++;
	}
	return (0);
}
