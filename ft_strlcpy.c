/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 17:11:34 by licohen           #+#    #+#             */
/*   Updated: 2024/05/22 01:13:20 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (size > 0)
	{
		i = 0;
		while (i < size - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			++i;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

// int main(void)
// {
// 	char dest[20] = "Bonjour tlm";
// 	char src[] = "Hello World";
// 	size_t length;

// 	length = ft_strlcpy(dest, src, sizeof(dest));
// 	printf("%zu\n", length);
// 	return (0);
// }