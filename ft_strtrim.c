/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 19:37:47 by aalcara-          #+#    #+#             */
/*   Updated: 2021/03/08 16:52:38 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> //!remover!!!

char				*ft_strtrim(char const *s1, char const *set)
{
	size_t			k;
	size_t			new_len;
	size_t			new_start;

	if (!s1)
		return (0);
	if (!set)
		return ((char *)s1);
	k = ft_strlen(s1) - 1;
	new_start = 0;
	while (s1[new_start] != '\0' && ft_strchr(set, s1[new_start]))
		new_start++;
	if (new_start == k + 1)
		return (NULL);
	while (k >= new_start && ft_strchr(set, s1[k]))
		k--;
	new_len = (k + 1) - new_start;
	return (ft_substr(s1, new_start, new_len));
}
/*
int main (void)
{
	char		*s1;
	char		*set;
	char		*result;

	s1 = NULL;
	set = "200";
	result = ft_strtrim(s1, set);
	printf("|%s|\n", result);
	return (0);
}
*/
