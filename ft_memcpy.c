/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haydinog <haydinog@student.42istanbul.com.tr>  #+#  +:+       +#+    */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-06 14:12:36 by haydinog          #+#    #+#             */
/*   Updated: 2026-01-06 14:12:36 by haydinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*copy;
	unsigned char	*real;

	if (!dest && !src)
		return (NULL);
	copy = (unsigned char *)dest;
	real = (unsigned char *)src;
	while (n--)
		*copy++ = *real++; 		//(*birinci baytı kopyala ve yapıştır) ++(ikinci byta geçerek arttır)
	return (dest);
}

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char	src[] = "Hello World!";
	char	dest[20];

	// ft_memcpy kullan
	ft_memcpy(dest, src, strlen(src) + 1); // +1: '\0' dahil

	printf("Source: %s\n", src);
	printf("Destination after ft_memcpy: %s\n", dest);

	// Farklı tipte test: int dizisi
	int	arr_src[] = {1, 2, 3, 4, 5};
	int	arr_dest[5];
	ft_memcpy(arr_dest, arr_src, sizeof(arr_src));

	printf("Integer array copied:\n");
	for (int i = 0; i < 5; i++)
		printf("%d ", arr_dest[i]);
	printf("\n");

	return 0;
}

