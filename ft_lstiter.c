/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haydinog <haydinog@student.42istanbul.com.tr>  #+#  +:+       +#+    */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-25 15:59:41 by haydinog          #+#    #+#             */
/*   Updated: 2026-01-25 15:59:41 by haydinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*templist;

	templist = lst;
	while (templist)
	{
		f(templist->content);
		templist = templist->next;
	}
}
