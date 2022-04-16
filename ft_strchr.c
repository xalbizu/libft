/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:54:49 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/04/15 17:30:42 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	unsigned int		count;
	char				*result;
	unsigned char		ch;

	count = 0;
	ch = (unsigned char)c;
	while (str[count])
	{
		if (str[count] == ch)
		{
			result = (char *)str;
			return (&result[count]);
		}
		count++;
	}
	if (str[count] == ch)
	{
		result = (char *)str;
		return (&result[count]);
	}
	return (0);
}
