/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lunsold <lunsold@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:58:22 by lunsold           #+#    #+#             */
/*   Updated: 2025/10/16 17:19:39 by lunsold          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*sub_str;

	if (!s1)
		return (ft_strdup(""));
	i = ft_strlen(s1);
	sub_str = malloc(i + 1);
	if (!sub_str)
		return (NULL);
	i = 0;
	while (s1[i] != set[0])
	{
		sub_str[i] = s1[i];
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}
// int	main(void)
// {
// 	const char	*s1 = "Hello, World!";
// 	const char	*set = " World!";
// 	char		*result;

// 	result = ft_strtrim(s1, set);
// 	if (result)
// 	{
// 		printf("Trimmed string: %s\n", result);
// 		free(result);
// 	}
// 	else
// 	{
// 		printf("Failed to allocate memory for trimmed string.\n");
// 	}
// 	return (0);
// }
