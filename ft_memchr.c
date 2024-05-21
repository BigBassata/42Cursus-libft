/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <licohen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 17:10:33 by licohen           #+#    #+#             */
/*   Updated: 2024/05/21 17:53:40 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	c = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}

// int main()
// {
//     const char str1[] = "Hello, World!";
//     char *result1 = ft_memchr(str1, 'W', ft_strlen(str1));
//     if (result1 != NULL) {
//         printf("Caractère 'W' trouvé à l'adresse %p: %c\n", result1, *result1);
//     } else {
//         printf("Caractère 'W' non trouvé\n");
//     }
//     return 0;
// }
