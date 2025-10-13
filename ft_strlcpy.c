/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lunsold <lunsold@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 21:29:20 by lunsold           #+#    #+#             */
/*   Updated: 2025/10/09 13:30:31 by lunsold          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	i;

	i = 0;
	while (dst[i] != '\0' && i < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	if (i == dstsize)
	{
		dst[i] = '\0';
	}
	return (dst);
}
