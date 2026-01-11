/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haydinog <haydinog@student.42istanbul.com.tr>  #+#  +:+       +#+    */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-11 16:24:23 by haydinog          #+#    #+#             */
/*   Updated: 2026-01-11 16:24:23 by haydinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

void	my_test_function(unsigned int i, char *c)
{
	if (i % 2 != 0 && (*c >= 'a' && *c <= 'z'))
	{
		*c = *c - 32; // Küçük harfi büyük harfe çevirme
	}
}

int	main(void)
{
	char str[] = "merhaba dunya";

	printf("Islemden once: %s\n", str);

	// Fonksiyonu cagirma
	ft_striteri(str, &my_test_function);

	printf("Islemden sonra: %s\n", str);

	return (0);
}
