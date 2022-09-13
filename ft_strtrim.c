/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byoshimo <byoshimo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 00:42:28 by byoshimo          #+#    #+#             */
/*   Updated: 2022/09/13 03:22:45 by byoshimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>

// char	*ft_substr(char const *s, unsigned int start, size_t len);
// // char	*ft_strnstr(const char *big, const char *little, size_t len);
// // size_t	ft_strlcpy(char *dst, const char *src, size_t size);

// size_t	ft_strlen(const char *s)
// {
// 	size_t	length;

// 	length = 0;
// 	while (*s)
// 	{
// 		length++;
// 		s++;
// 	}
// 	return (length);
// }

#include "libft.h"

size_t	ft_strtrim_beg(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	l;

	i = 0;
	k = 0;
	while (s1[k])
	{
		j = i;
		l = 0;
		while (set[l])
		{
			if (s1[k] == set[l])
				i++;
			l++;
		}
		if (j == i)
			break ;
		k++;
	}
	return (i);
}

size_t	ft_strtrim_end(char const *s1, char const *set, size_t m)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	l;

	i = m;
	if (i != ft_strlen(s1))
	{
		k = ft_strlen(s1) - 1;
		while (k > 0)
		{
			j = i;
			l = 0;
			while (set[l])
			{
				if (s1[k] == set[l])
					i++;
				l++;
			}
			if (j == i)
				break ;
			k--;
		}
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	m;
	size_t	n;
	char	*str;

	m = ft_strtrim_beg(s1, set);
	n = ft_strtrim_end(s1, set, m);
	str = ft_substr(s1, m, ft_strlen(s1) - n);
	if (str == NULL)
		return (NULL);
	return (str);
}

// int	main(void)
// {
// 	char *s1 = "abcdba";
// 	char *set = "acb";

// 	printf("%s\n", ft_strtrim(s1, set));
// }
