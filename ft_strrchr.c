/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 00:57:19 by coder             #+#    #+#             */
/*   Updated: 2022/09/07 23:01:20 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*t;

	t = NULL;
	if ((unsigned char)c == '\0')
		return (&((char *)s)[ft_strlen(s)]);
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			t = &s[i];
		i++;
	}
	return ((char *)t);
}
