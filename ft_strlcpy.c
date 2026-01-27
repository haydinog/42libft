/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haydinog <haydinog@student.42istanbul.com.tr>  #+#  +:+       +#+    */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-07 11:37:22 by haydinog          #+#    #+#             */
/*   Updated: 2026-01-07 11:37:22 by haydinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size -1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

// int main()

// {
// 	#include <stdio.h>
//     char    kaynak[] = "Merhaba Dunya"; // 13 karakter
//     char    hedef[20];                 // Sadece 5 karakterlik yerimiz var
//     size_t  sonuc;
// 	sonuc = ft_strlcpy(hedef, kaynak, 20);

//     printf("Kaynak metin: %s (Uzunluk: %lu)\n", kaynak, sonuc);
//     printf("Hedef kapasitesi: 5\n\n");

//     // Fonksiyonu çağırıyoruz
//     sonuc = ft_strlcpy(hedef, kaynak, 5);

//     printf("Kopyalama bittikten sonra hedef: %s\n", hedef);
//     printf("Fonksiyonun dondugu deger: %zu\n", sonuc);

//     // İşte püf noktası burası:
//     if (sonuc >= 5)
//     {
//         printf("\nDIKKAT: Veri kesildi! ");
//         printf("Tum metni kopyalamak icin %zu 
//karakterlik yere ihtiyacin vardi.\n", sonuc + 1);
//     }
//     else
//     {
//         printf("\nBasarili: Veri tam kopyalandi.\n");
//     }

//     return (0);
// }