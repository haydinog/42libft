/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haydinog <haydinog@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 14:20:24 by haydinog          #+#    #+#             */
/*   Updated: 2026/01/17 17:15:54 by haydinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	n_digits(int n)
{
	int	digit;

	digit = 0;
	if (n <= 0)
		digit++;
	while (n != 0)
	{
		n /= 10;
		digit++;
	}
	return (digit);
}

static char	*ft_itoa_min(void)
{
	char	*str;

	str = (char *)malloc(12);
	if (!str)
		return (NULL);
	ft_memcpy(str, "-2147483648", 12);
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	int		neg;

	neg = (n < 0);
	if (n == -2147483648)
		return (ft_itoa_min());
	if (n < 0)
		n = -n;
	len = n_digits(n) + neg;
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len-- > neg)
	{
		str[len] = (n % 10) + '0';
		n /= 10;
	}
	if (neg)
		str[0] = '-';
	return (str);
}

int main()
{
	#include <stdio.h>

	char *result;

	/* Test 1: Pozitif sayı */
	result = ft_itoa(12345);
	printf("Test 1: %s\n", result);
	free(result);

	/* Test 2: Negatif sayı */
	result = ft_itoa(-6789);
	printf("Test 2: %s\n", result);
	free(result);

	/* Test 3: Sıfır */
	result = ft_itoa(0);
	printf("Test 3: %s\n", result);
	free(result);

	/* Test 4: En küçük negatif sayı */
	result = ft_itoa(-2147483648);
	printf("Test 4: %s\n", result);
	free(result);

	return (0);
}
