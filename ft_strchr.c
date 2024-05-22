/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <licohen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 17:11:24 by licohen           #+#    #+#             */
/*   Updated: 2024/05/22 18:54:29 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	c = (char) c;
	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	if (s[i] == c)
		return ((char *)&s[i]);
	return (NULL);
}

// int	main(void)
// {
// 	char test[] = "Hello comment tu vas";
// 	printf("%c\n", ft_strchr(test, 'c'));
// 	return (0);
// }