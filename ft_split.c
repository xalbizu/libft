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

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	j;
	size_t	k;

	k = 0;
	i = 0;
	j = 0;
	
	arr = (char **)malloc(); /*poner el numero de palabras que haya y en el otro malloc el numero de letras de cada palabra*/
	
	while (s[i])
	{
		if (s[i] == c || i == 0)
		{
			if (i != 0)
				i++;
			arr[j] = (char *)malloc(100);
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
	return (arr);
}

int numberofwords(char const *str, char c)
{
	
}

int main()
{
	char str[] = "     Hola que tal estas    ";
	char **strf;
	int i;
	int j;
	j = 0;
	i = 0;
	strf = ft_split(str, ' ');
	while (*strf[i])
	{
		while (strf[i][j])
		{
			printf("%c", strf[i][j]);
			j++;
		}
		j = 0;
		printf("\n");
		i++;
	}
	i = 0;
	j = 10;
	free(strf);
}
