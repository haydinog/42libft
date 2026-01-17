/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haydinog <haydinog@student.42istanbul.com.tr>  #+#  +:+       +#+    */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-07 09:11:31 by haydinog          #+#    #+#             */
/*   Updated: 2026-01-07 09:11:31 by haydinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*h;
	size_t	i;

	i = 0;
	h = (char *)s;
	while (i < n)
	{
		h[i] = 0;
		i++;
	}
}

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char	str1[20] = "Hello World!";
	char	str2[20] = "Hello World!";

	printf("Before ft_bzero: '%s'\n", str1);
	ft_bzero(str1, 6); // İlk 6 karakteri sıfırla
	printf("After ft_bzero:  '");
	for (int i = 0; i < 12; i++) // NULL karakterler görünmez, o yüzden döngü ile yazıyoruz
	{
		if (str1[i] == 0)
			printf("\\0");
		else
			printf("%c", str1[i]);
	}
	printf("'\n");

	// Standart bzero ile karşılaştırma
	bzero(str2, 6);
	printf("Standard bzero:  '");
	for (int i = 0; i < 12; i++)
	{
		if (str2[i] == 0)
			printf("\\0");
		else
			printf("%c", str2[i]);
	}
	printf("'\n");

	return 0;
}
