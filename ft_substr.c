/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lunsold <lunsold@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 09:25:57 by lunsold           #+#    #+#             */
/*   Updated: 2025/10/15 12:19:17 by lunsold          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned char	*sub_str;
	size_t	i;
	size_t	s_len;
	
	i = 0;
	if (!s)
		return (NULL);
	while (i < start)
		i++;
	s_len = 0;
	sub_str = malloc((char) * 4);
	while (i >= start)
	{
		sub_str[s_len] = ((unsigned char *)s)[i];
		i++;
		if (s_len == len)
			return (sub_str);
	}
	return (NULL);
}
int main()
{
	const char *str = "Hello, World!";
	unsigned int start = 7;
	size_t len = 5;

	char *result = ft_substr(str, start, len);
	if (result)
	{
		printf("Substring: %s\n", result);
		free(result);
	}
	else
	{
		printf("Failed to allocate memory for substring.\n");
	}

	return 0;
}
