/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lunsold <lunsold@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 21:43:47 by lunsold           #+#    #+#             */
/*   Updated: 2025/10/09 05:48:44 by lunsold          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	int	i;
	int	r;

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
	return (dst);
}
