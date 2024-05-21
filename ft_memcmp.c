/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <licohen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 17:10:38 by licohen           #+#    #+#             */
/*   Updated: 2024/05/21 17:53:35 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((uint8_t *)s1)[i] != ((uint8_t *)s2)[i])
			return (((uint8_t *)s1)[i] - ((uint8_t *)s2)[i]);
		i++;
	}
	return (0);
}
