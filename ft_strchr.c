/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haydinog <haydinog@student.42istanbul.com.tr>  #+#  +:+       +#+    */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-07 12:44:13 by haydinog          #+#    #+#             */
/*   Updated: 2026-01-07 12:44:13 by haydinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
		s++;
	}
	if (!(unsigned char)c)
		return ((char *)s);
	return (NULL);
}

// int main()
// {
// 	#include <stdio.h>

// 	const char *str = "Hello, World!";
// 	int c = 0;

// 	char *result = ft_strchr(str, c);

// 	// Null karakteri aramak
// 	result = ft_strchr(str, '\0');
// 	if (result == NULL)
// 		printf("Null karakteri bulundu: %s\n", result);
// 	else
// 		printf("Null karakteri bulunamadı.\n");

// 	return 0;

// int main(void)
// {
// 	#include <stdio.h>

//     const char cdizi[] = "Merhaba, Düny!";
//     char cd = 'a';
//     char *ret;

//     ret = ft_strchr(cdizi, cd);

// printf("Bulunan son %c karakterinden itibaren dizi içeriği: %s", cd, ret);

//     return 0;
// }
