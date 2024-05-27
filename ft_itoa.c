/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <licohen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 17:10:18 by licohen           #+#    #+#             */
/*   Updated: 2024/05/24 16:58:22 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(long nb)
{
	int	i;
	int	size;

	size = 1;
	i = 0;
	if (nb < 0)
	{
		nb = -nb;
		size++;
	}
	while (nb > 9)
	{
		nb = nb / 10;
		size++;
	}
	return (size);
}

static int	ft_logic(char *str, long nb)
{
	int	i;
	int	len;

	i = 0;
	len = ft_size(nb);
	if (nb < 0)
	{
		nb = -nb;
		str[i] = '-';
	}
	while (nb >= 0)
	{
		if (nb < 10)
		{
			str[len - i - 1] = nb + 48;
			str[len] = '\0';
			return (0);
		}
		str[len - i - 1] = nb % 10 + 48;
		i++;
		nb = nb / 10;
	}
	return (0);
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*str;

	nb = n;
	str = (char *)malloc((sizeof(char)) * ft_size(nb) + 1);
	if (!str)
		return (NULL);
	ft_logic(str, nb);
	return (str);
}

// int	main(int argc, char **argv)
// {
// 	printf("%s", ft_itoa(atoi(argv[1])));
// 	return (0);
// }