/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:02:32 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/04/25 17:39:20 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	numberofwords(char const *str, char c);
int	wordletters(char const *str, char c);

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;
	int		start;

	i = -1;
	j = 0;
	start = -1;
	if (!s)
		return (NULL);
	arr = (char **)malloc((numberofwords(s, c) + 1) * sizeof(char *));
	if (!arr || sizeof(arr) == 0)
		return (NULL);
	while (++i <= (int)ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if (start >= 0 && (s[i] == c || i == (int)ft_strlen(s)))
		{
			arr[j++] = ft_substr(s, start, i - start);
			start = -1;
		}
	}
	arr[numberofwords(s, c)] = NULL;
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

/* int main(void)
{
	char	**tab;
	int	i,j;

	i = 0;
	j = 0;
	tab = ft_split("^^^1^^2a,^^^^3^^^^--h^^^^", '^');

	while (tab[i])
	{
		printf("%s",tab[i]);
		printf("\n");
		i++;
	}
	printf("%s",tab[4]);
} */