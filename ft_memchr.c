/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haydinog <haydinog@student.42istanbul.com.tr>  #+#  +:+       +#+    */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-07 11:29:07 by haydinog          #+#    #+#             */
/*   Updated: 2026-01-07 11:29:07 by haydinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;

	str = s;
	while (n > 0)
	{
		if (*str == (unsigned char)c)
			return ((void *)str);
		str++;
		n--;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// #include "libft.h"

// int	main(void)
// {
// 	char	str[] = "Hello World!";
// 	char	*res;

// 	// 'W' karakterini ara
// 	res = ft_memchr(str, 'W', strlen(str));
// 	if (res)
// 		printf("ft_memchr found 'W' at position: %ld\n", res - str);
// 	else
// 		printf("'W' not found\n");

// 	// 'z' karakterini ara (bulunamaz)
// 	res = ft_memchr(str, 'z', strlen(str));
// 	if (res)
// 		printf("ft_memchr found 'z' at position: %ld\n", res - str);
// 	else
// 		printf("'z' not found\n");

// 	// 0 byte'ını ara
// 	res = ft_memchr(str, 0, strlen(str) + 1); // stringin sonundaki '\0' dahil
// 	if (res)
// 		printf("ft_memchr found '\\0' at position: %ld\n", res - str);

// 	return 0;
// }
