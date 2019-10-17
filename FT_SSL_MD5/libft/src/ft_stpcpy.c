/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stpcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winorth <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 17:49:44 by winorth           #+#    #+#             */
/*   Updated: 2019/10/04 17:49:46 by winorth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_stpcpy(char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while ((s1[i] = s2[i]))
		++i;
	return (s1 + i);
}