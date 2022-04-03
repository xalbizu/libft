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

    auxnum = n;
    digits = 1;
    while (auxnum / 10)
    {
        auxnum = auxnum / 10;
        digits++;
    }
    if (n < 0)
    {
        digits++;
        str[0] = '-';
    }
    printf("%d",digits);
    while (digits > 0)
    {
        
        str[digits] = n % 10;
        n = n / 10; /*EL ERROR ESTA AQUI, NO SE PORQUE A PARTIR DE AQUI NO HACE NADA MAS*/
        printf("%d",n);
        digits--;
    }
    return (str);
}

int main()
{
    printf("El string es: %s",ft_itoa(123));
}