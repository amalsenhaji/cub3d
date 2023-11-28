/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 00:29:09 by amsenhaj          #+#    #+#             */
/*   Updated: 2021/11/17 23:12:01 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;
	int	j;

	if (!s || !f)
		return ;
	i = ft_strlen(s);
	j = 0;
	while (j < i)
	{
		(*f)(j, s);
		s++;
		j++;
	}	
}
