/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <licohen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 17:12:03 by licohen           #+#    #+#             */
/*   Updated: 2024/05/27 15:41:19 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	str = (char *)malloc(ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
// static char	ft_toupper_c(unsigned int i, char c)
// {
// 	(void)i;
// 	return (ft_toupper(c));
// }

// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 	{
// 		printf("%s\n", ft_strmapi(av[1], &ft_toupper_c));
// 	}
// 	return (0);
// }