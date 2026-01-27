/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haydinog <haydinog@student.42istanbul.com.tr>  #+#  +:+       +#+    */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-25 10:35:31 by haydinog          #+#    #+#             */
/*   Updated: 2026-01-25 10:35:31 by haydinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*templist;

	templist = lst;
	if (!lst)
		return (NULL);
	while (templist)
	{
		if (!templist->next)
			return (templist);
		templist = templist->next;
	}
	return (lst);
}
