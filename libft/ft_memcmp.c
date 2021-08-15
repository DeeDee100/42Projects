/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagonza <amagonza@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 14:25:53 by amagonza          #+#    #+#             */
/*   Updated: 2021/07/29 17:22:13 by amagonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				res;
	size_t			i;
	unsigned char	*src;
	unsigned char	*dest;

	src = (unsigned char *) s1;
	dest = (unsigned char *) s2;
	i = 0;
	res = 0;
	while (i < n)
	{
		if (src[i] != dest[i])
		{
			res = src[i] - dest[i];
			return (res);
		}
		i++;
	}
	return (res);
}
