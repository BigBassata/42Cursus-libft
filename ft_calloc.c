/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <licohen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 15:18:26 by licohen           #+#    #+#             */
/*   Updated: 2024/05/22 18:00:38 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	const size_t	size_total = nmemb * size;
	void			*ptr;

	ptr = NULL;
	if (size_total == 0 || nmemb <= SIZE_MAX / size)
		ptr = malloc(size_total);
	if (ptr != NULL)
		ft_bzero(ptr, size_total);
	return (ptr);
}
