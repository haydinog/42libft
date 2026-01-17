/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haydinog <haydinog@student.42istanbul.com.tr>  #+#  +:+       +#+    */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-06 13:15:19 by haydinog          #+#    #+#             */
/*   Updated: 2026-01-06 13:15:19 by haydinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		s;
	int		res;

	s = 1;
	res = 0;
	while ((*nptr >= '\t' && *nptr <= '\r') || *nptr == ' ')
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			s *= -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		res = res * 10 + (*nptr - '0');
		nptr++;
	}
	return (res * s);
}

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("Test 1: \"%s\" -> %d\n", "42", ft_atoi("42"));
	printf("Test 2: \"%s\" -> %d\n", "-42", ft_atoi("----42"));
	printf("Test 3: \"%s\" -> %d\n", "+42", ft_atoi("+42"));
	printf("Test 4: \"%s\" -> %d\n", "   42", ft_atoi("   42"));
	printf("Test 5: \"%s\" -> %d\n", "   -42", ft_atoi("   -42"));
	printf("Test 6: \"%s\" -> %d\n", "4193 with words", ft_atoi("4193 with words"));
	printf("Test 7: \"%s\" -> %d\n", "words and 987", ft_atoi("words and 987"));
	printf("Test 8: \"%s\" -> %d\n", "2147483647", ft_atoi("2147483647"));
	printf("Test 9: \"%s\" -> %d\n", "-2147483648", ft_atoi("-2147483648"));
	printf("Test 10: \"%s\" -> %d\n", "", ft_atoi(""));

	return (0);
}
