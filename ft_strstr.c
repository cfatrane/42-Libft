/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 12:24:50 by cfatrane          #+#    #+#             */
/*   Updated: 2016/11/04 12:24:53 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	length;
	int p;

	if (!haystack || !needle)
		return (NULL);
	if (*needle == '\0')
		return ((char *)haystack);
	length = ft_strlen(needle);
	while (*haystack)
	{
		p = ft_strncmp(haystack, needle, length);
		if (p == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
