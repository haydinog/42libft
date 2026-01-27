/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haydinog <haydinog@student.42istanbul.com.tr>  #+#  +:+       +#+    */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-07 12:24:42 by haydinog          #+#    #+#             */
/*   Updated: 2026-01-07 12:24:42 by haydinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
// int main(void)
// {
// 	#include <stdio.h>
// 	int a = 99;
// 	printf("%d",ft_toupper(a));
// }