/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haydinog <haydinog@student.42istanbul.com.tr>  #+#  +:+       +#+    */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-25 13:15:36 by haydinog          #+#    #+#             */
/*   Updated: 2026-01-25 13:15:36 by haydinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
// #include <stdio.h>
// int main(void)
// {
//     t_list *node1;

//     char *str = ft_strdup("selam");
//     node1 = ft_lstnew(str);  
//     ft_lstdelone(node1,&free);
//     printf("%s", str);
// }