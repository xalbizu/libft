/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:02:32 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/04/16 12:56:13 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	numberofwords(char const *str, char c);
int	wordletters(char const *str, char c);

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	j;
	size_t	k;

	k = 0;
	i = 0;
	j = 0;
	arr = (char **)malloc((numberofwords(s, c) + 1) * sizeof(char *));
	if (!arr || sizeof(arr) == 0 || !s)
		return (NULL);
	while (s[i])
	{
		if (((s[i] == c || i == 0) && s[i + 1] && s[i + 1] != c))
		{
			if (i != 0 || (i == 0 && s[i] == c))
				arr[j] = ft_substr(s, i + 1, wordletters(&s[i + 1], c));
			else
				arr[j] = ft_substr(s, i, wordletters(&s[i], c));
			j++;
		}
		i++;
	}
	arr[numberofwords(s, c)] = 0;
	return (arr);
}

int	wordletters(char const *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] != c && str[i])
	{
		i++;
	}
	return (i);
}

int	numberofwords(char const *str, char c)
{
	char	*aux;
	char	*caux;
	int		i;
	int		num;

	caux = ft_calloc(ft_strlen(str), 1);
	if (!caux)
		return (0);
	caux[0] = c;
	i = -1;
	num = 1;
	aux = ft_strtrim(str, caux);
	if (ft_strlen(aux) == 0)
	{
		free(caux);
		free(aux);
		return (0);
	}
	while (aux[++i])
		if (aux[i] == c && aux[i + 1] && aux[i + 1] != c)
			num++;
	free(caux);
	free(aux);
	return (num);
}
