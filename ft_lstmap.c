/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haydinog <haydinog@student.42istanbul.com.tr>  #+#  +:+       +#+    */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-26 09:16:26 by haydinog          #+#    #+#             */
/*   Updated: 2026-01-26 09:16:26 by haydinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	list = NULL;
	while (lst)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (!node)
		{
			del(content);
			ft_lstclear(&list, del);
			return (NULL);
		}
		ft_lstadd_back(&list, node);
		lst = lst->next;
	}
	return (list);
}
// #include <stdio.h>

// int main()
// {
// 	t_list *node1;
// 	t_list *node2;
// 	t_list *node3;
// 	t_list *tmp;

// 	node1 = ft_lstnew(ft_strdup("selam"));
// 	node2 = ft_lstnew(ft_strdup("selams"));
// 	node3 = ft_lstnew(ft_strdup("selama"));

// 	ft_lstadd_back(&node1,node2);
// 	ft_lstadd_back(&node1,node3);
// 	tmp = node1;

// 	while (tmp)
// 	{
// 		printf("%s\n", (char *)tmp->content);
// 		tmp = tmp->next;
// 	}
// }
