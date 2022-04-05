/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:37:56 by marvin            #+#    #+#             */
/*   Updated: 2022/04/05 11:37:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	mapi(unsigned int i, char c);

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *str;
    size_t  i;

    str = ft_strdup(s);
    if (!str)
        return (NULL);
    i = 0;
    while (str[i])
    {
        str[i] = (*f)(i, str[i]);
        i++;
    }
    return (str);
}
