/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haydinog <haydinog@student.42istanbul.com.tr>  #+#  +:+       +#+    */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-07 12:28:21 by haydinog          #+#    #+#             */
/*   Updated: 2026-01-07 12:28:21 by haydinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	*ft_strrchr(const char *s, int c)
{
	char	*p;

	while (*s)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			p = ((char *)s);
		s++;
	}
	if (*(unsigned char *)s == (unsigned char)c)
		return ((char *)s);
	return (p);
}*/

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;

	while (*s)
	{
		if (*s == c)
			p = ((char *)s);
		s++;
	}
	if (*s == c)
		return ((char *)s);
	return (p);
}

int main(void)
{
	#include <stdio.h>

    const char cdizi[] = "Merhaba, Dünya!";
    char cd = 'b';
    char *ret;

    ret = ft_strrchr(cdizi, cd);

    printf("Bulunan son %c karakterinden itibaren dizi içeriği: %s", cd, ret);

    return 0;
}
