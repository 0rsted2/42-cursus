/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ouben-sa < ouben-sa@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 05:53:17 by  ouben-sa         #+#    #+#             */
/*   Updated: 2025/05/06 23:05:46 by  ouben-sa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	char *s1;
	char *set;

	s1 = "OussMounirOuss";
	set = "Ouss";
	printf("%s\n", ft_strtrim2(s1, set));
	return (0);
}
