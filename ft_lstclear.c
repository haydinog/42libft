/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haydinog <haydinog@student.42istanbul.com.tr>  #+#  +:+       +#+    */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-26 08:00:56 by haydinog          #+#    #+#             */
/*   Updated: 2026-01-26 08:00:56 by haydinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*templist;

	templist = *lst;
	if (!lst || !del)
		return ;
	while (*lst && lst)
	{
		templist = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = templist;
	}
}
// #include <stdio.h>
// int main(void)
// {
// t_list *node;

// char *a;
// char *b;
// char *c;

// a = ft_strdup("selam");
// b = ft_strdup("selami");
// c = ft_strdup("selame");

// node = ft_lstnew(b);

// ft_lstadd_back(&node, ft_lstnew(a));
// ft_lstadd_back(&node, ft_lstnew(b));

// ft_lstclear(&node,&free);
// if(node == NULL)
//     printf("ada");
// }
