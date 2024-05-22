/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <licohen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 17:10:46 by licohen           #+#    #+#             */
/*   Updated: 2024/05/22 15:34:18 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_reverse_cpy(void *dest, const void *src, size_t n)
{
	while (n > 0)
	{
		((char *)dest)[n - 1] = ((char *)src)[n - 1];
		n--;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest > src)
		ft_reverse_cpy(dest, src, n);
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

//int main ()
// {
//     char dest[] = "aaaaaa";
//     char src[] = "bbbbbb";
//     printf("%s\n", (char *)ft_memmove(dest, src, 5));
// }