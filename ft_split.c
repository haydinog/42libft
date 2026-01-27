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

static int	count_words(char const *s, char c)
{
	size_t	i;
	size_t	word;

	word = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			word++;
		i++;
	}
	return (word);
}

static char	*cpy_words(char const *s, char c)
{
	char	*words;
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	words = malloc(sizeof (char) * (len + 1));
	if (!words)
		return (NULL);
	ft_memcpy(words, s, len);
	words[len] = '\0';
	return (words);
}

static char	**ft_free_all(char **split, size_t j)
{
	while (j--)
		free(split[j]);
	free(split);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**split;

	split = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!split)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] != c && s[i])
		{
			split[j] = cpy_words(&s[i], c);
			if (!split[j])
				return (ft_free_all(split, j));
			j++;
		}
		while (s[i] && s[i] != c)
			i++;
	}
	split[j] = NULL;
	return (split);
}
// #include <stdio.h>
// int main(void)
// {
// 	int		i = 0;
// 	char **res;
// 	char str[] = "selam ben aaada";
// 	res = ft_split(str, ' ');
// 	while(res[i])
// 	{
// 		printf("%s\n", res[i]);
// 		free(res[i]);
// 		i++;
// 	}
// 	free(res);
// 	res = NULL;
// }
// #include <stdio.h>
// int main(void)
// {
// 	char **rest;
// 	char str[] = "     ss  ss s ss ";
// 	int i = 0;
// 	rest = ft_split(str, ' ');
// 	rest[7] = NULL;
// 	while (rest[i])
// 	{
// 		printf("%s\n", rest[i]);
// 		i++;
// 	}
// 	ft_free_all(&rest[i], i);
// }
