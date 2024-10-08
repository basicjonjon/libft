/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jle-doua <jle-doua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 10:17:29 by jle-doua          #+#    #+#             */
/*   Updated: 2024/09/01 15:33:48 by jle-doua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

size_t	ft_strlen(const char *string)
{
	size_t	i;

	i = 0;
	while (string[i])
	{
		i++;
	}
	return (i);
}

size_t	ft_strlennojl(const char *string)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (string[i])
	{
		if (string[i] != '\n')
		{
			count++;
		}
		i++;
	}
	return (count);
}
