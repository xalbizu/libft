/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 12:47:46 by marvin            #+#    #+#             */
/*   Updated: 2022/04/03 12:47:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_itoa(int n)
{
    char    *str;
    int digits;
    int auxnum;
    int neg;

    neg = 0;
    auxnum = n;
    digits = 1;
    if (n < 0)
    {
        digits++;
        str = ft_calloc(12, sizeof(str));
        str[0] = '-';
        n = n* -1 ;
        neg = 1;
    }
    else
        str = ft_calloc(11, sizeof(str));
    while (auxnum / 10)
    {
        auxnum = auxnum / 10;
        digits++;
    }
    str[digits] = '\0';
    while ((digits > 0 && neg == 0) || (digits > 1 && neg == 1))
    {
        str[digits - 1] = (n % 10) + '0';
        n = n / 10;
        digits--;
    }
    
    return (str);
}
