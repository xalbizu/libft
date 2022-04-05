/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 13:24:27 by marvin            #+#    #+#             */
/*   Updated: 2022/04/05 13:24:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putnbr_fd(int n, int fd)
{
    long int aux;

    aux = n;
    if (aux < 0)
    {
        aux *= -1;
        write(fd, '-', 1);
    }
    while (aux / 10)
    {
        write(fd, (aux % 10) + '0', 1);
        aux = aux / 10;
    }
}