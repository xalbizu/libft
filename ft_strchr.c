/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:54:49 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/03/31 13:46:42 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	int		count;
	char	*result;

	count = 0;
	while (str[count])
	{
		if (str[count] == c)
		{
			result = (char *)str;
			return (&result[count]);
		}
		count++;
	}
	if (str[count] == c)
	{
		result = (char *)str;
		return (&result[count]);
	}
	return (0);
}
