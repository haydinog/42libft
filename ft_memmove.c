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

	pdest = dest;
	psrc = src;

	if (pdest < psrc)
	{
		while (n--)
		{
			*pdest++ = *psrc++;
		}
	}
	else
	{
		pdest += n;
		psrc += n;

		while (n--)
		{
			*pdest++ = *psrc++;
		}

	}
	return (dest);
}

int	main(void)
{
	#include <stdio.h>

	char	src[] = "Hello World!";
	char	dest[20];

	ft_memmove(dest, src, 20);

	printf("Source: %s\n", src);
	printf("Destination after ft_memcpy: %s\n", dest);
}