/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagonza <amagonza@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 17:23:28 by amagonza          #+#    #+#             */
/*   Updated: 2021/08/10 16:08:56 by amagonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	a;
	size_t	slen;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	a = 0;
	if (size < dlen + 1)
		return (slen + size);
	while (src[a] && ((dlen + a) < (size - 1)))
	{
		dst[dlen + a] = src[a];
		a++;
	}
	dst[dlen + a] = 0;
	if (size > dlen)
		return (dlen + slen);
	return (size + slen);
}
