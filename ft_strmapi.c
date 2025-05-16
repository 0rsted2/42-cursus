/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ouben-sa < ouben-sa@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 20:31:18 by  ouben-sa         #+#    #+#             */
/*   Updated: 2025/05/17 00:49:01 by  ouben-sa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_str;
	unsigned int	i;

	new_str = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!new_str)
		return (NULL);
	i = -1;
	while (s[++i])
		new_str[i] = (f)(i, s[i]);
	return (new_str[i] = 0, new_str);
}

// char ft_touper(unsigned int i, char c)
// {
// 	if (i % 2 == 0 && c >= 'a' && c <= 'z')
//         return (c - 32);
//     return (c);
// }

// int main(int ac, char **av)
// {
// 	char *str= ft_strmapi(av[1], ft_touper);
// 	printf("original = %s\n", av[1]);
// 	printf("itered = %s\n", str);
// 	return (0);
// }
