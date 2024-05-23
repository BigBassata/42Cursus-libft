/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 15:18:26 by licohen           #+#    #+#             */
/*   Updated: 2024/05/23 23:44:21 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	size_t	size_total; 
	void			*ptr;

	size_total = nmemb * size;
	if (size_total == 0 || nmemb <= SIZE_MAX / size)
		ptr = (void *)malloc(size_total);
	if (!ptr)
		return (NULL);	
	ft_bzero(ptr, size_total);
	return (ptr);
}
