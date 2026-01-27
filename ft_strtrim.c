/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haydinog <haydinog@student.42istanbul.com.tr>  #+#  +:+       +#+    */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-11 14:37:08 by haydinog          #+#    #+#             */
/*   Updated: 2026-01-11 14:37:08 by haydinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_inset(char c, const char *set)
{
	int		i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*newstr;
	size_t	i;
	size_t	start;
	size_t	end;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_inset(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_inset(s1[end - 1], set))
		end--;
	len = end - start;
	newstr = malloc(sizeof (char) * (len + 1));
	if (!newstr)
		return (NULL);
	i = 0;
	while (i < len)
		newstr[i++] = s1[start++];
	newstr[i] = '\0';
	return (newstr);
}

// int main(void)
// {
// 	#include <stdio.h>

//     char *result;

//     /* Test 1: Baştan ve sondan trim */
//     result = ft_strtrim("   hello world   ", " ");
//     printf("Test 1: '%s'\n", result);
//     free(result);
// }