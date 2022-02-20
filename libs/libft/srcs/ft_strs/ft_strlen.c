/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsabir <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 09:34:06 by hsabir            #+#    #+#             */
/*   Updated: 2022/02/20 14:49:44 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libfm.h>

size_t	fm_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
