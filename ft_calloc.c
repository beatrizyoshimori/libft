/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 19:01:46 by coder             #+#    #+#             */
/*   Updated: 2022/09/07 20:11:41 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned char	*ft_create(size_t nmemb, size_t size)
{
	unsigned char	*str;

	str = malloc(nmemb * size);
	return (str);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	unsigned char	*t;

	if (nmemb * size == 0)
		return (NULL);
	if (nmemb * size > 2147483647)
	{
		write(1, "Killed\n", 7);
		return (NULL);
	}
	else
		t = ft_create(nmemb, size);
	i = 0;
	while (i < nmemb * size)
	{
		t[i] = 0;
		i++;
	}
	return ((void *)t);
}
