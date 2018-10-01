/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_range.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thperchi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/01 16:13:44 by thperchi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/01 16:13:51 by thperchi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_intlen(int x, int y)
{
	int z;

	z = 0;
	while (x <= y)
	{
		x++;
		z++;
	}
	return (z);
}

int		*ft_range(int min, int max)
{
	int x;
	int *tab;

	x = 0;
	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(ft_intlen(min, max)));
	while (min < max)
	{
		tab[x] = min;
		x++;
		min++;
	}
	return (tab);
}
