/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skiptabs_sym.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 18:00:11 by ksharlen          #+#    #+#             */
/*   Updated: 2019/09/23 18:01:58 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_skiptabs_sym(const char *str, char sym)
{
	if (str && *str)
	{
		while (str && *str && (TABS(*str) || *str == sym))
			++str;
	}
	return ((char *)str);
}
