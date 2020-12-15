/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_word.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 17:57:12 by spalmer           #+#    #+#             */
/*   Updated: 2019/09/29 17:58:28 by spalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_len_word(char const *s, size_t i, char c)
{
	size_t cnt;

	cnt = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		cnt++;
	}
	return (cnt);
}
