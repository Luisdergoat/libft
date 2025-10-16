/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lunsold <lunsold@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 21:43:47 by lunsold           #+#    #+#             */
/*   Updated: 2025/10/16 18:06:50 by lunsold          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	r;

	i = 0;
	r = 0;
	while (dst[i] != '\0')
	{
		i++;
	}
	if (dst[i] == '\0')
	{
		while (i < dstsize)
		{
			dst[i] = src[r];
			i++;
			r++;
		}
		dst[i] = '\0';
	}
	return (i + r);
}
// int	main(void)
// {
// 	char		dst[20] = "Hello, ";
// 	const char	*src = "World!";
// 	size_t		dstsize;
// 	size_t		result;

// 	dstsize = 15;
// 	result = ft_strlcat(dst, src, dstsize);
// 	printf("Resulting string: %s\n", dst);
// 	printf("Total length: %zu\n", result);
// 	return (0);
// }
