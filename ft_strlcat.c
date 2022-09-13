/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 00:25:37 by coder             #+#    #+#             */
/*   Updated: 2022/09/07 23:29:49 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	length_src;
	size_t	length_dst;

	length_dst = ft_strlen(dst);
	length_src = ft_strlen(src);
	if (size <= length_dst)
		return (size + length_src);
	i = 0;
	while (src[i] != '\0' && (length_dst + i) < size - 1)
	{
		dst[length_dst + i] = src[i];
		i++;
	}
	dst[length_dst + i] = '\0';
	return (length_dst + length_src);
}
