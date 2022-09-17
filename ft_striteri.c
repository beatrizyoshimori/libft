/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byoshimo <byoshimo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 00:25:26 by byoshimo          #+#    #+#             */
/*   Updated: 2022/09/15 02:34:49 by byoshimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
// #include <stdlib.h>

// void	f(unsigned int i, char *s)
// {
// 	*s += 1;
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// int	main(void)
// {
// 	//char *s;
// 	//char s[] = "abcde";
// 	//s = malloc(6);
// 	//s = "abcde";
// 	//printf("%s\n", s);
// 	//ft_striteri(s, f);
// 	//printf("%s\n", s);
// 	return (0);
// }