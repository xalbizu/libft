/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:02:32 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/04/01 19:56:32 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int numberofwords(char const *str, char c);
int wordletters(char const *str, char c);

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	j;
	size_t	k;

	k = 0;
	i = 0;
	j = 0;
	arr = (char **)malloc(numberofwords(s, c) * sizeof(char*) + 1);
	while (s[i])
	{
		if (s[i] == c || i == 0)
		{
			if (i != 0 || s[0] == c)
				while (s[i] == c && s[i])
					i++;
			arr[j] = (char *)malloc(wordletters(&s[i], c) * sizeof(char));
			while (s[i] != c && s[i])
			{
				arr[j][k] = s[i];
				i++;
				k++;
			}
			arr[j][k] = '\0';
			k = 0;
			j++;
		}
		else
			i++;
	}
	arr[numberofwords(s,c)] = 0;
	return (arr);
}

int wordletters(char const *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] != c && str[i])
	{
		i++;
	}
	return(i);
}

int numberofwords(char const *str, char c)
{
	char *aux;
	char *caux;
	size_t	i;
	int num;
	
	caux = malloc(2);
	caux[0] = c;
	caux[1] = '\0';
	i = 0;
	num = 1;
	aux = ft_strtrim(str, caux);
	if (ft_strlen(aux) == 0)
		return (0);
	while (aux[i])
	{
		if(aux[i] == c && aux[i + 1] && aux[i + 1] != c)
			num++;
		i++;
	}
	free(caux);
	return (num);
}

/*int main()
{
	char str[] = "";
	char **strf;
	int i;
	int j;
	j = 0;
	i = 0;
	strf = ft_split(str, 'z');
	while (strf[i])
	{
		while (strf[i][j])
		{
			printf("%c", strf[i][j]);
			j++;
		}
		j = 0;
		printf("\n");
		free(strf[i]);
		i++;
	}
	free(strf);
}*/
