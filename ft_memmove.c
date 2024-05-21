/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <licohen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 17:10:46 by licohen           #+#    #+#             */
/*   Updated: 2024/05/21 16:51:29 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_reverse_cpy(void *dest, const void *src, size_t n)
{
	while (n > 0)
	{
		((char *)dest)[n - 1] = ((char *)src)[n - 1];
		n--;
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest > src)
		dest = ft_reverse_cpy(dest, src, n);
	else
		dest = ft_memcpy(dest, src, n);
	return (dest);
}

// int main ()
// {
//     char dest[] = "aaaaaa";
//     char src[] = "bbbbbb";
//     printf("%s\n", (char *)ft_memmove(dest, src, 5));
// }