/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thperchi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/05 17:04:12 by thperchi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/05 17:11:36 by thperchi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int x;
	char *str;

	x = 0;
	str = malloc(sizeof(*src));
	if (str == NULL)
		return (NULL);
	while (src[x])
	{
		str[x] = src[x];
		x++;
	}
	return (str);
}
