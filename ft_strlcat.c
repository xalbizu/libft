/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:01:53 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/03/31 13:11:29 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srcount;
	size_t	ds_size;
	size_t	sr_size;

	srcount = 0;
	ds_size = ft_strlen(dst);
	sr_size = ft_strlen(src);
	if (dstsize <= ds_size)
		return (dstsize + sr_size);
	while (src[srcount] && srcount < dstsize - ds_size - 1)
	{
		dst[ds_size + srcount] = src[srcount];
		srcount++;
	}
	dst[ds_size + srcount] = '\0';
	return (ds_size + sr_size);
}
