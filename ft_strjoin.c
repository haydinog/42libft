/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haydinog <haydinog@student.42istanbul.com.tr>  #+#  +:+       +#+    */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-09 11:57:22 by haydinog          #+#    #+#             */
/*   Updated: 2026-01-09 11:57:22 by haydinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*total;

	total = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!total)
		return (NULL);
	j = 0;
	i = 0;
	while (s1[i])
	{
		total[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		total[j] = s2[i];
		i++;
		j++;
	}
	total[j] = '\0';
	return (total);
}
int	main(void)
{
	#include <stdio.h>

	char	*result;

	/* Test 1: Normal kullanım */
	result = ft_strjoin("Hello, ", "World!");
	printf("Test 1: %s\n", result);
	free(result);

	/* Test 2: Boş stringler */
	result = ft_strjoin("", "World!");
	printf("Test 2: %s\n", result);
	free(result);

	result = ft_strjoin("Hello, ", "");
	printf("Test 3: %s\n", result);
	free(result);

	/* Test 3: Her ikisi de boş */
	result = ft_strjoin("", "");
	printf("Test 4: '%s'\n", result);
	free(result);

	return (0);
}
