/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 15:06:34 by mde-laga          #+#    #+#             */
/*   Updated: 2018/11/20 15:07:26 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*s2;
	size_t	i;

	if (!(s2 = (char*)malloc(sizeof(char) * ft_strlen((char*)s1) + 1)))
		return (NULL);
	i = -1;
	while (s1[++i] && i < n)
		s2[i] = s1[i];
	s2[i] = '\0';
	return (s2);
}
