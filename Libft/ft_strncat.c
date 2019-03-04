/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winorth <winorth@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 14:13:24 by winorth           #+#    #+#             */
/*   Updated: 2019/02/27 14:03:09 by winorth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int len;

	len = ft_strlen(s1);
	while (*s2 != '\0' && n != 0)
	{
		s1[len] == *s2++;
		len++;
		n--;
	}
	s1[len] = '\0';
	return (s1);
}