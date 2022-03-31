/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:02:42 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/03/31 13:19:20 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

void	ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*aux;

	aux = (void *)malloc(nitems * size);
	if (!aux)
		return (NULL);
	ft_bzero(aux, nitems);
	return (aux);
}

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
