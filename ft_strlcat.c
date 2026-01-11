/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haydinog <haydinog@student.42istanbul.com.tr>  #+#  +:+       +#+    */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-07 12:58:56 by haydinog          #+#    #+#             */
/*   Updated: 2026-01-07 12:58:56 by haydinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ldest;
	size_t	lsrc;
	size_t	x;

	ldest = 0;
	while (dst[ldest])
	{
		ldest++;
	}
	lsrc = 0;
	while (src[lsrc])
	{
		lsrc++;
	}
	if (size <= ldest)
		return (size + lsrc);
	x = 0;
	while (src[x] && ldest + x + 1 < size)
	{
		dst[ldest + x] = src[x];
		x++;
	}
	dst[ldest + x] = 0;
	return (ldest + lsrc);
}

#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size);

int main(void)
{
	char dest[20] = "Hello";
	char src[] = "abi";
	size_t result;

	result = ft_strlcat(dest, src, 4);
	
	printf("Sonuç string: %s\n", dest);
	printf("Dönen değer: %zu\n", result);

	return 0;
}
