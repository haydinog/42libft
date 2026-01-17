/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haydinog <haydinog@student.42istanbul.com.tr>  #+#  +:+       +#+    */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-07 11:34:11 by haydinog          #+#    #+#             */
/*   Updated: 2026-01-07 11:34:11 by haydinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = s1;
	p2 = s2;
	while (n--)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char	str1[] = "Hello World";
	char	str2[] = "Hello World";
	char	str3[] = "Hello There";

	// Tam olarak aynı stringler
	printf("memcmp(str1, str2, 11) = %d\n", memcmp(str1, str2, 11));

	// Farklı stringler // farklı olan ilk bytelerin(karakterlerin) ascii değerdeki farkını döner asagidaki ornekte (W - T (87-84 = 3)) OLDUGU İCİN 3 değeri döner
	printf("memcmp(str1, str3, 11) = %d\n", memcmp(str1, str3, 11));

	// Sadece ilk 5 byte karşılaştır
	printf("memcmp(str1, str3, 5) = %d\n", memcmp(str1, str3, 0));

	return 0;
}
