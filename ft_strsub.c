/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwidaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 18:11:39 by nwidaha           #+#    #+#             */
/*   Updated: 2019/02/03 18:23:01 by nwidaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new_string;
	size_t	i;

	if (!s)
		return (NULL);
	new_string = ft_strnew(len);
	if (!new_string)
		return (NULL);
	i = 0;
	while (i < len)
		*(new_string + i++) = *(s + start++);
	return (new_string);
}
