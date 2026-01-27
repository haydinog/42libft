/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haydinog <haydinog@student.42istanbul.com.tr>  #+#  +:+       +#+    */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-25 09:48:31 by haydinog          #+#    #+#             */
/*   Updated: 2026-01-25 09:48:31 by haydinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new | !lst)
		return ;
	new->next = *lst;
	*lst = new;
}
// #include <stdio.h>
// int main()
// {
// 	t_list *node1;
// 	t_list	*new;

// 	char str[]="veli";
// 	char ftr[]= "ali";

// 	node1 = ft_lstnew(ft_strdup(str));             	
// 	new = ft_lstnew(ft_strdup(ftr));

// 	ft_lstadd_front(&node1,new);
// 	printf("%p\n",(char *) new->next);
// 	printf("%p",(char *) new);
// }
