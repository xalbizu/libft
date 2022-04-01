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

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	j;
	size_t	k;

	k = 0;
	i = 0;
	j = 0;
	arr = (char **)malloc(1000);
	while (s[i])
	{
		if (s[i] == c)
		{
			i++;
			arr[j] = (char *)malloc(100);
			while (s[i] != c && s[i])
			{
				
				arr[j][k] = s[i];
				i++;
				k++;
			}
			k = 0;
			j++;
		}
		else
			i++;
	}
	return (arr);
}

int main()
{
	char str[] = "Hola que tal estas";
	char **strf;
	int i;
	int j;

	j = 0;
	i = 0;
	strf = ft_split(str, ' ');
	while (i < 3)
	{
		while (j < 10)
		{
			printf("%c", strf[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}
