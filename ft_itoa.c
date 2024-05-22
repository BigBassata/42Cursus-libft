/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <licohen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 17:10:18 by licohen           #+#    #+#             */
/*   Updated: 2024/05/22 19:37:12 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int count_size(int n)
{
    int i ; 

    i = 1;

    while (n != 0)
    {
        n = n / 10;
        i++;
    }
    return (i);
}

char	*ft_itoa(int n)
{  
    char *str;
    long int nb;
    int len;

    long int nb = n;
    int len = count_size(n);
    str = (char *)malloc(sizeof(char) * (len));
    if (str == NULL)
        return NULL;

    if (n == 0)
    {
        str[0] = '0';
        str[1] = '\0';
        return (str);
    }
    
}