/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haydinog <haydinog@student.42istanbul.com.tr>  #+#  +:+       +#+    */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-11 16:33:23 by haydinog          #+#    #+#             */
/*   Updated: 2026-01-11 16:33:23 by haydinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}

int	main(void)
{
	char *mesaj = "Merhaba Dunya!";

	// 1. Standart ciktiya (ekran) yazdirma
	ft_putstr_fd("Ekrana yazdirilan mesaj: ", 1);
	ft_putstr_fd(mesaj, 1);
	write(1, "\n", 1); // Alt satira gecmek icin
}