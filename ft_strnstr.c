/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <licohen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 10:34:05 by licohen           #+#    #+#             */
/*   Updated: 2024/05/23 17:39:34 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_find(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	while (big[i] != '\0' && little[i] != '\0' && i < len)
	{
		if (big[i] != little[i])
			return (0);
		i++;
	}
	if (little[i] == '\0')
	{
		return (1);
	}
	else
		return (0);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[0])
		{
			if (ft_find(&big[i], little, len - i) == 1)
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char str1[] = "hello, world";
// 	char str2[] = "lo";
// 	printf("%s\n", ft_strnstr(str1, str2, 12));
// 	return (0);
// }