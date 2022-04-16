/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:02:42 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/04/16 10:51:32 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*aux;
	size_t	length;

	length = nitems * size;
	aux = malloc(length);
	if (!aux)
		return (NULL);
	ft_bzero(aux, length);
	return (aux);
}
