/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haydinog <haydinog@student.42istanbul.com.tr>  #+#  +:+       +#+    */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-07 13:06:13 by haydinog          #+#    #+#             */
/*   Updated: 2026-01-07 13:06:13 by haydinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	sum;
	void	*p;
	size_t	i;

	sum = nmemb * size;
	p = malloc(sum);
	if (!p)
		return (NULL);
	i = 0;
	while (i < sum)
	{
		((unsigned char *)p)[i] = 0;
		i++;
	}
	return ((void *)p);
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	int	*numbers;
	size_t	i;
	size_t	count = 10;

	// 10 elemanlı int dizisi ayır
	numbers = (int *)calloc(count, sizeof(int));
	if (!numbers)
	{
		printf("Memory allocation failed!\n");
		return (1);
	}

	// Belleğin sıfırlanıp sıfırlanmadığını kontrol et
	printf("Contents of numbers after calloc:\n");
	for (i = 0; i < count; i++)
	{
		printf("numbers[%zu] = %d\n", i, numbers[i]);
	}

	// Belleği serbest bırak
	free(numbers);

	return 0;
}
