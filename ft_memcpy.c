/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 11:23:38 by cfatrane          #+#    #+#             */
/*   Updated: 2016/11/04 11:23:45 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*oct1;
	unsigned char	*oct2;

	oct1 = (unsigned char *)dst;
	oct2 = (unsigned char *)src;
	if (dst == src || n == 0)
		return (dst);
	while (n--)
		*oct1++ = *oct2++;
	return (dst);
}