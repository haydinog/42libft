/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haydinog <haydinog@student.42istanbul.com.tr>  #+#  +:+       +#+    */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-09 12:53:32 by haydinog          #+#    #+#             */
/*   Updated: 2026-01-09 12:53:32 by haydinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	lstr;
	size_t	i;
	char	*newstr;

	i = 0;
	lstr = ft_strlen(s);
	newstr = (char *)malloc(sizeof(char) * (lstr + 1));
	if (!newstr)
		return (NULL);
	while (i < lstr)
	{
		newstr[i] = f(i, s[i]);
		i++;
	}
	newstr[lstr] = '\0';
	return (newstr);
}

#include <stdio.h>
#include <stdlib.h>

/* ft_strmapi prototipi */
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

/* Örnek dönüşüm fonksiyonu */
char shift_upper(unsigned int i, char c)
{
    if (c >= 'a' && c <= 'z')
        return c - 32; // küçük harfi büyük harfe çevir
    return c;
}

/* Örnek başka fonksiyon: index ile değiştir */
char add_index(unsigned int i, char c)
{
    return c + i; // her karakterin ASCII değerine index ekle
}

int main(void)
{
    char *res;

    /* Test 1: küçük harfi büyüğe çevir */
    res = ft_strmapi("hello world", shift_upper);
    printf("Test 1: %s\n", res);
    free(res);

    /* Test 2: karaktere index ekle */
    res = ft_strmapi("abcd", add_index);
    printf("Test 2: %s\n", res);
    free(res);

    /* Test 3: boş string */
    res = ft_strmapi("", shift_upper);
    printf("Test 3: '%s'\n", res);
    free(res);

    return 0;
}
