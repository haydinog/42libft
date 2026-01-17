/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haydinog <haydinog@student.42istanbul.com.tr>  #+#  +:+       +#+    */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-06 13:45:06 by haydinog          #+#    #+#             */
/*   Updated: 2026-01-06 13:45:06 by haydinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	*ft_memset(void *dest, int c, size_t n)
{
	unsigned char	*h;

	h = dest;
	while (n-- > 0)
		*h++ = (unsigned char)c;
	return (dest);
}



#include <stdio.h>
int main(void)
{
	char src[] = "bioceyhan";


    ft_memset(src, 'c', 1);

	printf("%s\n", src);
}


