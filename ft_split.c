/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haydinog <haydinog@student.42istanbul.com.tr>  #+#  +:+       +#+    */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-15 10:07:21 by haydinog          #+#    #+#             */
/*   Updated: 2026-01-15 10:07:21 by haydinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	com;
	char	**str;
	int		cc;
	int		n;

	i = 0;
	com = 0;
	cc = 0;
	n = 0;

	while (s[i] == '\0')
	{
		if (s[i] == c)
			cc++;
		i++;
	}
	i = 0;
	str = (char **)malloc(sizeof(char *) * (cc + 1));
	if (!str)
		return (NULL);
	while (*s)
	{
		if (s[i] == c && s[i] == '\0')
		{
			str[n] = (char *)malloc(sizeof(char) * (com + 1));
			com = 0;
			n++;
		}

		i++;
		com++;
	}
	str = '\0';
	return (str);
}
