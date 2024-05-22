/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <licohen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 17:12:16 by licohen           #+#    #+#             */
/*   Updated: 2024/05/22 19:37:04 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
    int i;
    char *last_occ;

    c = (char) c;
    i = 0;
    while (s[i])
    {
        if (s[i] == c)
            last_occ = (char *)&s[i];
        i++;
    }
    if (c == '\0')
        return (char *)&s[i];
    return last_occ;
}

// int main (void)
// {
//     char test[] = "Hello tu veux quoi";
//     printf("%s\n", ft_strrchr(test, 'o'));
//     return (0);

// }