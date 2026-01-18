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
