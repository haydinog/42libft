/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haydinog <haydinog@student.42istanbul.com.tr>  #+#  +:+       +#+    */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-11 16:47:11 by haydinog          #+#    #+#             */
/*   Updated: 2026-01-11 16:47:11 by haydinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
	write(fd, "\n", 1);
}

int	main(void)
{
	#include <stdio.h>

	char *mesaj = "Merhaba Dunya!";

	// 1. Standart ciktiya (ekran) yazdirma
	ft_putendl_fd("selam", 1);
	ft_putendl_fd(mesaj, 1);
	write(1, "\n", 1); // Alt satira gecmek icin
}