/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lunsold <lunsold@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 09:25:57 by lunsold           #+#    #+#             */
/*   Updated: 2025/10/15 18:43:56 by lunsold          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	i;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	sub_str = malloc(s_len + 1);
	if (!sub_str)
		return (NULL);
	i = start;
	while (i < len + start)
	{
		sub_str[i - start] = s[i];
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}

// int	main(void)
// {
// 	unsigned int	start;
// 	size_t			len;
// 	char			*result;
// 	const char		*str = "Hello, World!";

// 	start = 20;
// 	len = 5;
// 	result = ft_substr(str, start, len);
// 	if (result)
// 	{
// 		printf("Substring: <%s>\n", result);
// 		free(result);
// 	}
// 	else
// 	{
// 		printf("Failed to allocate memory for substring.\n");
// 	}
// 	return (0);
// }
