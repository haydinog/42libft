/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haydinog <haydinog@student.42istanbul.com.tr>  #+#  +:+       +#+    */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-07 10:48:16 by haydinog          #+#    #+#             */
/*   Updated: 2026-01-07 10:48:16 by haydinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*pdest;
	const char	*psrc;
	size_t		i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	pdest = dest;
	psrc = src;
	if (pdest > psrc)
	{
		while (n-- > 0)
			pdest[n] = psrc[n];
	}
	else
	{
		while (i < n)
		{
			pdest[i] = psrc[i];
			i++;
		}
	}
	return (dest);
}

// int	main(void)
// {
// 	#include <stdio.h>

// 	char	src[] = "Hello World!";
// 	char	dest[20];

// 	ft_memmove(dest, src, 20);

// 	printf("Source: %s\n", src);
// 	printf("Destination after ft_memcpy: %s\n", dest);
// }
// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char str[] = "HelloWorld";
//     printf("Önce: %s\n", str);
//    ft_memmove((void*)0, str, 5);
//     printf("Sonra: %s\n", str);
//     return 0;
// }
