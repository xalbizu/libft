/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:29:28 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/04/15 17:37:29 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	unsigned int	count;
	int				last;
	char			*result;
	unsigned char	ch;

	ch = (unsigned char)c;
	count = 0;
	last = -1;
	while (str[count])
	{
		if (str[count] == ch)
		{
			last = count;
		}
		count++;
	}
	if (str[count] == ch)
		last = count;
	result = (char *)str;
	if (last >= 0)
		return (&result[last]);
	return (0);
}
