/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lunsold <lunsold@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 15:20:02 by lunsold           #+#    #+#             */
/*   Updated: 2025/10/16 12:08:27 by lunsold          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	nbr;

	i = 0;
	sign = 1;
	nbr = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = ((nbr * 10) + (str[i] - '0'));
		i++;
	}
	return (sign * nbr);
}
// int	main(void)
// {
// 	char	*str;
// 	int		result;

// 	str = "   -1234abc";
// 	result = ft_atoi(str);
// 	printf("The converted integer is: %d\n", result);
// 	return (0);
// }
