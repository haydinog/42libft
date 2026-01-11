/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haydinog <haydinog@student.42istanbul.com.tr>  #+#  +:+       +#+    */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-09 09:51:28 by haydinog          #+#    #+#             */
/*   Updated: 2026-01-09 09:51:28 by haydinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)malloc(sizeof (*s) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}

int	main(void)
{
	 #include <stdio.h>
	char	*res;

	/* Normal kullanım */
	res = ft_substr("Hello World", 0, 5);
	printf("Test 1: %s\n", res);
	free(res);

	/* Ortadan substring */
	res = ft_substr("Hello World", 6, 5);
	printf("Test 2: %s\n", res);
	free(res);

	/* len string sonunu aşıyor */
	res = ft_substr("Hello World", 6, 50);
	printf("Test 3: %s\n", res);
	free(res);

	/* start string uzunluğundan büyük */
	res = ft_substr("Hello World", 50, 5);
	printf("Test 4: '%s'\n", res);
	free(res);

	/* boş string */
	res = ft_substr("", 0, 5);
	printf("Test 5: '%s'\n", res);
	free(res);

	return (0);
}