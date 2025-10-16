/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lunsold <lunsold@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:09:38 by lunsold           #+#    #+#             */
/*   Updated: 2025/10/16 12:40:58 by lunsold          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		s_len;
	int		j;
	char	*str;

	if (!s1 && s2)
		return (ft_strdup(""));
	s_len = (ft_strlen(s1) + ft_strlen(s2));
	str = malloc(s_len + 1);
	if (!str)
		return (NULL);
	i = ft_strlen(s1);
	j = 0;
	str = ft_strdup(s1);
	j = 0;
	while (s2[j] != '\0')
	{
		str[i] = s2[j];
		j++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
int	main(void)
{
	const char	*s1 = "Hello, ";
	const char	*s2 = "World!";
	char		*result;

	result = ft_strjoin(s1, s2);
	if (result)
	{
		printf("Joined string: %s\n", result);
		free(result);
	}
	else
	{
		printf("Failed to allocate memory for joined string.\n");
	}
	return (0);
}
