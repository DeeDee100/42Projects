/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagonza <amagonza@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 19:02:22 by amagonza          #+#    #+#             */
/*   Updated: 2021/08/11 09:54:52 by amagonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(long int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len++;
	if (n < 0)
	{
		n *= -1;
		len ++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nb)
{
	int			len;
	char		*res;
	long int	n;

	n = nb;
	len = ft_len(n);
	res = malloc ((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res[len--] = 0;
	if (n == 0)
		res[0] = 48;
	if (n < 0)
	{
		n = n * -1;
		res[0] = '-';
	}
	while (n > 0)
	{
		res[len] = 48 + (n % 10);
		n = n / 10;
		len--;
	}
	return (res);
}
