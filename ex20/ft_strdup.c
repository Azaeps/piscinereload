/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thperchi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/01 16:13:30 by thperchi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/01 16:58:22 by thperchi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		x;
	char	*y;

	while (src[x])
		x++;
	y = (char *)malloc(sizeof(x + 1));
	x = 0;
	if (y == NULL)
		return (NULL);
	while (src[x])
	{
		y[x] = src[x];
		x++;
	}
	src[x] = '\0';
	return (y);
}
