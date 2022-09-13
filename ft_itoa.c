/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 00:04:17 by coder             #+#    #+#             */
/*   Updated: 2022/09/11 16:57:46 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>

#include "libft.h"

char	*ft_itoa_str(char *num, int n, int aux, int i)
{
	if (num == NULL)
		return (NULL);
	else if (n == 0)
		num[0] = '0';
	else if (n > 0)
		aux = n;
	else
	{
		if (n == -2147483648)
		{
			num[10] = '8';
			aux = -(n / 10);
			i--;
		}
		else
			aux = -n;
		num[0] = '-';
	}
	while (aux != 0)
	{
		num[i - 1] = (aux % 10) + 48;
		aux /= 10;
		i--;
	}
	return (num);
}

char	*ft_itoa(int n)
{
	int		i;
	int		aux;
	char	*num;

	aux = n;
	if (n == 0)
		i = 1;
	else
	{
		i = 0;
		while (aux != 0)
		{
			aux /= 10;
			i++;
		}
		if (n < 0)
			i++;
	}
	num = malloc(i + 1);
	num[i] = '\0';
	ft_itoa_str(num, n, aux, i);
	return (num);
}

// char	*ft_itoa(int n)
// {
// 	char	*s;
// 	int		len;
// 	int		aux;

// 	len = 0;
// 	aux = n;
// 	while (aux != 0)
// 	{
// 		len++;
// 		aux = aux / 10;
// 	}
// 	if (n == 0)
// 		len = 1;
// 	aux = n;
// 	if (n < 0)
// 		len++;
// 	s = malloc(len + 1);
// 	if (s == NULL)
// 		return (NULL);
// 	s[len] = '\0';
// 	if (n < 0)
// 	{
// 		if (n == -2147483648)
// 		{
// 			s[len - 1] = '8';
// 			n = n / 10;
// 			len--;
// 		}
// 		n = -n;
// 	}
// 	while (len > 0)
// 	{
// 		s[len - 1] = (n % 10) + 48;
// 		n = n / 10;
// 		len--;
// 	}
// 	if (aux < 0)
// 		s[0] = '-';
// 	return (s);
// }

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(0));
// }