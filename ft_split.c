/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lunsold <lunsold@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:20:02 by lunsold           #+#    #+#             */
/*   Updated: 2025/10/16 18:53:37 by lunsold          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_c(char *s, char start, char c)
{
	int	i;

	i = start;
	while (s[i] != c)
	{
		i++;
	}
	return (i);
}
void	ft_counter(const char *s, char *counter, char c)
{
	counter[1] = 0;
	counter[2] = 0;
	counter[3] = 0;
	counter[4] = ft_count_c(s, c);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		counter[5];
}
