/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haydinog <haydinog@student.42istanbul.com.tr>  #+#  +:+       +#+    */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-11 16:32:01 by haydinog          #+#    #+#             */
/*   Updated: 2026-01-11 16:32:01 by haydinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

#include <fcntl.h>
int main(void)
{
	int fd;
	fd = open("deneme.txt", O_CREAT | O_WRONLY, 777);
	ft_putchar_fd('k',fd);
	close (fd);

}