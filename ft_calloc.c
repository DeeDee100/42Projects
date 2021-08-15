/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagonza <amagonza@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 22:52:05 by amagonza          #+#    #+#             */
/*   Updated: 2021/08/10 14:04:46 by amagonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_calloc(size_t nelem, size_t size)
{
	char	*ptr;

	ptr = malloc(nelem * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, nelem * size);
	return (ptr);
}
