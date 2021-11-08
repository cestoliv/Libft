/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:17:23 by ocartier          #+#    #+#             */
/*   Updated: 2021/11/08 11:37:58 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	num_digit(long num)
{
	int	cur;

	cur = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		num = num / 10;
		cur++;
	}
	return (cur);
}

char	*ft_itoa(int n)
{
	long	len;
	long	nl;
	char	*result;

	len = num_digit(n);
	nl = n;
	if (n < 0)
	{
		len++;
		nl *= -1;
	}
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = 0;
	if (nl == 0)
	{
		result[0] = '0';
		return (result);
	}
	while (len--, nl != 0)
	{
		result[len] = (nl % 10) + '0';
		nl = (nl - (nl % 10)) / 10;
	}
	if (n < 0)
		result[len] = '-';
	return (result);
}
