/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lunsold <lunsold@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 21:29:20 by lunsold           #+#    #+#             */
/*   Updated: 2025/10/15 18:44:08 by lunsold          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (dst[i] != '\0' && i < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
}
