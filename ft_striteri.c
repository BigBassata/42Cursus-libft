/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <licohen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 17:11:40 by licohen           #+#    #+#             */
/*   Updated: 2024/05/27 15:49:57 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static void	ft_putchar_(unsigned int i, char *c)
// {
// 	printf("%d: %c\n", i, *c);
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 	{
// 		ft_striteri(av[1], ft_putchar_);
// 	}
// 	return (0);
// }