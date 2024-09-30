/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rexposit <rexposit@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:43:00 by rexposit          #+#    #+#             */
/*   Updated: 2024/09/30 21:08:57 by rexposit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
	char	**str_split;
	size_t	i;
	size_t	j;
	size_t	char_len;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		char_len++;
		if (s[i] == c)
			char_len = 0;
			j++;
		//ft_strdup(str_split[j][i], s[i], char_len);
		i++;
	}
}
