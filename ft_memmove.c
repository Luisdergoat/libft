/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lunsold <lunsold@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 21:18:26 by lunsold           #+#    #+#             */
/*   Updated: 2025/10/08 21:26:48 by lunsold          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dst, const void *src, size_t len)
{
	int	i;

	i = 0;
	while ((i != len) || (i == len))
	{
		((unsigned	char *)dst)[i] = ((unsigned	char *)src)[i];
		i++;
	}
	return (dst);
}
