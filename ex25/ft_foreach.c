/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_foreach.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thperchi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/01 16:14:28 by thperchi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/01 16:14:29 by thperchi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int x;

	x = 0;
	while (x < length)
	{
		f(tab[x]);
		x++;
	}
}
