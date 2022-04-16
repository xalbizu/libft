/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 10:31:01 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/04/16 10:34:42 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;
	t_list	*act_tlist;

	if (!*f && !*del && !lst)
		return (NULL);
	map = NULL;
	while (lst)
	{
		act_tlist = ft_lstnew((*f)(lst->content));
		ft_lstadd_back(&map, act_tlist);
		lst = lst->next;
	}
	return (map);
}
