/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 17:02:22 by licohen           #+#    #+#             */
/*   Updated: 2024/05/22 00:52:28 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    unsigned int i;
    unsigned int j;
    unsigned int dest_len;
    unsigned int src_len;

    dest_len = ft_strlen(dest);
    src_len = ft_strlen(src);
    if (size <= dest_len)
        return (src_len + size);
    i = dest_len;
    j = 0;
    while (src[j] != '\0' && i < size - 1)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest_len + src_len);
}   

// int main (void)
// {
//     int result;
//     char dest[] = "ABCD";
//     char src[] = "EFGH";

//     result = ft_strlcat(dest, src, 9);
//     printf("%d\n", result);
//     return (0);
// }
