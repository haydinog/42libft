/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haydinog <haydinog@student.42istanbul.com.tr>  #+#  +:+       +#+    */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-25 10:09:50 by haydinog          #+#    #+#             */
/*   Updated: 2026-01-25 10:09:50 by haydinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		index;
	t_list	*templist;

	index = 0;
	templist = lst;
	while (templist)
	{
		templist = templist->next;
		index++;
	}
	return (index);
}
// #include <stdio.h>

// int main()
// {
// 	char str[] = "swlam";
// 	char ada[] = "as";
// 	t_list *node1;
// 	node1 = ft_lstnew(str);
// 	ft_lstadd_front(&node1,ft_lstnew(ada));
// 	printf("%d", ft_lstsize(node1));
// }