/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rexposit <rexposit@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:26:27 by rexposit          #+#    #+#             */
/*   Updated: 2024/10/07 12:48:01 by rexposit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	c_cpy;

	i = ft_strlen(s) + 1;
	c_cpy = (char) c;
	while (i >= 0)
	{
		if (s[i] == c_cpy)
			return ((char *)&s[i]);
		i--;
	}
	if (c_cpy == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
