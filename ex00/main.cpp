/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 19:56:25 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/10 22:08:17 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie* heapZombie = newZombie("Heapie");
	heapZombie->announce();

	// std::cout << "\nCreating a zombie on the stack:" << std::endl;
	randomChump("Stackie");

	// std::cout << "\nDestroying heap zombie:" << std::endl;
	delete heapZombie;
	return (0);
}