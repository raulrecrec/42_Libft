/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rexposit <rexposit@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:28:40 by rexposit          #+#    #+#             */
/*   Updated: 2024/09/23 14:25:54 by rexposit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h> //SUSTITUIR LIBRERIA CON LIBFT.H
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	x;

	x = 0;
	if (n == 0)
		return (0);
	while (x < n && s1[x] == s2[x] && s1[x] != '\0' && s2[x] != '\0')
		x++;
	if (x == n)
		return (0);
	return (s1[x] - s2[x]);
}
