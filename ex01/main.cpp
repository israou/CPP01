/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 21:28:30 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/10 21:30:25 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int N = 5;
	Zombie* horde = zombieHorde(N, "Bob");
	if (!horde)
	{
		std::cerr << "Failed to create zombie horde" << std::endl;
		return (1);
	}
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}