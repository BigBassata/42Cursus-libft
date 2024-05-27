/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <licohen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 17:11:11 by licohen           #+#    #+#             */
/*   Updated: 2024/05/27 15:49:07 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_tab(char **tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

static int	ft_count_words(const char *str, char c)
{
	int	nb_words;
	int	i;

	nb_words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && (i == 0 || str[i - 1] == c))
			nb_words++;
		i++;
	}
	return (nb_words);
}

static char	*fill_word(char *str, char const *s, int i, int len)
{
	int	j;

	j = 0;
	while (len > 0)
	{
		str[j] = s[i - len];
		j++;
		len--;
	}
	str[j] = '\0';
	return (str);
}

char	**ft_div_words(char const *s, char c, char **tab, int nb_word)
{
	int	i;
	int	k;
	int	len;

	i = 0;
	k = 0;
	while (k < nb_word)
	{
		len = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			len++;
		}
		tab[k] = (char *)malloc(sizeof(char) * (len + 1));
		if (!tab[k])
		{
			ft_free_tab(tab, k);
			return (NULL);
		}
		fill_word(tab[k++], s, i, len);
	}
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char			**tab;
	unsigned int	nb_words;

	if (!s)
		return (NULL);
	nb_words = ft_count_words(s, c);
	tab = (char **)malloc(sizeof(char *) * (nb_words + 1));
	if (!tab)
		return (0);
	tab = ft_div_words(s, c, tab, nb_words);
	if (!tab)
	{
		return (NULL);
	}
	tab[nb_words] = NULL;
	return (tab);
}

// int main (void)
// {
//     char *s = "Hello comment tu vas";
//     char c = ' ';
//     char **result = ft_split(s, c);
//     int i;

//     i = 0;
//     if (result)
//     {
//         while (result[i] != NULL)
//         {
//             printf("%s\n", result[i]);
//             i++;
//             free(result);
//         }
//     }
//     return (0);
// }