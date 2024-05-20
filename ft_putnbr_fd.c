/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <licohen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 17:11:03 by licohen           #+#    #+#             */
/*   Updated: 2024/05/20 16:16:51 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb > 0)
	{
		ft_putchar_fd(nb / 10, fd);
		ft_putchar_fd(nb % 10 + 48, fd);
	}
	else
	{
		ft_putchar_fd(nb + 48, fd);
	}
}

int	main(void)
{
	ft_putnbr_fd(-0, 1);
}