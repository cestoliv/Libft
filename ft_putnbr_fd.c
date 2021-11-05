/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:51:13 by ocartier          #+#    #+#             */
/*   Updated: 2021/11/05 14:07:58 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nl;

	nl = n;
	if (n < 0)
	{
		ft_putchar_fd('-', 1);
		nl = -nl;
	}
	if (nl > 100)
		ft_putnbr_fd(nl / 10, fd);
	else
		ft_putchar_fd((nl / 10) + '0', fd);
	if (nl != 0)
		ft_putchar_fd((nl % 10) + '0', fd);
}
