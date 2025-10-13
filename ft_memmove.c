/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lunsold <lunsold@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 21:18:26 by lunsold           #+#    #+#             */
/*   Updated: 2025/10/09 13:21:58 by lunsold          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int				i;
	unsigned char	temp[255];

	i = 0;
	while (i < len)
	{
		temp[i] = ((unsigned char *)src)[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		((unsigned char *)dst)[i] = temp[i];
		i++;
	}
	return (dst);
}
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char src[] = "Hello, World!";
// 	char dst[20];

// 	// // Beispiel 1: Normale Kopie
// 	// ft_memmove(dst, src, 13);
// 	// printf("dst nach memmove: %s\n", dst);

// 	// Beispiel 2: Überlappende Bereiche (src < dst)
// 	char buffer[20] = "1234567890";
// 	ft_memmove(buffer + 3, buffer, 8);
// 	printf("Überlappung (src < dst): %s\n", buffer);

// 	// // Beispiel 3: Überlappende Bereiche (dst < src)
// 	// strcpy(buffer, "abcdefghij");
// 	// ft_memmove(buffer, buffer + 2, 8);
// 	// printf("Überlappung (dst < src): %s\n", buffer);

// 	return (0);
// }