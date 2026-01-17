/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haydinog <haydinog@student.42istanbul.com.tr>  #+#  +:+       +#+    */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-07 12:45:43 by haydinog          #+#    #+#             */
/*   Updated: 2026-01-07 12:45:43 by haydinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] != '\0' && big[i + j] == little[j] && i + j < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

#include <stdio.h>
#include "libft.h"

int main() {
    const char *big = "Hello, world!istan";
    const char *little1 = "world";
    const char *little2 = "earth";
    size_t len = 20;

    // İlk örnek: "world" alt string'ini arıyoruz
    char *result1 = ft_strnstr(big, little1, len);
    if (result1) {
        printf("Eşleşme bulundu: %s\n", result1);
    } else {
        printf("Eşleşme bulunamadı.\n");
    }

    // İkinci örnek: "earth" alt string'ini arıyoruz (bulunmayacak)
    char *result2 = ft_strnstr(big, little2, len);
    if (result2) {
        printf("Eşleşme bulundu: %s\n", result2);
    } else {
        printf("Eşleşme bulunamadı.\n");
    }

    return 0;
}
