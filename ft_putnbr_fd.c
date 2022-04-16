/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 13:24:27 by marvin            #+#    #+#             */
/*   Updated: 2022/04/15 16:46:03 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long int	aux;
	char		caux[12];
	ssize_t		i;

	caux[0] = '0';
	aux = n;
	i = 0;
	if (aux < 0)
	{
		aux *= -1;
		write(fd, "-", 1);
	}
	while (aux > 9)
	{
		caux[i] = (aux % 10) + '0';
		aux = aux / 10;
		i++;
	}
	caux[i] = (aux % 10) + '0';
	i++;
	caux[i] = '\0';
	while (0 < i--)
	{
		write(fd, &caux[i], 1);
	}
}
