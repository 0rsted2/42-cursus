/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ouben-sa < ouben-sa@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 04:28:22 by  ouben-sa         #+#    #+#             */
/*   Updated: 2025/05/18 12:29:52 by  ouben-sa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_strlen_malicieux(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != c)
	{
		i++;
	}
	return (i);
}

static char	*ft_strdup_malicieux(const char *src, char c)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc(sizeof(char) * (ft_strlen_malicieux(src, c) + 1));
	if (!dest)
		return (NULL);
	while (src[i] && src[i] != c)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static int	count_word(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] == 0)
			break ;
		count += 1;
		while (str[i] && str[i] != c)
			i++;
	}
	return (count);
}

static int	free_split(char **res)
{
	int	i;

	i = 0;
	while (res[i])
		free(res[i++]);
	free(res);
	return (1);
}

char	**ft_split(const char *str, char c)
{
	char	**res;
	int		i;
	int		count;

	res = ft_calloc(count_word(str, c) + 1, sizeof(char *));
	if (res == 0)
		return (0);
	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] == 0)
			break ;
		res[count] = ft_strdup_malicieux(&str[i], c);
		if (res[count] == 0 && free_split(res))
			return (0);
		count += 1;
		while (str[i] && str[i] != c)
			i++;
	}
	return (res);
}

// static char	*fill_word(char *str, char c)
// {
// 	str = malloc(ft_strlen(count_word)) + 1;

// }

// void test_word_count(char *word, int expected)
// {
// 	int res = count_word(word, ' ');
// 	if (res == expected)
// 		printf("%s has %d mots, correct !\n", word, res);
// 	else
// 		printf("%s has %d mots, faux !\n", word, res);

// }

// void test_split(char *str, char c)
// {
// 	char	**res;
// 	int		i = 0;

// 	printf("spliting : %s, using %c\n", str, c);
// 	res = ft_split(str, c);
// 	while (res[i])
// 	{
// 		printf("%i : '%s'\n", i, res[i]);
// 		i++;
// 	}
// }

// int main()
// {

// 	test_split("   salut les gars    " , ' ');
// }
