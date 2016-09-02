/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 18:32:44 by gyson             #+#    #+#             */
/*   Updated: 2016/08/23 19:36:31 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int));
void	ft_putnbr(int nb);

int		main(void)
{
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	ft_foreach(a, 10, &ft_putnbr);
	return (0);
}
