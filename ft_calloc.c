/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byoshimo <byoshimo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 19:01:46 by coder             #+#    #+#             */
/*   Updated: 2022/09/14 01:36:37 by byoshimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	void	*t;

	i = nmemb * size;
	if (i == 0 || (nmemb >= 65535 && size >= 65535))
		return (NULL);
	else
	{
		t = malloc(i);
		ft_bzero(t, i);
	}	
	return (t);
}
