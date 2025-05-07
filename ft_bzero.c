/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ouben-sa < ouben-sa@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 21:14:46 by  ouben-sa         #+#    #+#             */
/*   Updated: 2025/04/29 05:50:43 by  ouben-sa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*tab;
	size_t			i;

	tab = s;
	i = 0;
	while (i < n)
	{
		tab[i] = '\0';
		i++;
	}
}

/*int	main(void)
{
	char	tab[] = "salut";

	ft_bzero(tab, 3);
	printf("%s", tab);
}*/
