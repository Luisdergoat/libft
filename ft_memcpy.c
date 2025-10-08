/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lunsold <lunsold@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 20:43:53 by lunsold           #+#    #+#             */
/*   Updated: 2025/10/08 21:08:45 by lunsold          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void  *memcpy(void	*restrict dst, const void	*restrict src, size_t n)
{
	int	i;

	i = 0;
	while (i <= n)
	{
		((unsigned	char *)dst)[i] = ((unsigned	char *)src)[i];
		i++;
	}
}
